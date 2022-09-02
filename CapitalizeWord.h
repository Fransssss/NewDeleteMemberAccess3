//
// Created by XaveF on 9/2/2022.
//

#ifndef NEWDELETEMEMBERACCESS3_CAPITALIZEWORD_H
#define NEWDELETEMEMBERACCESS3_CAPITALIZEWORD_H


#include "string"
#include "cctype"

using std::islower;
using std::toupper;
using std::isspace;
using std::isalpha;
using std::string;

string Capitalize(string& word)
{
    for(size_t i = 0; i < word.size(); ++i)
    {
        if(islower(word[0]))                    // first char in word
        {
            word[0] = toupper(word[0]);
        }
        else
        {
            if(isspace(word[i]) and isalpha(word[i+1]))
            {
                word[i + 1] = toupper(word[i + 1]);
            }
        }
    }

    return word;
}

#endif //NEWDELETEMEMBERACCESS3_CAPITALIZEWORD_H
