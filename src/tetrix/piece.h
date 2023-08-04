#ifndef __PIECE_H__
#define __PIECE_H__

#include <array>

#include "point.h"

class Piece {
public:
    enum class Shape : unsigned char {
        No = 0,
        Z,
        S,
        Line,
        T,
        Square,
        L,
        MirroredL,
    };

    void setShape(Shape shape);
    void setRandomShape();

    Shape shape() const { return shape_; }
    int x(int index) const { return corrds_[index].x; }
    int y(int index) const { return corrds_[index].y; }
    int minX() const;
    int minY() const;
    int maxX() const;
    int maxY() const;

    Piece rotateLeft() const;
    Piece rotateRight() const;

private:
    Shape shape_{Shape::No};
    std::array<Point<int>, 4> corrds_;
};

#endif  //__PIECE_H__