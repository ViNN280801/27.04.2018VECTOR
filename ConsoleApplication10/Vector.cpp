#include "stdafx.h"
#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector()
{
	check = 0;
	length = size_buffer;
	vector = new MyString*[size_buffer] {NULL};
}

void Vector::add(const MyString string)
{
	if (vector != NULL)
	{
			vector[check] = new MyString;
			/*    Process of copy   */
			check++;

		if (check == size_buffer)
		{
			length *= 2;
			MyString **vectorTemp;
			vectorTemp = vector;
			vector = new MyString*[length];
			*vector = *vectorTemp;

			delete[] vectorTemp;
		}
	}
}

Vector::~Vector()
{
	for (size_t i = 0; i < size_buffer; i++)
	{
		delete vector[i];
	}

	delete[] vector;
}


void Vector::ToString()
{
	if (vector != NULL)
		for (size_t i = 0; i < size_buffer; i++)
		{
			cout << i << " - " << vector[i] << endl;
		}
}