/* dream0630 */
#ifndef EX03_HPP_/* dream0630 */
#define EX03_HPP_/* dream0630 */
/* dream0630 */
#include <iostream>/* dream0630 */
#include <stdexcept>/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
void foreach(T const *array, void (&func)(const T &elem), size_t size)/* dream0630 */
{/* dream0630 */
	if (!array)/* dream0630 */
		throw std::runtime_error("Null pointer.");/* dream0630 */
	for (size_t i = 0; i < size; i++)/* dream0630 */
		func(array[i]);/* dream0630 */
}/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
void print(const T &elem)/* dream0630 */
{/* dream0630 */
	std::cout << elem << std::endl;/* dream0630 */
}/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
