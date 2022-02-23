// LinkedList.cpp 
//Lisa Jacklin
//CS 202 HW 2
// 2/17/2022

#include <iostream>
using std::cout;
using std::endl;

//use linked list class from STL (header <list>)
#include <list>
#include <queue>
#include <stack>

//in the main .cpp use CATCH.HPP to test class
#include "catch.hpp"

/*
Requirements:
1. create a struct called Value ( rename and add 6 fields to)
 - note these files test a queue, stack , insertion and search using linked list

 Following operations:
 Queue: first in First out
    - push a val to the back of the list
    - pop a value from the front of the list

Stack: last in first out
    - push a value to the back of the list
    - pop a value from the back of the lsit

Insert and Find:
- keep list in sorted order (use some field of value)
- search for a value in the list
- insert a value at the appropriate place in the list

print the list out.

Notes: 
 for Value Class, might want to base it on a theme...

*/

//this class needs to be tested by catch.hpp
class Books {
public:
    //now to add 6 fields to test    
    int title;
    int author;
    int pages;
    int price;
    int year;
    int copies;
   
    //now something that uses these test fields:
    //constructor
    Books() : title(1), author(2), pages(342), price(15), year(2022) {
        copies = 0;
    }

};
//to be tested

   TEST_CASE("listTest")
    {    //queue
        std::queue<int> myQueue;
        //push a val to the back,
        //pop a value from the front

        //stack
        std::stack <int> myStack;

        //insertion


        //search linked list
   }


