/* dream0630 */
#ifndef EX05_HPP_/* dream0630 */
#define EX05_HPP_/* dream0630 */
/* dream0630 */
#include <iostream>/* dream0630 */
#include <stdexcept>/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
class array {/* dream0630 */
public:/* dream0630 */
	array() :/* dream0630 */
		_array(nullptr), _size(0)/* dream0630 */
	{/* dream0630 */
	}/* dream0630 */
/* dream0630 */
	array(size_t n) :/* dream0630 */
		_array(new T[n]), _size(n)/* dream0630 */
	{/* dream0630 */
		for (size_t i = 0; i < n; i++)/* dream0630 */
			this->_array[i] = T();/* dream0630 */
	}/* dream0630 */
/* dream0630 */
	array(array<T> const &other) :/* dream0630 */
		_array(new T[other._size]), _size(other._size)/* dream0630 */
	{/* dream0630 */
		for (size_t i = 0; i < this->_size; i++)/* dream0630 */
			this->_array[i] = other._array[i];/* dream0630 */
	}/* dream0630 */
/* dream0630 */
	~array()/* dream0630 */
	{/* dream0630 */
		delete[] this->_array;/* dream0630 */
	}/* dream0630 */
/* dream0630 */
	array<T> &operator=(array<T> const &other)/* dream0630 */
	{/* dream0630 */
		delete[] this->_array;/* dream0630 */
		this->_array = new T[other._size];/* dream0630 */
		this->_size = other._size;/* dream0630 */
		for (size_t i = 0; i < this->_size; i++)/* dream0630 */
			this->_array[i] = other._array[i];/* dream0630 */
		return (*this);/* dream0630 */
	}/* dream0630 */
/* dream0630 */
	T &operator[](size_t idx)/* dream0630 */
	{/* dream0630 */
		if (idx >= this->_size) {/* dream0630 */
			T *_new = new T[idx + 1];/* dream0630 */
			for (size_t i = 0; i < this->_size; i++)/* dream0630 */
				_new[i] = this->_array[i];/* dream0630 */
			delete[] this->_array;/* dream0630 */
			for (size_t i = this->_size; i < idx; i++)/* dream0630 */
				_new[i] = T();/* dream0630 */
			this->_array = _new;/* dream0630 */
			this->_size = idx + 1;/* dream0630 */
		}/* dream0630 */
		return (this->_array[idx]);/* dream0630 */
	}/* dream0630 */
/* dream0630 */
	T const &operator[](size_t idx) const/* dream0630 */
	{/* dream0630 */
		if (idx >= this->_size)/* dream0630 */
			throw std::out_of_range("Index out of range.");/* dream0630 */
		return (this->_array[idx]);/* dream0630 */
	}/* dream0630 */
/* dream0630 */
	size_t size() const/* dream0630 */
	{/* dream0630 */
		return (this->_size);/* dream0630 */
	}/* dream0630 */
/* dream0630 */
	void dump() const/* dream0630 */
	{/* dream0630 */
		std::cout << '[' << std::boolalpha;/* dream0630 */
		for (size_t i = 0; i < this->_size; i++) {/* dream0630 */
			std::cout << this->_array[i];/* dream0630 */
			if (i != this->_size - 1)/* dream0630 */
				std::cout << ", ";/* dream0630 */
		}/* dream0630 */
		std::cout << ']' << std::endl;/* dream0630 */
	}/* dream0630 */
/* dream0630 */
	template <typename U>/* dream0630 */
	array<U> convertTo(U (*func)(T const&))/* dream0630 */
	{/* dream0630 */
		array<U> res(this->_size);/* dream0630 */
		for (size_t i = 0; i < this->_size; i++)/* dream0630 */
			res[i] = func(this->_array[i]);/* dream0630 */
		return res;/* dream0630 */
	}/* dream0630 */
/* dream0630 */
private:/* dream0630 */
	T *_array;/* dream0630 */
	size_t _size;/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
