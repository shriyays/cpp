#include<iostream>
#include<exception>

int main(){

    try{
        int* v = nullptr; // Initialize with null pointer
        if(v == nullptr) {
            throw std::runtime_error("Accessing uninitialized variable.");
        }
        std::cout << *v << std::endl;

    }catch (const std::exception& ex){
        std::cout << "Exception caught: " << ex.what() << std::endl;
        std::terminate(); // Terminate the program
    }

    return 0;
}
