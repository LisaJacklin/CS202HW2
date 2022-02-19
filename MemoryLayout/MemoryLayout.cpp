// MemoryLayout.cpp 
//Lisa Jacklin
//CS 202 Hw 2
// 2/17/2022

#include <iostream>
using std::cout;
using std::endl;

#include <stdio.h>
/*
Requirements:
- write a programs telling the order that different storage is layed out in memory

- code, statoic data, free store, stack

*/

//code given :
void printPointer(int i) {
    int* iptr = &i;
    //the unary * operator dereferences the pointer
    std::cout << "i = " << &iptr << endl;
    std::cout << "&i = " << iptr << endl;
}

int main()
{
    cout << "start of main" << endl;

    cout << "end of main" << endl;
}

