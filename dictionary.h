/* Dr. Augustine
 dictionary.h
 Last Updated:02/14/2016
 Status: Compiles and all requirements met*/

#ifndef dictionary_h
#define dictionary_h
#include <string>
#include <list>
#include <iostream>

using namespace std;
typedef string wordType;

class dictionary
{
public:
    //typedef string wordType;
    dictionary();
    wordType getWord();
    void setWord(wordType _word);
    friend bool operator <(const dictionary& first, const dictionary& second);
    friend bool operator ==(const wordType& findString, const dictionary& diction);
    friend ostream &operator <<(ostream& os, const dictionary& dictionary);
private:
    wordType word;
};

/*******************************/
int searchForward(list<dictionary> &wordList,wordType &findString);

int searchBackward(list<dictionary> &wordList,wordType &findString);

void revPrintList(ostream& output, list<dictionary> &wordList);

bool comp(dictionary& first, dictionary& second);


#endif /* dictionary_h */
