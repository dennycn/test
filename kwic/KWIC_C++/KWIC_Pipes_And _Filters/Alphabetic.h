#pragma once
#include "Passage.h"
#include "stdafx.h"


class Alphabetic
{
public:
	Alphabetic(void);
public:
	~Alphabetic(void);
public:
	static Passage* capitalize(Passage* passage);
};
