#pragma once
#include "Passage.h"
#include "Word.h"

class CircularShift
{
public:
	CircularShift(void);
public:
	~CircularShift(void);

public:
	static void shift(Passage* passage);

};
