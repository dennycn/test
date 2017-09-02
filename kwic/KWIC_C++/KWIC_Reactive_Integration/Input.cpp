#include "Input.h"
//#include <fstream>
//#include <string>
#include <iostream>
#include "Passage.h"
#include "CircularShift.h"
#include "Alphabetic.h"
#include "Output.h"

using namespace std;

Input::Input()
{
	//infile("input.txt");
	infile.open("input.txt",ios::in);
}

Input::Input(const char* filename)
{
	infile.open(filename,ios::in);
	if(!infile) 
	{
		cerr<<"read file failed!";
	}
	else
	{
		//return infile;
		//readlines();
	}
}

Input::~Input()
{
	infile.close();
}

void Input::testcout()
{
	string str_temp;

	if(!infile) 
	{
		cerr<<"File not read yet.Do not testcout";
	}
	else
	{
		infile>>str_temp;
	}

	cout<<str_temp;
}

void Input::readlines(Passage* p)
{
	//infile>>p.firstline.firsr_word_in_line.character;
	char c='0';
	while(infile.get(c))//c!=EOF)//c!='/n')
	{
		p->text.push_back(c);
			
	}

	CircularShift::shift(p);
	
	Alphabetic::capitalize(p);

	Output::OutputPassage(p);
}
	