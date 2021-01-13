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


void PhoneBookRecord::setNumber(const std::string &number){  m_number = number;}
std::string PhoneBookRecord::getNumber() const{  return m_number;}

void PhoneBookRecord::setFirstName(const std::string &firstName){  m_firstName = firstName;}
std::string PhoneBookRecord::getFirstName() const{  return m_firstName;}

void PhoneBookRecord::setName(const std::string &name){  m_name = name;}
std::string PhoneBookRecord::getName() const{  return m_name;}

void PhoneBookRecord::setAddress(const std::string &address){  m_address = address;}
std::string PhoneBookRecord::getAddress() const{  return m_address;}


