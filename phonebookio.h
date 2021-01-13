#ifndef PHONEBOOKIO_H
#define PHONEBOOKIO_H

#include "phonebookrecord.h"
#include <map>
#include <string>

class PhoneBookIO
{
private:
    static const std::string m_filePath;
    PhoneBookIO(){}

public:
    static int readRecords(std::map<std::string, PhoneBookRecord> &records);
    static int writeRecords(const std::map<std::string, PhoneBookRecord> &records);
};

#endif // PHONEBOOKIO_H
