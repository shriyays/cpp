#include<iostream>
using namespace std;

int main(){
    int n1=15; //decimal
    int n2=015; //octal
    int n3=0x0F; //hexadecimal
    int n4=0b00001111; //binary
    cout<<n1<<endl<<n2<<endl<<n3<<endl<<n3<<endl<<n4; // all the int types od each number only gets printed
    cout<<endl;
    
    int n=12;
    cout<<n<<endl; //default : 12
    cout<<dec<<n<<endl; //decimal : 12
    cout<<oct<<n<<endl; //octal : 14
    cout<<hex<<n<<endl; //hexadecimal : c
    
    cout<<uppercase<<showbase<<hex<<n;
    return 0;
}