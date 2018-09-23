#include "square.h"

Square::Square(int side, std::string color) : Figure(color), m_side(side) {
    calculateArea();
}
Square::~Square() {}

int Square::getSide() const {
    return m_side;
}

void Square::setSide(int side) {
    m_side=side;
}

void Square::calculateArea() {
    m_area = m_side * m_side;
}

const std::string Square::classname() {
    return "Square";
}

bool Square::equals(Figure *fig) {
    if (fig->classname() != "Square") return false;
    if (Square *sqr = dynamic_cast<Square *>(fig))
        return getSide() == sqr->getSide() && getColor() == sqr->getColor();
    return false;
}
