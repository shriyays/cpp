#include<iostream>
using namespace std;

int main(){

    //BRACED VARIABLE INITIALISATION 

    int a; //garbage value
    int b{}; //b=0
    //int c{20} d{30}; - error
    int c{20};int d{30};
    int e{c+d}; //e = c+d = 20+30 =50
    //int f{g+h}; //error
    //int g{2.9}; //errror
    cout<<"Braced Variable Initialisation"<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl;//<<endl<<f<<endl<<g;



    //FUNCTIONAL VARIABLE INITIALISATION 

    //int aa();// error - empty parentheses interpreted as a function declaration
    int bb(10);
    int cc (20);
    int dd(bb+cc);
    int ee(2.9); //warning - implicit conversion
    cout<<endl<<"Functional Variable Initialisation"<<endl;
    cout<<bb<<endl<<cc<<endl<<dd<<endl<<ee<<endl;


    // ASSIGNMENT INITIALISATION 

    int f=7;
    cout<<endl<<"Assignment Initialisation"<<endl;
    cout<<f<<endl;

    
    return 0;
}

/* Assignment Initialisation Rules : 

    - variables should start with letters only
    - first letter can be upper/lower case
    - case sensitive
    - can contain numbers and "_" only other than letters
    - no spaces allowed
*/