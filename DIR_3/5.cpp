#include<iostream>
using namespace std;

int main(){

    // THIS IS CORRECT 
    int *ptr1{new int{69}}; // address 1 in HEAP
    int number = 67;
    int * ptr2 {&number}; // address 2 in STACK 

    cout<<"ptr1 : "<<ptr1<<endl;
    cout<<"ptr2 : "<<ptr2<<endl;

    cout<<endl;

    cout<<"*ptr1 : "<<*ptr1<<endl;
    cout<<"*ptr2 : "<<*ptr2<<endl;

    delete ptr1;
    ptr1=nullptr;

    // BUT 

    // THIS IS A MEMORY LEAK
    int *ptr{new int{78}};
    ptr=&number; //now the the address that stores 78 is lost 
    ptr = new int {78} ;// not the same address still 
    
}

/* MEMORY LEAKS 
    - losing access to the memory that was dynamically allocated

*/