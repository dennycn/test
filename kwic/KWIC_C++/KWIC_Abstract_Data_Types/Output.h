#pragma once
#include <iostream>
#include "Passage.h"
#include <string>
#include <vector>

using namespace std;


class Output
{
public:
        Output(void);
public:
        ~Output(void);

        static void OutputPassage(Passage* passage);
};
