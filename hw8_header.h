// Programmers: Sayok Das and Mark Daming
// File: hw8_header.h
// Purpose: This file contains the global constants and
//          function prototypes for the for the program
//          that decodes an encrypted message.

#ifndef HW8_HEADER_H
#define HW8_HEADER_H
using namespace std;

/* ----- Global Constants -----*/
const string badword1 = "--umm--";
const string badword2 = "--like--";
const string badword3 = "--errr--";
const string badword4 = "--nstuff--";

/* ----- Function Prototypes -----*/
//
//Pre:
//Post:
void moveWord(string & result, int start, int end);

//
//Pre:
//Post:
void eraseBadWord(string & result, const string badword);

//
//Pre:
//Post:
void switchApostrophe(string & result);

//
//Pre:
//Post:
void fifthIsSpecial(string & result);

#endif // HW8_HEADER_H
 
