// Author: Fransiskus Agapa
// 9/2/22
// Practices make improvement - Have Fun !!!
// :)

// =======================
// made-up google inter database
// Google employer input name, age, school of a summer intern
// =======================

#include <iostream>
#include "GoogleIntern.h"
#include "CapitalizeWord.h"

using std::cout;
using std::cin;
using std::getline;
using std::endl;
using std::string;

int main()
{
   string choice;                                                   // user choice
   GoogleIntern* intern;                                            // pointer to point to new allocated memory
   bool thereIsData = false;                                        // indicate whether user has input data or not
   cout << "\n== Google Intern Data ==" << endl;
   cout << "1. Input Intern Data" << endl;
   cout << "2. Display Intern Data" << endl;
   cout << "e. Exit" << endl;
   cout << "choice: ";
   cin >> choice;

   while(choice != "E" and choice != "e")
   {

       if(choice == "1")
       {
           cout << "\n= Input Intern Data = " << endl;
           string name;
           int age;
           string school;

           // name
           cout << "\nWhat is your name: ";
           while(name.size() == 0)
           {
               getline(cin, name);
           }
           Capitalize(name);
           cout << endl;

           // age
           cout << "How old are you: ";
           cin >> age;
           cout << endl;

           // school
           cout << "What school do you go to: ";
           while(school.size() == 0)
           {
               getline(cin, school);
           }
           Capitalize(school);
           cout << endl;

           intern = new GoogleIntern(name, age, school);
           cout << "[ Data submitted ]" << endl;
           thereIsData = true;                                  // indicate user has input data
           cout << endl << "======================" << endl;
       }
       else if(choice == "2")
       {
           cout << "\n= Display Intern Data =" << endl;
           if(thereIsData)
           {
               cout << "\nName: " << intern->GetName() << endl;
               cout << "Age: " << intern->GetAge() << endl;
               cout << "School: " << intern->GetSchool() << endl;
               cout << endl << intern->toJson() << endl;
           }
           else
           {
               intern = new GoogleIntern;
               cout << "\nName: " << intern->GetName() << endl;
               cout << "Age: " << intern->GetAge() << endl;
               cout << "School: " << intern->GetSchool() << endl;
               cout << endl << intern->toJson() << endl;
           }
           cout << endl << "========================" << endl;
       }
       else
       {
           cout << "\n[ Invalid choice ]" << endl;
       }

       cout << "\n== Google Intern Data ==" << endl;
       cout << "1. Input Intern Data" << endl;
       cout << "2. Display Intern Data" << endl;
       cout << "e. Exit" << endl;
       cout << "choice: ";
       cin >> choice;
   }

   if(choice == "e" or choice != "E")
   {
       cout << "\n== Exit Program ==" << endl;
   }

    return 0;
}
