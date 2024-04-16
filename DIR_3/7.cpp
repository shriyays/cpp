#include<iostream>
using namespace std;

int main(){

    
    int n = 10;
    int& ref{n}; // braces initialisation
    
    int n1=342;
    int& ref1=n1; //assignment 

    //declaring and initialisation must be done together in one statement 
    //int& ref2; //error

    cout<<"n : "<<n<<endl;
    cout<<"ref : "<<ref<<endl;
    cout<<endl;
    cout<<"&n : "<<&n<<endl;
    cout<<"&ref : "<<&ref<<endl;
    cout<<endl;
    cout<<"sizeof(int) : "<<sizeof(int)<<endl;
    cout<<"sizeof(int&) : "<<sizeof(int&)<<endl;
    cout<<"sizeof(ref) : "<<sizeof(ref)<<endl;
    cout<<"sizeof(&ref) : "<<sizeof(&ref)<<endl;

    cout<<endl<<"after modifying n=n1=341"<<endl; //any changes reflect in the references as well

    n=n1;

    cout<<"n : "<<n<<endl;
    cout<<"ref : "<<ref<<endl;
    cout<<endl;
    cout<<"&n : "<<&n<<endl;
    cout<<"&ref : "<<&ref<<endl;
    cout<<endl;
    cout<<"sizeof(int) : "<<sizeof(int)<<endl;
    cout<<"sizeof(int&) : "<<sizeof(int&)<<endl;
    cout<<"sizeof(ref) : "<<sizeof(ref)<<endl;
    cout<<"sizeof(&ref) : "<<sizeof(&ref)<<endl;

    cout<<endl<<endl;

    // cout<<"n1 : "<<n1<<endl;
    // cout<<"ref1 : "<<ref1<<endl;
    // cout<<endl;
    // cout<<"&n1 : "<<&n1<<endl;
    // cout<<"&ref1 : "<<&ref1<<endl;
    // cout<<endl;
    // cout<<"sizeof(int) : "<<sizeof(int)<<endl;
    // cout<<"sizeof(int&) : "<<sizeof(int&)<<endl;
    // cout<<"sizeof(ref1) : "<<sizeof(ref1)<<endl;
    // cout<<"sizeof(&ref1) : "<<sizeof(&ref1)<<endl;

    cout<<endl<<"after modifying ref=10"<<endl;

    ref=10;
    cout<<"n : "<<n<<endl;
    cout<<"ref : "<<ref<<endl;
    cout<<endl;
    cout<<"&n : "<<&n<<endl;
    cout<<"&ref : "<<&ref<<endl;
    cout<<endl;
    cout<<"sizeof(int) : "<<sizeof(int)<<endl;
    cout<<"sizeof(int&) : "<<sizeof(int&)<<endl;
    cout<<"sizeof(ref) : "<<sizeof(ref)<<endl;
    cout<<"sizeof(&ref) : "<<sizeof(&ref)<<endl;

    cout<<endl<<"const references "<<endl<<endl;

    int n3=1;
    const int& ref3=n3;
    cout<<"Before modifying "<<endl;
    cout<<"n3 : "<<n3<<endl;
    cout<<"ref3 : "<<ref3<<endl;
    cout<<"&n3 : "<<&n3<<endl;
    cout<<"&ref3 : "<<&ref3<<endl;

    cout<<"Before modifying n3=2"<<endl;
    n3=2;
    cout<<"n3 : "<<n3<<endl;
    cout<<"ref3 : "<<ref3<<endl;
    cout<<"&n3 : "<<&n3<<endl;
    cout<<"&ref3 : "<<&ref3<<endl;

    cout<<"Before modifying ref3=3"<<endl;
    //ref3=2; // error -   cannot assign to variable 'ref3' with const-qualified type 'const int &'
    cout<<"n3 : "<<n3<<endl;
    cout<<"ref3 : "<<ref3<<endl;
    cout<<"&n3 : "<<&n3<<endl;
    cout<<"&ref3 : "<<&ref3<<endl;
    





    return 0;
}

/* REFERENCES 
    - works as an alias variable to an original variable and has the same properties of the original variable
*/