#include <iostream>
#include "punto.h"

punto::punto(int xh,int yh){
    x = xh;
    y = yh;
}

punto::punto()
{
    x = 0;
    y = 0;
}

punto::punto(punto &o){
    x = o.x;
    y = o.y;
}

void punto::print(){
    std::cout << "(" << x << " , " << y << ")" << std::endl;
}

void punto::offset(int nx,int ny){
    x += nx;
    y += ny;
}

