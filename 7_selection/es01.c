/*
 * Write a program that take three different integer as input and return 
 * the greater one. 
 */

// Libraries
#include <stdio.h>


int main() {
    
    int a, b, c;
    
    printf("Insert three different integer:\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b || a == c || b == c) {
        printf("The given integer are not different!\n");
        return 1;
    }
    
    if(a > b)
        if(a > c)
            printf("%d\n", a);
        else
            printf("%d\n", c);
    else if (b > c)
        printf("%d\n", b);
    else
        printf("%d\n", c);
        
    return 0; 
}

