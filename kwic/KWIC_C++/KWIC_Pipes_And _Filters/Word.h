#pragma once
#include <string>
#include <vector>

using namespace std;

class Word
{
public:
	Word(void);
public:
	~Word(void);

public:
	vector<char> character;
public:
	Word* nextcharacter;//not done yet
};
