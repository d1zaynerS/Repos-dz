#include "String.h"

String::String(const char* str) : m_length{ strlen(str) }, m_str{ new char[m_length + 1] {} }
{
	std::cout << "String(const char* str)" << std::endl;
	strcpy_s(m_str, m_length + 1, str);
}

String::String(const String& str) : String(str.m_str)
{
	std::cout << "String(String& str)" << std::endl;
}

String& String::operator=(const String& str)
{
	if (this == &str)
		return *this;
	std::cout << "operator=(String& str)" << std::endl;
	m_length = 0;
	delete[] m_str;
	m_length = strlen(str.m_str);
	m_str = new char[m_length + 1];
	strcpy_s(m_str, m_length + 1, str.m_str);
	return *this;
}

String::String(String&& str) : m_length{ str.m_length }, m_str{ str.m_str }
{
	std::cout << "String(String&& str)" << std::endl;
	str.m_length = 0;
	str.m_str = nullptr;
}

String& String::operator=(String&& str)
{
	if (this == &str)
		return *this;
	std::cout << "operator=(String&& str)" << std::endl;
	delete[] m_str;
	m_length = str.m_length;
	m_str = str.m_str;

	str.m_length = 0;
	str.m_str = nullptr;

	return *this;
}
