#include <iostream>
#include "punto.h"
using namespace std;

void swap1(punto &p, punto &q){
    punto temp = p;
    p = q;
    q = temp;
}

void swap2(punto *p, punto *q){
    punto temp = *p;
    *p = *q;
    *q = temp;
}


int main()
{
   /*punto p(3, 5);
   punto q(1, 4);
   punto z = q;

    punto *ptr1 = &p;
    punto *ptr2 = &q;

    punto **ptr3 = &ptr1;
    punto **ptr4 = &ptr2;

    (*ptr3)->print();//usa la flecha para no mostrar (*ptr1).print();
    (*ptr4)->print();//usa la flecha para no mostrar (*ptr2).print();

    swap2(ptr1,ptr2);
    ptr1->print();
    ptr2->print();

    swap1(p,q);
    p.print();
    q.print();

    punto *easy = new punto;
    easy->offset(11, 20);
    easy->print();
    delete easy;

    return 0;*/


    }
