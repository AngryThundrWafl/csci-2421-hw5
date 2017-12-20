#include "dictionary.h"
#include <fstream>
using namespace std;

int main(){
    dictionary Temp;                        //this is a temporary dictionary
    list<dictionary> myList;                     //creates a list of class dictionary called D
    ifstream inputData;
    inputData.open("dictionary.txt");   //input data will hold data streamed in frmo dictionary.txt
    ofstream outputData;
    outputData.open("revsorted.txt");   //outputData will write data after the data from dictionary.txt has been sorted
    ///////////////STATEMENTS JUST IN CASE THE FILES DONT OPEN////////////////////////////////
    if(inputData.fail()){
        cout << "InputFile not opened Terminating program" << endl;
        return 0;
    }
    if(outputData.fail()){
        cout << "OutputFile not opened Termination program" << endl;
        return 0;
    }
    string s;                          //string called s to read in data
//Reads in Data from dictionary.txt, puts it in string called s and passes it through a dictionary obj called Temp///
//then we will pass Temp into W,pushback to place the data into the list/////////////////////////////////////////////
    while(!inputData.eof()){
        getline(inputData,s);           //will read in a line of data after every iteration
        Temp.setWord(s);                //then will be put in temp dictionary obj
        myList.push_back(Temp);              //pass Temp into W.pushback

    }
    list<dictionary>::iterator it2 = myList.begin();

    for(list<dictionary>::iterator it = myList.begin(); it != myList.end(); it++){



            it2++;

            dictionary tempFirst;               //will hold first value
            dictionary tempSecond;               //will hold the second value
            tempFirst = *it;                     //holds first element
            tempSecond = *it2;                   //holds the second elementmake 
            bool ayye = comp(tempFirst, tempSecond);
            if (ayye == false) {
                dictionary tempTemp;            //will hold temp value of one of the temp values
                tempTemp.setWord(tempFirst.getWord());
                tempFirst.setWord(tempSecond.getWord());
                tempSecond.setWord(tempTemp.getWord());
                it->setWord(tempFirst.getWord());
                it2->setWord(tempSecond.getWord());
            }

    }

   int numForward;                     //will hold the value of what function search forward
   int numBackward;

   ifstream findWord;
  findWord.open("findwords.txt");

  while(!findWord.eof()){
      getline(findWord,s);            //reads in a line after each iteration and puts it into s

      numForward = searchForward(myList,s);//will search forward for word read in
      numBackward = searchBackward(myList,s);//will search backwards for word read in
      string firstWord = it2->getWord();
      int numForward1 = searchForward(myList,firstWord);
      int numBackward1 = searchBackward(myList,firstWord);

       //means there was a word from findWord in W aka (dictionary.txt0
      int sizeList;
      sizeList = numBackward1 + numForward1 +1;

        if(numBackward < sizeList  || numForward < sizeList) {
            cout << s << "  was found after " << numForward << " from A to Z and found after " << numBackward <<
            " from Z to A" << endl;
        }


       if(numBackward > sizeList || numForward > sizeList) {
           cout << s << " was not found adding to file" << endl;
           Temp.setWord(s);            //will put s into Temp set word
           myList.push_back(Temp);          //we pass Temp into W with push back
       }
   }
    //will sort the bigger list
    list<dictionary>::iterator it3 = myList.begin();
    for(list<dictionary>::iterator it = myList.begin(); it != myList.end(); it++){

        it3++;

        dictionary tempFirst;               //will hold first value
        dictionary tempSecond;               //will hold the second value
        tempFirst = *it;                     //holds first element
        tempSecond = *it3;                   //holds the second element
        bool ayye = comp(tempFirst, tempSecond);
        if (ayye == false) {
            dictionary tempTemp;            //will hold temp value of one of the temp values
            tempTemp.setWord(tempFirst.getWord());
            tempFirst.setWord(tempSecond.getWord());
            tempSecond.setWord(tempTemp.getWord());
            it->setWord(tempFirst.getWord());
            it3->setWord(tempSecond.getWord());
        }

    }

    revPrintList(outputData, myList);
    findWord.close();
    inputData.close();
    outputData.close();
    return 0;
}
