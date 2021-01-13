#include "phonebookio.h"
#include "phonebookrecord.h"
#include <string>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>

const std::string PhoneBookIO::m_filePath("book.txt");


int PhoneBookIO::readRecords(std::map<std::string, PhoneBookRecord> &records){
    std::map<std::string, PhoneBookRecord> recordsCopy(records);
    std::ifstream input(m_filePath);

    if(!input){
        input.close();
        return -1;
    }

    while(input.peek() != EOF){
        std::string currentLine{""};
        std::getline(input, currentLine, '\n');

        std::stringstream clStream{currentLine};

        std::string number{};
        std::string firstName{};
        std::string name{};
        std::string address{};

        std::getline(clStream, number, '\t');
        std::getline(clStream, firstName, '\t');
        std::getline(clStream, name, '\t');
        std::getline(clStream, address);

        PhoneBookRecord record{number, firstName, name, address};
        records.insert(std::pair<std::string, PhoneBookRecord>(record.getNumber(), record));

        if(input.fail()){
            records = recordsCopy;

            input.close();
            return -1;
        }
    }

    input.close();
    return records.size();
}


int PhoneBookIO::writeRecords(const std::map<std::string, PhoneBookRecord> &records){
    std::ofstream output(m_filePath);

    if(!output){
        output.close();
        return -1;
    }

    // Clear the file
    output.write("", 0);

    int writeCount{0};
    std::map<std::string, PhoneBookRecord>::const_iterator currentRecord = records.begin();

    while(currentRecord != records.end()){
        const PhoneBookRecord &record{currentRecord->second};
        output<<record.getNumber()<<'\t'
              <<record.getFirstName()<<'\t'
              <<record.getName()<<'\t'
              <<record.getAddress()<<std::endl;

        ++writeCount;
        ++currentRecord;
    }

    return writeCount;
}

