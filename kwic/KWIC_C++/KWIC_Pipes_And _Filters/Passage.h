#pragma once
#include "Line.h"
#include <vector>
#include <string>
#include "stdafx.h"


using namespace std;

class Passage
{
public:
	Passage(void);
public:
	~Passage(void);
public:
	vector<vector<string>> lines;

	vector<string> line;

	vector<char> text;
	
};
