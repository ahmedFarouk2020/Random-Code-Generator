#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H

#include "CharDB.h"
#include "QString"

class CodeGenerator : protected CharDB
{
    QString Result;
    char* ptr[4] = {CharDB::nums, CharDB::bigLetters, CharDB::smallLetters, CharDB::specialChar};
public:
    CodeGenerator();
    QString generateCode(int len);
};

#endif // CODEGENERATOR_H
