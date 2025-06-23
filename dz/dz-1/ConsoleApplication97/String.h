#pragma once
#include <iostream>
#include <cstring>

class String
{
	size_t m_length;
	char* m_str;
public:
	String() = default;

	String(const char* str);

	String(const String& str);
	String& operator=(const String& str);

	String(String&& str);
	String& operator=(String&& str);

	char* getStr()
	{
		return m_str;
	}

	size_t getLength()
	{
		return m_length;
	}
};

