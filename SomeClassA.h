#pragma once
#include <iostream>

class SomeClassA
{
public:
	SomeClassA()
	{
		_pData = new int(5);
	}

	~SomeClassA()
	{
		delete _pData;
	}

	void printData()
	{
		std::cout << *_pData << std::endl;
	}

private:
	int* _pData;
};

