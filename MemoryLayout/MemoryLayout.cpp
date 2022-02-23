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

static int one;
static int two;

int main()
{
    cout << "start of main" << endl;
    //Static Data storage
    //any data that remains unchanged but lasts the whole program
   
    cout << " Static Data" << endl;
    printPointer(one);
    printPointer(two);

    
    //free storage
    //Stack storage
   


    cout << "end of main" << endl;
}

