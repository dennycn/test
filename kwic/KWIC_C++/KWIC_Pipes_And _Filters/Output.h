#pragma once
#include <iostream>
#include "Passage.h"
#include <string>
#include <vector>
#include "stdafx.h"


using namespace std;


class Output
{
public:
	Output(void);
public:
	~Output(void);

	static Passage* OutputPassage(Passage* passage);
};
