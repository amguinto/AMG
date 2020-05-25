#ifndef AMG_COORDINATE_H
#define AMG_COORDINATE_H

#include <iostream>
namespace AMG {

struct Coordinate
{
    Coordinate()
            : row(-1),
              col(-1),
              coords(std::make_pair(-1, -1)) {}

    Coordinate(const std::size_t R, const std::size_t C)
            : row(R),
              col(C),
              coords(std::make_pair(R, C)) {}

    Coordinate(const Coordinate& coord)
            : row(coord.row),
              col(coord.col),
              coords(std::make_pair(coord.row, coord.col)) {}

    std::size_t row;
    std::size_t col;
    std::pair<std::size_t, std::size_t> coords{};

    friend std::ostream& operator<<(std::ostream& os, const Coordinate& coord)
    {
        os << "(" << coord.row << ", " << coord.col << ")";
        return os;
    }
}; // class Coordinate
} // namespace AMG

#endif // AMG_COORDINATE_H
