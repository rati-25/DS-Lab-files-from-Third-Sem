#ifndef STACK_H
#define STACK_H

#define MAX 10

extern int top;
extern char stack[MAX];

void push(char);
void pop();
bool isFull();
bool isEmpty();

#endif