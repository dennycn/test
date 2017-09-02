#pragma once

#include "Line.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
using std::vector;

class Passage
{
public:
        Passage(void);
public:
        ~Passage(void);
public:
        vector< vector<string> > lines;

        vector<string> line;

        vector<char> text;

};
