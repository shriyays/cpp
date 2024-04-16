#include<iostream>
using namespace std;

int main(){

    int * p; //-> Solution : int * p {};  or  int * p {nullptr};
    cout<<*p; //derefencing unintialised pointer 
    // error/program crash 

    int * p1 {new int {4}};
    delete p1; //-> Solution : p1 = nullptr; ( after deleting )
    cout<<*p1; // dereferencing deleted pointer


    int *ptr1{nullptr}, *ptr2{nullptr};
    ptr1 = new int {3};
    ptr2 {ptr1};
    delete ptr2;//-> Solution : use condition to check if master pointer is valid or not 
    cout<<*ptr1; // dereferencing an indirectly deleted pointer

    return 0;
}

/* DANGLING POINTERS

    - doesnt point to a valid address in  memory 
    - dereferencing one would result in undefined behaviour
    - types : 
        1. UNINITIALISED POINTER
        2. DELETED POINTER
        3. MULTIPLE POINTERS POINTING TO THE SAME MEMORY


*/