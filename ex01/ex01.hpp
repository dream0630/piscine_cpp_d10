/* dream0630 */
#ifndef EX01_HPP_/* dream0630 */
#define EX01_HPP_/* dream0630 */
/* dream0630 */
#include <cstring>/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
int compare(T const &a, T const &b)/* dream0630 */
{/* dream0630 */
	if (a == b)/* dream0630 */
		return 0;/* dream0630 */
	return a < b ? -1 : 1;/* dream0630 */
}/* dream0630 */
/* dream0630 */
int compare(const char *a, const char *b)/* dream0630 */
{/* dream0630 */
	int res = std::strcmp(a, b);/* dream0630 */
	if (res > 0)/* dream0630 */
		return 1;/* dream0630 */
	else if (res < 0)/* dream0630 */
		return -1;/* dream0630 */
	else/* dream0630 */
		return 0;/* dream0630 */
}/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
