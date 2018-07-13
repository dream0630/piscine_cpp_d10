/* dream0630 */
#ifndef EX02_HPP_/* dream0630 */
#define EX02_HPP_/* dream0630 */
/* dream0630 */
#include <climits>/* dream0630 */
#include <iostream>/* dream0630 */
#include <stdexcept>/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
T min(T a, T b)/* dream0630 */
{/* dream0630 */
	std::cout << "template min" << std::endl;/* dream0630 */
	return a <= b ? a : b;/* dream0630 */
}/* dream0630 */
/* dream0630 */
int min(int a, int b)/* dream0630 */
{/* dream0630 */
	std::cout << "non-template min" << std::endl;/* dream0630 */
	return a <= b ? a : b;/* dream0630 */
}/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
T templateMin(T const *array, size_t size)/* dream0630 */
{/* dream0630 */
	if (!array)/* dream0630 */
		throw std::runtime_error("Null pointer.");/* dream0630 */
	if (size == 0)/* dream0630 */
		throw std::logic_error("Array must not be empty.");/* dream0630 */
	T res = array[0];/* dream0630 */
	for (size_t i = 1; i < size; i++)/* dream0630 */
		res = min<T>(array[i], res);/* dream0630 */
	return res;/* dream0630 */
}/* dream0630 */
/* dream0630 */
int nonTemplateMin(int const *array, size_t size)/* dream0630 */
{/* dream0630 */
	if (!array)/* dream0630 */
		throw std::runtime_error("Null pointer.");/* dream0630 */
	if (size == 0)/* dream0630 */
		throw std::logic_error("Array must not be empty.");/* dream0630 */
	int res = array[0];/* dream0630 */
	for (size_t i = 1; i < size; i++)/* dream0630 */
		res = min(array[i], res);/* dream0630 */
	return res;/* dream0630 */
}/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
