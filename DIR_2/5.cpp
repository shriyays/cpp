
#include<iostream>

int main(){

    const char* str {"hello world."};
    const char str1[] {"hi world!"};

    std::cout<<"str : "<<str<<std::endl;
    std::cout<<"str1 : "<<str1<<std::endl;

    std::cout<<"strlen(str) : "<<strlen(str)<<std::endl;
    std::cout<<"strlen(str1) : "<<strlen(str1)<<std::endl;

    std::cout<<"sizeof(str) : "<<sizeof(*str)<<std::endl;
    std::cout<<"sizeof(str1) : "<<sizeof(str1)<<std::endl;

    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout<<"strcmp"<<std::endl; // compares rhs to lhs = lhs - rhs and returns the difference of the first unmatec

    const char* str2 {"Aaa"};
    const char* str3 {"Baa"};
    std::cout<<"strcmp(str2,str3) : "<<std::strcmp(str2,str3)<<std::endl;

    const char* str4 {"aaB"};
    const char* str5 {"aaA"};
    std::cout<<"strcmp(str4,str5) : "<<std::strcmp(str4,str5)<<std::endl;

    const char* str6 {"aaB"};
    const char* str7 {"baA"};
    std::cout<<"strcmp(str6,str7) : "<<std::strcmp(str6,str7)<<std::endl;
    
    return 0;
}


/*
strcmp(lhs,rhs) 
strncmp(lhs,rhs) - first n char
strchr(result_string, target_string) - first occurence of a character
strrchr(result_string, target_string) - last occurence of a character
strcat(dest,src) - concatenates/attaches src string to dest string
strscat(dest,src) - concatenates/attaches n characters from src string to dest string



*/
