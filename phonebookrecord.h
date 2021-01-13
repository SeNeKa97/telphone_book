#ifndef PHONEBOOKRECORD_H
#define PHONEBOOKRECORD_H

#include <string>

class PhoneBookRecord
{
private:
    std::string m_number;
    std::string m_firstName;
    std::string m_name;
    std::string m_address;


public:
    PhoneBookRecord();
    PhoneBookRecord(std::string number,
                    std::string firstName,
                    std::string name,
                    std::string address);

    PhoneBookRecord(const PhoneBookRecord& record);

    PhoneBookRecord& operator= (const PhoneBookRecord& record);

    void setNumber(const std::string& number);
    std::string getNumber() const;

    void setName(const std::string& name);
    std::string getName() const;

    void setFirstName(const std::string& firstName);
    std::string getFirstName() const;

    void setAddress(const std::string& address);
    std::string getAddress() const;
};

#endif // PHONEBOOKRECORD_H
