*******************************************************
*  Name      :  Brian Pina
*  Student ID:  104790387
*  Class     :  CSC 2421           
*  HW#       :  5
*  Due Date  :  FEb. 23, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************
This Program is an example of using doubly linked list, in this program we have a class called dictionary which will hold WordType string variable called word
and will also have friend fucntion operator overload so we can compare a Temp dictionary class with whats already in the list,
this program will read in a file called dictionary, will place the data in a list of type dictionary, we will then read in data from a file
called find words where we will use it to find similair words inw whats already in the list if a word is not located inside we will add it tot he list
after that we will print out the amount of times it took to find the word from the front of the list and from the back of the list
then we will used a functionto write out the sorted info into a file called revsorted.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions, opens a stream object has the list of class dictionary, this driver file will pass all input data into a list
                  and will pass it through non member and member functions
Name:  dictionary.h
   Contains the definition for the class dictionary and also non member functions

Name: dictionary.cpp
   Defines and implements the dictionary class for implementing on list<dicionary>
   This class provides routines to construct and get the input and places it into a list  and place data as
   well as non-member functions that will compare, search forward, backwards

   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   Program Compiles and runs on csegrid
developed on cLion using mingw
does all its tasks besides the last sort it duplicates the last element


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [PinaHW5]

   Now you should see a directory named homework with the files:
        main.cpp
        dictionary.h
	    dictionary.cpp
	    dictionary.txt
	    revsorted.txt
	    findWords.txt
	    makefile

2. Build the program.

    Change to the directory that contains the file by:
    % cd [PinaHW4]

    Compile the program by:
    % make

3. Run the program by:
   % ./[node]

4. Delete the obj files, executables, and core dump by
   %./make clean
