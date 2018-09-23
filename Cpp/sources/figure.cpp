#include "figure.h"

Figure::Figure(std::string color) : m_color(color){};
Figure::~Figure() {};

std::string Figure::getColor() const {
    return m_color;
}
float Figure::getArea() const {
    return m_area;
}