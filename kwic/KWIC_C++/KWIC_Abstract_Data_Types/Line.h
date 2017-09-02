#pragma once
#include <string>
#include "Word.h"
#include <vector>

using namespace std;
using namespace std;

class Line
{
public:
        Line(void);
public:
        ~Line(void);

//public:
//	string word;
//public:
//	Line* nextword;//not done yet

//public:
//	Word firsr_word_in_line;

//public:
//	Line* nextline;
public:
        vector<string> words;

};
