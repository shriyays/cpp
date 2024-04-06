#include<iostream>

using namespace std;

namespace first
{
    int val = 12498;
}

void func()
{
    int val = 0;
}

//global variable
int val = 700;

/* int func()      // "error: functions that differ only in their return type cannot be overloaded"
{
    int val = 1000;\
    return val;
}
*/

int randf(){
    int val=1000;
    return val;
}

int main()
{
    //local variable
    int val = 69;

    //cout<<func::val; --  error: 'func' is not a class, namespace, or enumeration 


    //local variable val
    cout<<"val = "<<val<<endl;

    //global variable val - '::' is used to access global variables inside a function
    cout<<"::val = "<<::val<<endl; 

    //namespace' val - 'namespace::val' is used to access the variables inside a namespace
    cout<<"first::val = "<<first::val<<endl; 

    //func val
    //for a variable inside a function to be used outside it, the function must either be returning that variable or must make use of pointers
    cout<<"randf() = "<<randf()<<endl; 
    
    return 0;
}



/*"endl"  &  "\n":

cout << endl inserts a new line and flushes the stream(output buffer), whereas cout << “\n” just inserts a new line.

cout << endl; (can be said equivalent to) cout << ‘\n’ << flush; 

cout << “\n” looks better performance wise but in real cout << endl is much better ; As it doesn’t occupy any memory and can be used if flushing of stream is required.

endl : 
    - manipulator
    - does not occupy memory 
    - keyword - no meaning when stored in a string
    - only in C++
    - keeps flushing the queue in the output buffer throughout the process. 
    - std::endl belongs to <ostream>

"\n" :
    - escape sequence character 
    - occupies 1 byte of memory 
    - can be stored in a string and will still convey its specific meaning of line break.
    - in C and C++
    - flushes the output buffer only once at the end of the program

It is a common practice to use std::endl to print newlines while using cout. For small programs with very little I/O operations 
this practice is acceptable, but if the bulk of I/O operations increase, then the efficiency of the program is compromised. 
std::endl not only adds newlines to the stream, it also flushes the buffer each time it is used. 
Flushing of buffers is an Operating System task. Each time the buffer is flushed, a request has to be made to the OS and these requests are 
comparatively expensive. Furthermore, we don’t really need to flush the buffer every time we write something to the stream, since the buffers
get flushed automatically when they get full. In the rare cases we do need to perform flushing, we can explicitly specify the operation 
using either cout.flush() or by inserting std::flush into the stream. Writing ‘\n’ characters directly to the stream is more efficient since
it doesn’t force a flush like std::endl.
*/

/*  SCOPE RESOLUTION OPERATOR : ( has multiple purposes in C++ )

Purpose 1 - to access a global variable when there exists a local variable with the same name.
Purpose 2 - to define a function outside a class.
Purpose 3 - to access a class's static variables.
Purpose 4 - in case of multiple inheritance.
Purpose 5 - for namespaces 
Purpose 6 - to refer a class that is inside another class.( inheritance )


*/