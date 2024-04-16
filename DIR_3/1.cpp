//POINTERS - to store the address of an varaible

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int * p_var; // can only store the address of an int variable
    int var;
    var=8;
    p_var=&var;
    cout<<"var : "<<var<<endl;
    cout<<"p_var : "<<p_var<<endl;
    cout<<"&var : "<<&var<<endl;
    cout<<"*p_ var : "<<*p_var<<endl; //dereferencing a pointer - to extract the value stored at the memory address stored in the pointer
    cout<<"sizeof(p_var) : "<<sizeof(p_var)<<endl;
    cout<<"sizeof(*p_var) : "<<sizeof(*p_var)<<endl;
    cout<<"sizeof(int *) : "<<sizeof(int *)<<endl;
    cout<<"sizeof(int) : "<<sizeof(int)<<endl;

    /* OUTPUT
        var : 8
        p_var : 0x16d89b1bc
        &var : 0x16d89b1bc
        *p_ var : 8
        sizeof(p_var) : 8 
        sizeof(*p_var) : 4
        sizeof(int*) : 8
        sizeof(int) : 4
    */

    char* ptr {nullptr} ; 
    // cout<<ptr<<endl; // seg fault
    
    int* p1; int *p2; // all are the same , position of the * doesn't matter

    //but
    int * ptr1, ptr2;
    cout<<sizeof(ptr1)<<setw(4)<<sizeof(ptr2)<<endl; // 8 4

    int* ptr3, ptr4;
    cout<<sizeof(ptr3)<<setw(4)<<sizeof(ptr4)<<endl; // 8 4

    int *ptr5, ptr6;
    cout<<sizeof(ptr5)<<setw(4)<<sizeof(ptr6)<<endl; // 8 4

    int* ptr7, *ptr8;
    cout<<sizeof(ptr7)<<setw(4)<<sizeof(ptr8)<<endl; // 8 8



    // in case of strings 
    char arr[] {'h','i','!'};
    cout<<"arr : "<<arr<<endl; // prints the message

    char arr1[] {'h','i','!','\0'}; //hardcoded cstring
    cout<<"arr1 : "<<arr1<<endl; // prints the message

    //char * arr2 {'h','i'}; //error  excess elements in scalar initializer
    //cout<<"arr2 : "<<arr2<<endl; 

    char * arr3 {"hello"};
    cout<<"arr3 : "<<arr3<<endl; //prints the message

    //char * arr2 {'h','i','\0'}; //error  excess elements in scalar initializer
    //cout<<"arr2 : "<<arr2<<endl; 

    char * arr4 {"hello world!"};
    cout<<"arr4 : "<<arr4<<endl; //prints the whole message
    cout<<"*arr4 : "<<*arr4<<endl; //prints just 'h'
    cout<<"sizeof(arr4) : "<<sizeof(arr4)<<endl;
    cout<<"sizeof(*arr4) : "<<sizeof(*arr4)<<endl;
    for(int i{};arr4[i]!='\0';i++)
    {
        cout<<"*arr4+"<<i<<" : "<<*(arr4+i)<<endl;
    }

    /* OUTPUT 
    
        arr4 : hello world!
        *arr4 : h
        sizeof(arr4) : 8
        sizeof(*arr4) : 1
        *arr4+0 : h
        *arr4+1 : e
        *arr4+2 : l
        *arr4+3 : l
        *arr4+4 : o
        *arr4+5 :  
        *arr4+6 : w
        *arr4+7 : o
        *arr4+8 : r
        *arr4+9 : l
        *arr4+10 : d
        *arr4+11 : !

    */
    // int a[5];
    // size(a); //not an error 
    // for(int i : size(arr4)) // error



    int *point;
    //*point=5;//segfault
    int a = 5;
    //*point=a;//segfault
    point=&a;
    cout<<"*point : "<<*point<<endl; // *point : 5
    cout<<"point : "<<point<<endl; //point : 0x16b97717c
    cout<<"&point : "<<&point<<endl; //&point : 0x16b977180



    //to modify strings as a whole
    char * message {"girlie pop"};
    cout<<"message : "<<message<<endl;
    message = "hi";
    cout<<"message : "<<message<<endl;


    // to modify certain characters in a string
    char m[] {"hello"};
    // m="hi";// error: array type 'char[6]' is not assignable
    cout<<"m : "<<m<<endl;
    m[0]='b';
    cout<<"m : "<<m<<endl;




    return 0;
}

/* SEGMENTATION FAULT 

When a segmentation fault occurs, the operating system typically terminates the offending 
program to prevent it from causing further harm. In languages like C and C++,
segmentation faults are often a result of programming errors related to memory management 
and pointer manipulation.

A segmentation fault, often abbreviated as segfault, is a type of error in programming 
that occurs when a program attempts to access a memory location that it's not allowed to 
access. 

This can happen due to various reasons, including:

    1. Dereferencing a Null Pointer: Attempting to access memory through a pointer that 
    hasn't been initialized or has been set to null.

    2. Accessing Out-of-Bounds Memory: Accessing memory beyond the bounds of an array or 
    other data structure.

    3. Accessing Freed Memory: Trying to access memory that has been deallocated using 
    the free() function or delete operator.

    4. Using Uninitialized Variables: Accessing the value of a variable that has not been 
    initialized.
*/