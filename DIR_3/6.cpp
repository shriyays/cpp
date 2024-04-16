#include<iostream>
using namespace std;

int main(){

    size_t size{10};

    //dynamic array
    int * salaries {new int [size]{1,2,3,4,5,6,77,8,9,123}}; // here salaries in an arrya in heap that points to size (10) new memory spaces
    // all the values get initialised to 0

    for(int i=0;i<size;i++)
    {
        cout<<salaries[i]<<endl;
    }

    // for (int salary:salaries){ //- error 
    //     cout<<salary<<endl;
    // }

    //static array
    int scores[10] {1,2,3,4,54,65,765,86,9,10};
    for (int score:scores){ 
        cout<<score<<endl;
    }


    delete[] salaries;
    salaries = nullptr;
    return 0;
}

/* DYNAMIC ARRAYS 

    - Arrays allocated in heap with new 
    */