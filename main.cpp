#include "iostream"


void printDouble(int);
int getValueFromUser();

int main(){
#define identifier
#define identifier1 "substitution_test"
#ifdef identifier
    printDouble(getValueFromUser());
#endif
#ifdef identifier1
    std::cout << "My name is " << identifier1;
#endif
    return 0;
}

