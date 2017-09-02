#include "stdafx.h"
#include "CircularShift.h"
#include "Passage.h"
#include <string>
#include "Word.h"


using namespace std;

CircularShift::CircularShift(void)
{
}

CircularShift::~CircularShift(void)
{
}

//not done
Passage* CircularShift::shift(Passage* passage)
{
	int word_num=0;
	int cur_num=0;
	char cur_character;
	int cur_line=0;

	int passagesize=passage->text.size();
	vector<string> newline;
	passage->lines.push_back(newline);

	//readlines
	while(word_num<passagesize-1)
	{
		string str;

		word_num=cur_num;
		while(passage->text[word_num]!=' '&&passage->text[word_num]!='\n')
		{			
			str.push_back(passage->text[word_num]);
			word_num++;

			if(word_num==passagesize) break;
			//cur_character=passage->text[word_num];
		}

		passage->lines[cur_line].push_back(str);

		if(word_num<passagesize)
		{
			if(passage->text[word_num]==' ')
			{
				cur_num=word_num+1;		
			}
			
			if(passage->text[word_num]=='\n')
			{
				cur_line++;
				cur_num=word_num+1;
				vector<string> newline;
				passage->lines.push_back(newline);
			}
		}
	}
	passage->lines.pop_back();


	//really shifting
	//string temp_store;
	
	int size;
	int lines_num=passage->lines.size();
	int new_line_num=lines_num;
	//这是转一次的算法，转几次就循环几次，而且要每次都存住
	for(int j=0;j<lines_num;j++)
	{

		for(int word_num_per_line=1;word_num_per_line<passage->lines[j].size();word_num_per_line++)
		{
			vector<string> newline;
			passage->lines.push_back(newline);

			for(int i=0;i<passage->lines[j].size();i++)
			{
				//new_line_num=lines_num+j;
				
				size=passage->lines[j].size();

				passage->lines[new_line_num].push_back( passage->lines[j][(i+word_num_per_line)%size] );
				
				
				//temp_store=passage->lines[j][i];
				//passage->lines[j][i]=passage->lines[j][(i+1)/passage->lines[j].size()];
				//passage->lines[j][(i+1)/passage->lines[j].size()]=temp_store;

			}
			new_line_num++;
		}
	}

	return passage;
}