#include <iostream>
#include "vector.h"
#include "punto.h"


vector::vector()
{}

vector::vector(punto x,punto y)
{
    start = x;
    end = y;
}

vector::vector(vector &o)
{
    start = o.start;
    end = o.end;
}

void vector::offset(int x, int y){
    start.offset(x,y);
    end.offset(x,y);
}


void vector::print(){
    start.print();
    std::cout << "->";
    end.print();
    std::cout << std::endl;
}
