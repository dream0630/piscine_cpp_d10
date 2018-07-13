/* dream0630 */
#ifndef EX00_HPP_/* dream0630 */
#define EX00_HPP_/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
void swap(T &a, T &b)/* dream0630 */
{/* dream0630 */
	T tmp;/* dream0630 */
/* dream0630 */
	tmp = a;/* dream0630 */
	a = b;/* dream0630 */
	b = tmp;/* dream0630 */
}/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
T min(T a, T b)/* dream0630 */
{/* dream0630 */
	return a < b ? a : b;/* dream0630 */
}/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
T max(T a, T b)/* dream0630 */
{/* dream0630 */
	return a > b ? a : b;/* dream0630 */
}/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
T add(T a, T b)/* dream0630 */
{/* dream0630 */
	return a + b;/* dream0630 */
}/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
