// Programmers: Sayok Das and Mark Daming
// File: hw8_header.h
// Purpose: This file contains the global constants and
//          function prototypes for the for the program
//          that decodes an encrypted message.

#ifndef HW8_HEADER_H
#define HW8_HEADER_H
using namespace std;

/* ----- Global Constants -----*/
const int sentence_start = 0; // the possible number of characters in one
const int sentence_end = 500; // sentence
const string wordToReplace1 = "she"; // the words that will be replaced
const string wordToReplace2 = "her";
const string wordToReplace3 = "my";
const string wordToReplace4 = "there";
const string wordToReplace5 = "I";
const string wordToReplace6 = "frogs";

const string replacedWord1 = "he"; // the words to replace with
const string replacedWord2 = "his";
const string replacedWord3 = "your";
const string replacedWord4 = "their";
const string replacedWord5 = "you";
const string replacedWord6 = "penguins";

const string badword1 = "--umm--"; // the words to remove
const string badword2 = "--like--";
const string badword3 = "--errr--";
const string badword4 = "--nstuff--";

/* ----- Function Prototypes -----*/

// The replaceWord function replaces the wordToReplace with replacedWord.
//Pre: There must be data in the input file, which has to be part of the
//     string object class result.
//Post: The replaceWord function finds, replaces, and returns the
//      modified string.
void replaceWord(string & result, const string wordToReplace,
  const string replacedWord);

//
//Pre:
//Post:
void moveWord(string & result, int start, int end);

// The eraseBadWord function removes any of the badwords from the input file.
//Pre: There must be data in the input file, which has to be part of the
//     string object class result.
//Post: The eraseBadWord function finds, removes, and returns the
//      modified string.
void eraseBadWord(string & result, const string badword);

// The switchApostrophe function swaps the position of the apostrophe of
// a word.
//Pre: There must be data in the input file, which has to be part of the
//     string object class result.
//Post: The switchApostrophe finction finds, swaps, and returns the
//      modified string.
void switchApostrophe(string & result);

//
//Pre:
//Post:
void fifthIsSpecial(string & result);

#endif // HW8_HEADER_H
