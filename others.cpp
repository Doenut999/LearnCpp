#include "iostream"

void printDouble(int value){
    std::cout << value << " doubled is " << value*2<<std::endl;
}

int getValueFromUser(){
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input ;
    return input;
}

