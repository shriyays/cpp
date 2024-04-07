#include<iostream>

using namespace std;

int main(){

    //implementing loops to print diamond pattern
    int r{};
    cout<<"enter height of the diamond :";
    cin>>r;
    r/=2;
    cout<<endl;

    int n{};
    n=1+((r-1)*2);
    char arr[n];



    //for loop
    for(int i=0; i<n; i++)
        arr[i]=' ';

    int mid = (sizeof(arr)/sizeof(char))/2 ; //if n=7, mid=4


    
    for(size_t i{}; i<r*2-1; i++) //size_t is used for unsigned +ve int
    {
        if(i<r){
            arr[mid+i]='*';
            arr[mid-i]='*';
            
        }
        else{
            arr[n-1-i%r]=' ';
            arr[i%r]=' ';
        }
        int j{};



        //while loop
        while(j<n){
        //for(int j{};j<n;j++)
            cout<<arr[j];
            j++;
        }
        cout<<endl;
    }


    //range based for loop
    int a[] = { 0, 1, 2, 3, 4, 5 };
    for (int n : a)
        cout << n << ' ';


    int i=0;

    
    //do-while loop
    do{
        cout<<"C++";
        i++;
    }while(i<50);


    return 0;
}

