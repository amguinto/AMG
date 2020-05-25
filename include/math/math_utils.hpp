
#ifndef AMG_MATH_UTILS_H
#define AMG_MATH_UTILS_H

//! Standard C/C++
#include <cmath>
#include <iostream>
#include <utility>

//! AMG
#include "../Coordinate.h"

namespace AMG
{
namespace math
{
#ifndef VALID_TYPES
#define VALID_TYPES(_TYPE_)                                         \
_TYPE_ cantor_pairing(_TYPE_ x, _TYPE_ y)                           \
{                                                                   \
    auto result = 0.5 * (x + y) * (x + y + 1) + y;                  \
    return result;                                                  \
}                                                                   \
AMG::Coordinate inverse_cantor_pairing(_TYPE_ num)                  \
{                                                                   \
    auto w = std::floor((std::sqrt(8 * num + 1) - 1) / 2);          \
    auto t = (std::pow(w, 2) + w) / 2;                              \
    auto y = static_cast<_TYPE_>(num - t);                          \
    auto x = static_cast<_TYPE_>(w - y);                            \
                                                                    \
    return Coordinate(x, y);                                        \
}
#endif
VALID_TYPES(std::int8_t)
VALID_TYPES(std::int16_t)
VALID_TYPES(std::int32_t)
VALID_TYPES(std::int64_t)
VALID_TYPES(std::uint8_t)
VALID_TYPES(std::uint16_t)
VALID_TYPES(std::uint32_t)
VALID_TYPES(std::uint64_t)
#undef VALID_TYPES

} // namespace math

} // namespace AMG

#endif // AMG_MATH_UTILS_H
