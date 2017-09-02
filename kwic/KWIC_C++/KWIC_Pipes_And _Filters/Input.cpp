#include "stdafx.h"
#include "Input.h"
//#include <fstream>
//#include <string>
#include <iostream>
#include "Passage.h"


using namespace std;

Input::Input()
{
	//infile("input.txt");
	infile.open("input.txt",ios::in);
	
	//Passage ppassage;
	//
	//p=&ppassage;
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

	//Passage ppassage;
	//
	//p=&ppassage;
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

Passage* Input::readlines(Input* input)
{
	char c='0';

//	Input input;
	//Passage ppassage;
	//
	//input->p=&ppassage;

	while(input->infile.get(c))//c!=EOF)//c!='/n')
	{
		input->p.text.push_back(c);
			
	}
	return &(input->p);
}
	