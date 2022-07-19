/*
ERRORS IN C++
    - illegal operations performed by the user which results in abnormal working of a program
1. Compile Time Errors / Syntax errors
   -  missing semicolon
   - synatx errors 
   - compilation is not succeeded


2. Runtime Errors 
    - occur during exceutiuon of program 
    - zero division errors
    - after compilation is suceeded
    - warnings are generated when runtime errors are encountered

3.Linker errors
    - occur after compilation when different object files are linked with main's object using run
    - when the executable file cannot be generated
    - Main() instead of main()


4.Logical errors
    - desired output is not obtained 
    - compilation and execution are successful


5. Semantic error
    - occurs when the statements written in the program are not meaningful to the compiler.
    - 

*/

#include <iostream>
using namespace std;

//Linker error : "MAIN cant be found"
int MAIN()
{
    //compile time error : ";" missing 
    cout<<"hello B's"<<endl

    //runtime error
    int n ;
    n=69/0;

    //semantic error : "error: lvalue required as left operand of assignment "
    int a, b, c;
    a + b = c;

    return 0;
}