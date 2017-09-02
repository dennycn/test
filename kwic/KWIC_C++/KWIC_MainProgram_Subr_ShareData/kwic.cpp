//#include <fstream>
#include "Input.h"
#include "Passage.h"
#include "CircularShift.h"
#include "Alphabetic.h"
#include "Output.h"

//using namespace std;

int main()
{
	Passage passage;

	Input input("input.txt");
	
	input.readlines(&passage);

	CircularShift::shift(&passage);
	
	Alphabetic::capitalize(&passage);

	Output::OutputPassage(&passage);

	getchar();
}