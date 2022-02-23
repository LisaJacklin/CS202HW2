// MemoryLayout.cpp 
//Lisa Jacklin
//CS 202 Hw 2
// 2/17/2022

#include <iostream>
using std::cout;
using std::endl;

/*
Requirements:
- write a programs telling the order that 
  different storage is layed out in memory
- static data, free store, stack

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
    //Static Data storage
    //any data that remains unchanged but lasts the whole program
    static int one;
    cout << " Static Data" << endl;
    printPointer(one);

    //Stack storage
    int a = 7;
    cout << "Stack Storage" << endl;
    printPointer(a);

    //free storage
    int* b = new int[1];
    b[1] = 9;
    cout << "Free Storage" << endl;
    printPointer(b[1]);
   


    cout << "end of main" << endl;
}

