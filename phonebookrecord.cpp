#include "phonebookrecord.h"
#include <string>


PhoneBookRecord::PhoneBookRecord(std::string number,
                                 std::string firstName,
                                 std::string name,
                                 std::string address):
    m_number(number),
    m_firstName(firstName),
    m_name(name),
    m_address(address){}


PhoneBookRecord::PhoneBookRecord(const PhoneBookRecord& record):
    m_number(record.m_number),
    m_firstName(record.m_firstName),
    m_name(record.m_name),
    m_address(record.m_address){}


PhoneBookRecord& PhoneBookRecord::operator=(const PhoneBookRecord &record){
    m_number = record.m_number;
    m_firstName = record.m_firstName;
    m_name = record.m_name;
    m_address = record.m_address;

    return *this;
}
