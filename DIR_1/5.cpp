
/* FUNCTIONS

return_type function_name(formal_parameters)
{
    body;
    return ___;
}
*/

#include<iostream>

int func_def(int ,int ); 
//OR 
//int func_def(int num1,int num2)

int main(){
    int val;
    val=func_def(2,3);
    //std::cout<<"RESULT = "<<val<<std::endl;
    int first_number {3};
    std::cout<<first_number;
    return 0;
}

int func_def(int num1,int num2){
    return num1*num2+num1-num2;
}