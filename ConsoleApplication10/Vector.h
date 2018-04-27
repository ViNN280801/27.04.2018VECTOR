#pragma once
#include "MyString.h"

class Vector
{
private:
	MyString **vector;
	const int size_buffer = 16;
	int check, length;
public:
	Vector();
	void add(const MyString string);
	~Vector();
	void ToString();
};

