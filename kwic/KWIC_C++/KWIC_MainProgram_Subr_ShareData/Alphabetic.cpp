#include "Alphabetic.h"

Alphabetic::Alphabetic(void)
{
}

Alphabetic::~Alphabetic(void)
{
}

void Alphabetic::capitalize(Passage* passage)
{
	//
	for(int j=0;j<passage->lines.size();j++)
	{
		vector<vector<string>> temp_passage;
		//temp_passage.push_back(passage->lines[j]);
		int max=j;
		
		for(int i=j+1;i<passage->lines.size();i++)
		{
			if( passage->lines[max][0][0] > passage->lines[i][0][0] )
			{
				//temp_passage[j]=passage->lines[i];
				temp_passage.pop_back();
				temp_passage.push_back(passage->lines[i]);
				max=i;
			}
		}

		passage->lines[max]=passage->lines[j];

		if(!temp_passage.empty())
		{
			passage->lines[j]=temp_passage[0];
		}
	}
}
