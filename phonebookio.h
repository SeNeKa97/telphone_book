#ifndef PHONEBOOKIO_H
#define PHONEBOOKIO_H

#include "phonebookrecord.h"
#include <set>
#include <string>

class PhoneBookIO
{
private:
    static const std::string m_filePath;
    PhoneBookIO(){}

public:
    static std::set<PhoneBookRecord>& readRecords();
    static int writeRecords(const std::set<PhoneBookRecord> &records);
};

#endif // PHONEBOOKIO_H
