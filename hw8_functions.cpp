// Programmers: Sayok Das and Mark Daming
// File: hw8_functions.cpp
// Purpose:  This file contains the function definition for the
//          for the program that decodes an encrypted message.

#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<sstream>
#include<algorithm>
#include "hw8_header.h"
using namespace std;

void eraseBadWord(string &result, string badword)
{
  int p = result.find(badword);
  while (p != std::string::npos)
	{
    result.erase(p, badword.length()+1);
    p = result.find(badword, p);
	}
}


void moveWord(string &result, int start, int end)
{
  //work in progress 
}


void switchApostrophe(string &result)
{
  int i = 0;
  int total = 0;
  char temp;
  while (result.find("'",i) != -1)
  {
    total += i;
    
    i = result.find("'",i+1);
    temp = result[i+1];
    result[i+1] = '#';
    result[i] = temp;   
  }
  replace( result.begin(), result.end(), '#', '\'' );
}

void fifthIsSpecial(string &result)
{
  int j = 0;
  for (int i=0;i<2;i++)
  {
    j = result.find(".",j);
  }
  cout << endl << j << endl;
}
