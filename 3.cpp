#include<iostream>
using namespace std;
int val = 700;
namespace first
{
    int val = 12498;
}

void func()
{
    int val = 0;
}

int main()
{
    int val = 69;
    cout<<first::val<<"\t"<<val<<"\t"<<::val<<endl;
    //'::' is used to access global variables inside a function
    //cout<<func::val; --  error: 'func' is not a class, namespace, or enumeration 
    //for a variable inside a function to be used , the function must either be returning that variable or must make use of pointers
    return 0;
}
/*

NAMESAPCE :

Namespaces provide the space where we can define or declare identifiers i.e. names of variables, methods, classes, etc.

A namespace is a declarative region that provides a scope to the identifiers (names of functions, variables or other user-defined data types)
inside it.

Namespace declarations appear only at global scope.

Namespace declarations can be nested within another namespace.

Namespace declarations don’t have access specifiers (Public or Private).

No need to give a semicolon after the closing brace of the definition of namespace.

We can split the definition of namespace over several units.

DEFINITION:
namespace  namespace_name{
     // code declarations i.e. variable  (int a;)
     method (void add();)
     classes ( class student{};)
}

CALL : namespace_name: :code;  // code could be a variable, function or class.

*/





/*

"endl"  &  "\n":

cout << endl inserts a new line and flushes the stream(output buffer), whereas cout << “\n” just inserts a new line.

cout << endl; can be said equivalent to cout << ‘\n’ << flush; 

cout << “\n” looks performance wise better but in real cout << endl is much better in C++; As it doesn’t occupies any memory
and also if flushing of stream is required.

endl : 
    - manipulator
    - does not occupy memory 
    - keyword - no meaning when stored in a string
    - only in C++
    - keeps flushing the queue in the output buffer throughout the process. 

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





/* 

SCOPE RESOLUTION OPERATOR : ( has multiple purposes in C++ )

Purpose 1 - to access a global variable when there exists a local variable with the same name.
Purpose 2 - to define a function outside a class.
Purpose 3 - to access a class's static variables.
Purpose 4 - in case of multiple inheritance.
Purpose 5 - for namespaces 
Purpose 6 - to refer a class that is inside another class.
Purpose 7 - 




*/