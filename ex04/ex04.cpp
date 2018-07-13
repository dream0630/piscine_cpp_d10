/* dream0630 */
#include <string>/* dream0630 */
#include "ex04.hpp"/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
bool equal(T const &a, T const &b)/* dream0630 */
{/* dream0630 */
	return a == b;/* dream0630 */
}/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
bool Tester<T>::equal(T const &a, T const &b) const/* dream0630 */
{/* dream0630 */
	return a == b;/* dream0630 */
}/* dream0630 */
/* dream0630 */
template bool equal<int>(int const &a, int const &b);/* dream0630 */
template bool equal<float>(float const &a, float const &b);/* dream0630 */
template bool equal<double>(double const &a, double const &b);/* dream0630 */
template bool equal<std::string>(std::string const &a, std::string const &b);/* dream0630 */
template class Tester<int>;/* dream0630 */
template class Tester<float>;/* dream0630 */
template class Tester<double>;/* dream0630 */
template class Tester<std::string>;/* dream0630 */
/* dream0630 */
