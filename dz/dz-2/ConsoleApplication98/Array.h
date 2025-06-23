#pragma once
#include <iostream>

class Array
{
	int* m_data;
	size_t m_size;
public:
	Array() = default;

	Array(size_t size);
	Array(const Array& other);
	Array& operator=(const Array& other);

	Array(Array&& other);

	Array& operator=(Array&& other) = delete;

	void set(size_t index, int value);
	int get(size_t index);

	size_t getSize()
	{
		return m_size;
	}
};

