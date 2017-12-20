#include "dictionary.h"

using namespace std;



    dictionary::dictionary() {
        //constructor that initializes word to a blank string
    }

//returns the word from dictionary class
    wordType dictionary::getWord() {
        return word;            //returns word
    }

//changes the value of variable word in dictionary class
    void dictionary::setWord(wordType _word) {
        word = _word;          //sets _word to word in the class function
    }



    bool operator<(const dictionary &first, const dictionary &second) {
        if(first < second)
            return true;
        else
            return false;
}

ostream &operator<<(ostream &os, const dictionary& dict) {
        return os << dict.word;
    }

    int searchForward(list<dictionary> &wordList, wordType &findString) {
        int i = 0;
        for (list<dictionary>::iterator it = wordList.begin(); it != wordList.end(); it++) {
            if (findString == *it) {
                return i;
            }
            else
                i++;
        }
    }

    int searchBackward(list<dictionary> & wordList, wordType & findString) {
		wordList.reverse();
        int i = 0;
        for (list<dictionary>::iterator it = wordList.begin(); it != wordList.end(); it++) {
            if (findString == *it) {
                return i;
            }
            else 
				 i++;
        }
    }

    void revPrintList(ostream &output, list<dictionary> &wordList) {
        for(list<dictionary>::iterator it = wordList.begin(); it != wordList.end(); it++){
            output << *it;
            output << '\n';
        }
    }

    bool comp(dictionary &first, dictionary &second) {
        return first.getWord() < second.getWord();
    }

    bool operator ==(const wordType &findString, const dictionary &dic){
        if(findString == dic.word)
            return true;
        else
            return false;
    }


