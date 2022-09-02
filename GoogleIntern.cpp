// Fransiskus Agapa

// Class GoogleIntern Implementation

#include "GoogleIntern.h"
#include "sstream"

using std::stringstream;

GoogleIntern::GoogleIntern()
{
    _name = "NoName";
    _age = -1;
    _school = "NoSchool";
}

GoogleIntern::GoogleIntern(const string &name, const int &age, const string &school)
{
    _name = name;
    _age = age;
    _school = school;
}

string GoogleIntern::GetName() const
{
    return _name;
}

int GoogleIntern::GetAge() const
{
    return _age;
}

string GoogleIntern::GetSchool() const
{
    return _school;
}

string GoogleIntern::toJson() const
{
    stringstream asJson;
    asJson << "{\"Name\":\"" << _name << "\", \"Age\":" << _age << ", \"School\":\"" << _school << "\"}";
    return asJson.str();                                                                                                // return string stream as string
}