#ifndef __SQUARE_H_INCLUDED__
#define __SQUARE_H_INCLUDED__

#include "figure.h"

class Square : public Figure {
private:
    int m_side;

protected:
    void calculateArea();

public:
    Square(int side, std::string color);
    ~Square();
    
    int getSide() const;
    void setSide(int side);
    
    const std::string classname();
    bool equals(Figure *fig);    
};

#endif //__SQUARE_H_INCLUDED__
