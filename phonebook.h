#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "phonebookrecord.h"
#include "phonebookio.h"
#include <map>
#include <string>
#include <cstddef>

class PhoneBook
{
private:
    std::map<std::string, PhoneBookRecord> m_recordMap;

    PhoneBook(const PhoneBook& book);
    PhoneBook& operator= (const PhoneBook& book);

public:
    PhoneBook();
    ~PhoneBook();

    int init();
    size_t count() const;
    void printList() const;
    int edit(const std::string &originalNumber, PhoneBookRecord &record);
    int save() const;
    PhoneBookRecord& findByNumber(const std::string &number) const;
    PhoneBookRecord& findByFirstName(const std::string &firstName) const;
    PhoneBookRecord& findByName(const std::string &name) const;
    PhoneBookRecord& findByAddress(const std::string &address) const;
};

#endif // PHONEBOOK_H
