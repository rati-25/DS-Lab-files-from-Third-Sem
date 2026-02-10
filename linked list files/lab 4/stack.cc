#include "stack.h"
#include <iostream>

int top{-1};
char stack[MAX];

void push(char a){
    if( top == MAX - 1 ){
        std::cout << "stack overflow!!!" << std::endl;
        return ;
    }
    std::cout << "pushed : " << a << std::endl;
    stack[++top] = a ;
    return ;
}
void pop(){
    if( top == -1 ){
        std::cout << "stack underflow!!!" << std::endl;
        return ;
    }
    std::cout << "popped : " << stack[top--] << std::endl;
    return ;
}
bool isFull(){
    return top == MAX - 1 ;
}
bool isEmpty(){
    return top == -1 ;
}