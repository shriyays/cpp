#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    // postfix increment & decrement
    //   - changes come into affect in the use of the varaible after incrementing or decrementing
    int a=1, b=1;
    int c = a++ ; //c=1, a=2
    cout<<a<<endl; //2
    cout<<b++<<endl; //1, b=2
    cout<<b++<<endl; //2, b=3
    cout<<b<<endl; //3
    cout<<c<<endl; //1

    cout<<endl;

    a=1, b=1;
    c = a-- ; //c=1, a=0
    cout<<a<<endl; //0
    cout<<b--<<endl; //1, b=0
    cout<<b++<<endl; //0, b=1
    cout<<b<<endl; //1
    cout<<c<<endl; //1



    cout<<endl;

    //prefix increment & decrement
    //   - changes come into effect immediately
    a=1,b=1;
    ++a;
    cout<<a<<endl;
    cout<<++b<<endl;

    cout<<endl;


    //Compound operators or shorthand operators - to perform some operation with another number and the variable itself
    int z=0;
    z+=2; cout<<z<<endl; //2
    z-=1; cout<<z<<endl; //1
    z*=20; cout<<z<<endl; //20
    z/=5; cout<<z<<endl; //4
    z%=3; cout<<z<<endl; //1



    return 0;
}

/* OPERATIONS 

1. add + 
2. subtract - 
3. multiply * 
4. divide (quotient) /
5. divide (remainder) %
6. Relational operations : <, <=, >, >=, ==, !=
7.  Logical : &&, ||, !
8. ternary operator : "condition ? perform if true : perform if false"
9. Bitwise shift operators : <<, >>

PRECEDENCE & ASSOCIATIVITY 

ORDER : *, /, % -> +, -

left to right associativity : +-, a++ a--, etc.
right to left associativity : ?:, ++a --a, etc.



*/