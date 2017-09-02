#pragma once
#include <fstream>
#include <string>
#include "Passage.h"

using namespace std;

class Input
{
public:
        Input();

        Input(const char* filename);

        ~Input();

        //ÊôĞÔ
public:
        ifstream infile;

        //²Ù×÷
public:
        void testcout();

        void readlines(Passage* p);

        //	ifstream readfile(string str);

};