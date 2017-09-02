#pragma once
#include "Passage.h"
#include "Word.h"
#include "stdafx.h"


class CircularShift
{
public:
	CircularShift(void);
public:
	~CircularShift(void);

public:
	static Passage* shift(Passage* passage);

};
