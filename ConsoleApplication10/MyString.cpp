#include "stdafx.h"
#include "MyString.h"
#include <iostream>
#include <string>

using namespace std;

MyString::MyString()
{
	MyChar = NULL;
	int check;
}

MyString::MyString(int count)
{
	MyChar = new char[count];
}


MyString::~MyString()
{
	delete[] MyChar;
}


MyString::MyString(const char *str) : MyString()
{
	int size = strlen(str) + 1;
	MyChar = new char[size];
	strcpy_s(MyChar, size, str);
}

MyString::MyString(const MyString & obj)
{
	int size = strlen(obj.MyChar) + 1;
	MyChar = new char[size];
	strcpy_s(MyChar, size, obj.MyChar);
}


void MyString::ToString()
{
	if (MyChar != NULL)
		cout << MyChar << endl;
}


void MyString::Copy(const char *str)
{
	if (MyChar != NULL)
		delete[] MyChar;

	int size = strlen(str) + 1;
	MyChar = new char[size];
	strcpy_s(MyChar, size, str);
}
