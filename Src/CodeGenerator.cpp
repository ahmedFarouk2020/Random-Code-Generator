#include "CodeGenerator.h"

CodeGenerator::CodeGenerator()
{

}

QString CodeGenerator::generateCode(int len) {
    while (len > 0)
    {
        int charType = rand()%4;
        int charValue = (charType == 0)? rand()%10 : rand()%26;
        this->Result.append(ptr[charType][charValue]);

        len--;
    }
    return Result;
}
