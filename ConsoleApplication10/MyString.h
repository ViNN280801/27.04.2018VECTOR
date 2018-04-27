#pragma once
class MyString
{
private:
	char *MyChar;
public:
	MyString();
	MyString(int count);
	explicit MyString(const char * str);
	MyString(const MyString & obj);
	void ToString();
	void Copy(const char *str);
	~MyString();
};

