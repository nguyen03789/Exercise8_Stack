/*
File: Stack_Header.h
Author: Phan Trong Nguyen
Date: 06/05/2023
Description: 
*/
#ifndef _Stack_
#define _Stack_

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define SIZE 10

typedef struct 
{
    uint8_t data[SIZE];
    uint8_t top;
}Stack;


void Init(Stack *stack);

bool isEmpty(Stack *stack);

bool isFull(Stack*stack);

void Push(Stack *stack, uint8_t value);

void Pop(Stack *stack);

#endif