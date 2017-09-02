#include "stdafx.h"
#include "Output.h"
#include <fstream>

Output::Output(void)
{
}

Output::~Output(void)
{
}

Passage* Output::OutputPassage(Passage* passage)
{
	
	for(int i=0; i<passage->lines.size(); i++)
	{
		for(int j=0; j<passage->lines[i].size(); j++)
		{
			cout<<passage->lines[i][j];
			cout<<" ";
		}

		cout<<'\n';
	}

	ofstream outfile("output.txt",ios_base::app);

	if(!outfile) 
	{
		cerr<<"open file failed!";
	}
	else
	{
		for(int i=0; i<passage->lines.size(); i++)
		{
			for(int j=0; j<passage->lines[i].size(); j++)
			{
				outfile<<passage->lines[i][j];
				outfile<<" ";
			}

			outfile<<'\n';
		}

	}

	return passage;
}
