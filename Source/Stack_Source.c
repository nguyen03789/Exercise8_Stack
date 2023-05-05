/*
File: Stack_Source.c
Author: Phan Trong Nguyen
Date: 06/05/2023
Description: 
*/
#include "../Header/Stack_Header.h"
/*
Function: Init
Description: Create Stack
Input: Pointer of STACK
Output: None
*/
void Init(Stack *stack){
    stack->top = -1;
}
/*
Function: Isempty
Description: Check stack is empty or not
Input: Pointer of STACK
Output: 
0: Stack is empty
1: Stack isn't empty
*/
bool isEmpty(Stack *stack){
    return stack->top == -1;
}
/*
Function: Isfull
Description: Check stack is full or not
Input: Pointer of STACK
Output: 
0: Stack is full
1: Stack isn't full
*/
bool isFull(Stack*stack){
    return stack->top == SIZE -1;
}
/*
Function: Push
Description: Add value at the end of Stack
Input: 
    + Pointer of STACK
    + Value to put in Stack
Output: None
*/
void Push(Stack *stack, uint8_t value){
    if(isFull(stack)){
        printf("Is full\n");
    }
    else{
        stack->data[++stack->top] = value;
    }
}
/*
Function: Pop
Description: Remove value at the head of Stack
Input: 
    + Pointer of STACK
Output: None
*/
void Pop(Stack *stack){
    if(isEmpty(stack)){
        printf("Is empty\n");
    }
    else{
        for(int i = 0; i <stack->top; i++){
            stack->data[i] = stack->data[i+1];
        }
        stack->top--;
    }
}
/*
Function: Display
Description: Display all value of the Stack
Input: 
    + Pointer of STACK
Output: Value of Stack
*/
void Display(Stack *stack){
    for(int i = 0; i <= stack->top ; i++){
    printf("Data of Stack at Positon %d is %d\n",i,stack->data[i]);
    }
}
