// kwic_MainProgram_Subr.w_ShareData.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Input.h"
#include "Passage.h"
#include "CircularShift.h"
#include "Alphabetic.h"
#include "Output.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Passage* passage;

	Input input("input.txt");
	
	passage=Input::readlines(&input);

	passage=CircularShift::shift(passage);

	passage=Alphabetic::capitalize(passage);

	passage=Output::OutputPassage(passage);

	getchar();

	return 0;
}

