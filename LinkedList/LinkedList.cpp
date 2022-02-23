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

//test case with queue and stacks
//need to keep a list for searching, inserting, and printing
   TEST_CASE("listTest")
    {    
       //test values for each case
       Books testCase;
       Books one;
       Books two;

       //making a list out of the class called Booksqueue.
       std::list <Books> Booksqueue;
        
      //this push the values to the back of the list.
      Booksqueue.push_back(one);
      Booksqueue.push_back (two);
      Booksqueue.push_back(testCase);

      //now to start testing the queue
      auto get = Booksqueue.begin();

      REQUIRE( (*get) == one);


    //now to do the same thing for a stack
      std::list <Books> BooksStack;

      BooksStack.push_back(one);
      BooksStack.push_back(two);
      BooksStack.push_back(testCase);

    //Insert and Find
    //i'll create a list called book to test inserting values and finding them.
      std::list <Books> book;

      book.push_back(one);
      book.push_back(two);
      book.push_back(testCase);
   }


