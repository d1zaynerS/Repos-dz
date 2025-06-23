#include "Array.h"

Array::Array(size_t size) : m_size{ size }, m_data{ new int[size] {} }
{
	std::cout << "Array(size_t size)" << std::endl;
}

Array::Array(const Array& other) : m_size{ other.m_size }, m_data{ new int[other.m_size] }
{
	std::cout << "Array(const Array& other)" << std::endl;
	for (size_t i = 0; i < m_size; ++i)
		m_data[i] = other.m_data[i];
}

Array& Array::operator=(const Array& other)
{
	if (this == &other)
		return *this;
	std::cout << "operator=(const Array& other)" << std::endl;
	delete[] m_data;
	m_size = other.m_size;
	m_data = new int[m_size];
	for (size_t i = 0; i < m_size; ++i)
		m_data[i] = other.m_data[i];
	return *this;
}

Array::Array(Array&& other) : m_size{ other.m_size }, m_data{ other.m_data }
{
	std::cout << "Array(Array&& other)" << std::endl;
	other.m_size = 0;
	other.m_data = nullptr;
}

void Array::set(size_t index, int value)
{
	if (index < m_size)
		m_data[index] = value;
}

int Array::get(size_t index)
{
	if (index < m_size)
		return m_data[index];
	return -1;
}
