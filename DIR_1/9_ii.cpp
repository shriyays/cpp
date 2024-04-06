#include<iostream>
using namespace std;
int main(){
    int a {-1}; int b{3};
    cout<<a<<" "<<b<<endl;

    signed int c{-1}; signed int d{3};
    cout<<c<<" "<<d<<endl;
    
    //unsigned int e{-1}; //compiler error
    unsigned int f{3};
    cout<<" "<<f<<endl;

    return 0;
}

/* INT MODIFIERS 
1. signed and unsigned - by default is signed
signed range : {-2147483648,2147483647 }
unsigned range : {0, 4294967295}

2. short and long ( work for all other integral types)

*/