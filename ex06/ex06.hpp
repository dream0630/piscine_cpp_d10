/* dream0630 */
#ifndef EX06_HPP_/* dream0630 */
#define EX06_HPP_/* dream0630 */
/* dream0630 */
#include <sstream>/* dream0630 */
#include <string>/* dream0630 */
#include <typeinfo>/* dream0630 */
/* dream0630 */
template <typename T>/* dream0630 */
static std::string toString(T const &value __attribute__((unused)))/* dream0630 */
{/* dream0630 */
	std::ostringstream oss;/* dream0630 */
	oss << "[???]";/* dream0630 */
	return oss.str();/* dream0630 */
}/* dream0630 */
/* dream0630 */
static std::string toString(int const &value) __attribute__((unused));/* dream0630 */
static std::string toString(float const &value) __attribute__((unused));/* dream0630 */
static std::string toString(std::string const &value) __attribute__((unused));/* dream0630 */
/* dream0630 */
static std::string toString(int const &value)/* dream0630 */
{/* dream0630 */
	std::ostringstream oss;/* dream0630 */
	oss << "[int:" << value << "]";/* dream0630 */
	return oss.str();/* dream0630 */
}/* dream0630 */
/* dream0630 */
static std::string toString(float const &value)/* dream0630 */
{/* dream0630 */
	std::ostringstream oss;/* dream0630 */
	oss << "[float:" << value << "f]";/* dream0630 */
	return oss.str();/* dream0630 */
}/* dream0630 */
/* dream0630 */
static std::string toString(std::string const &value)/* dream0630 */
{/* dream0630 */
	std::ostringstream oss;/* dream0630 */
	oss << "[string:\"" << value << "\"]";/* dream0630 */
	return oss.str();/* dream0630 */
}/* dream0630 */
/* dream0630 */
template <typename T, typename U = T>/* dream0630 */
struct Tuple {/* dream0630 */
	T a;/* dream0630 */
	U b;/* dream0630 */
/* dream0630 */
	std::string toString() const/* dream0630 */
	{/* dream0630 */
		std::ostringstream oss;/* dream0630 */
		oss << "[TUPLE " << ::toString(a) <</* dream0630 */
			" " << ::toString(b) << "]";/* dream0630 */
		return oss.str();/* dream0630 */
	}/* dream0630 */
};/* dream0630 */
/* dream0630 */
#endif /* dream0630 */
