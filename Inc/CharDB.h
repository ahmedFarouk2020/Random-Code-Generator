#ifndef CHARDB_H
#define CHARDB_H


class CharDB
{
protected:
    char nums[11] = "0123456789";
    char bigLetters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char smallLetters[27] = "abcdefghijklmnopqrstuvwxyz";
    char specialChar[27] = "~!@#$%^&*()_+=`|/>-.<,][}{";

    CharDB();
};

#endif // CHARDB_H
