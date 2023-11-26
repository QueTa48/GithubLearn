#pragma once
#include <iostream>

class SomeClassA
{
public:
	SomeClassA();

	~SomeClassA();

	void printData();

private:
	int* _pData;
};

