/*
File: main.c
Author: Phan Trong Nguyen
Date: 06/05/2023
Description: 
*/
#include"Stack_Source.c"

int main(int argc, char const *argv[])
{
    Stack a;
    Init(&a);
    Push(&a,2);
    Push(&a,4);
    Push(&a,6);
    Push(&a,8);
    Push(&a,10);
    Pop(&a);
    Display(&a);
    return 0;
}
 
