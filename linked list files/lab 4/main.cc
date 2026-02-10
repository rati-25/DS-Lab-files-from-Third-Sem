#include"stack.h"
#include<iostream>

int main () {
    char infix [20] ;
    std::cout << "enter the infix expression :" ;
    std::cin >> infix ;
    std::cout << "pushing characters into the stack..." << std::endl;
    for ( char c : infix ){
        if ( c == '\0')
        {
            break;
        }
        push (c);
    }
    std::cout << std::endl << "popping elements from the stack..." << std::endl;
    while ( !isEmpty() ){
        pop();
    }
    std::cout << std::endl;

    return 0;
}