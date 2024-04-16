#include<iostream>
using namespace std;

int main(){


    {
        int *p1{nullptr};
        p1=new int; //stored in the heap
        cout<<"p1 : "<<p1; // address allocated dynamically by "new"
        cout<<", ";
        *p1=7;            
        cout<<"*p1 : "<<*p1; // value stored at the address allocated
        cout<<", ";
        cout<<"&p1 : "<<&p1; // address of the pointer 
        //printf(", *p1 : %d, &p : %p\n",*p1,&p1); C lang works in C++ as well

        delete p1; //freeing the memory in heap and returning it to the OS
        p1=nullptr;
    }


    cout<<endl; cout<<endl;

    {
        int *p2{nullptr};
        //p2=77;  //error: incompatible integer to pointer conversion assigning to 'int *' from 'int'
        //*p2=77; //segfault
    }





    int *p3{nullptr}, *p4{nullptr};

    {
        int local_var{70};
        int *local_ptr = new int;
        *local_ptr=30;
        
        cout<<"LOCAL SCOPE - local_var : "<<local_var<<endl;
        cout<<"LOCAL SCOPE - &local_var : "<<&local_var<<endl;
        
        cout<<endl;
        cout<<"LOCAL SCOPE - local_ptr : "<<local_ptr<<endl;
        cout<<"LOCAL SCOPE - *local_ptr : "<<*local_ptr<<endl;
        cout<<"LOCAL SCOPE - &local_ptr : "<<&local_ptr<<endl; cout<<endl;

        p3=&local_var;
        p4=local_ptr;

        cout<<"LOCAL SCOPE - p3 : "<<p3<<endl;
        cout<<"LOCAL SCOPE - *p3 : "<<*p3<<endl;

        cout<<endl;

        cout<<"LOCAL SCOPE - p4 : "<<p4<<endl;
        cout<<"LOCAL SCOPE - *p4 : "<<*p4<<endl;

        delete local_ptr;

    }
    
    cout<<endl;
    cout<<"GLOBAL SCOPE - p3 : "<<p3<<endl;
    cout<<"GLOBAL SCOPE - *p3 : "<<*p3<<endl;

    cout<<endl;
    cout<<"GLOBAL SCOPE - p4 : "<<p4<<endl;
    cout<<"GLOBAL SCOPE - *p4 : "<<*p4<<endl;




    
    { 
        int *p1{new int};
        int *p2{new int (23)};
        int *p3{new int{75}};

        cout<<endl;
        cout<<"*p1:"<<*p1<<endl;
        cout<<"*p2:"<<*p2<<endl;
        cout<<"*p3:"<<*p3<<endl;

        delete p1, delete p2, delete p3; //releasing memory
        p1=p2=p3=nullptr;

        delete p1; //deleting twice may cause undefined behaviour
    }



    return 0;
}

/* MEMORY MAP 

    C++ CODE in physical memory -> (compiler) -> binary file -> (os) -> (MMU)
    -> (in RAM/real memory) & (in prog area/virtual memory) -> OUTPUT 

    Virtual memory - each program is divided into processes and each process has access 
                    to a memory range of 0~2^N (N=32/64 depending on the system )

    Memory map - view of the virtual memory / program area - STANDARD for each os

    [ TEXT -> DATA -> HEAP -> STACK -> SYSTEM ]
    
    text - loads the binary files of the code
    stack - local variables, function calls, etc
          - memory is finite
          - dev. does not have full control of the memory lifetime
          - lifetime is controlled by the scope of a mechanism
    heap - used at run time for additional memory if stack runs out 
         - memory is finite 
         - dev. has complete control of when the memory gets allocated & released
         - lifetime is explicitly controll by "new" & "delete" operators
    

*/

/* DYNAMIC MEMORY ALLOCATION - uses heap memory

"new" 
    - allocates memory in the heap , this memory belongs to the program and cannot be used by the system 
    - the amount/size of the memory allocated is defined directly by the type of of pointer itself
    - 

*/