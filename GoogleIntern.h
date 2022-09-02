// Fransiskus Agapa

// Class GoogleIntern Defintion

#ifndef NEWDELETEMEMBERACCESS3_GOOGLEINTERN_H
#define NEWDELETEMEMBERACCESS3_GOOGLEINTERN_H

#include "string"

using std::string;

class GoogleIntern
{
private:
    string _name;
    int _age;
    string _school;
public:
    GoogleIntern();                             // default constructor
    GoogleIntern(const string& name, const int& age, const string& school);
    string GetName() const;
    int GetAge() const;
    string GetSchool() const;
    string toJson() const;
};


#endif //NEWDELETEMEMBERACCESS3_GOOGLEINTERN_H
