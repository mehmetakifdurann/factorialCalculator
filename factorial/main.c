//
//  main.c
//  factorial
//
// This is the factorial function with for loop.
//  Created by Akif Duran
//
#include <stdio.h>


int main(void){
    
//We are taking the number input for counting.
    
    int i, number;
    int factor=1;
    
    printf("Please enter the number that you want to calculate thats factorial: \n");
    
    scanf("%d",&number);
    
    for(i=1;i<=number;i++)
    {
        factor = factor * i;
    }
    printf("This numbers factorial is : %d \n",factor);
    
    return 0;
}
