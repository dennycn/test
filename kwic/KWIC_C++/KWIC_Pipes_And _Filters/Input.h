#pragma once
#include <fstream>
#include <string>
#include "Passage.h"
#include "stdafx.h"


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

	Passage p;

	//²Ù×÷
public:
	void testcout();

	//void readlines(Passage* p);
public:
	static Passage* readlines(Input* input);

};