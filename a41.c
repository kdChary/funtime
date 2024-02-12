/*
Name        : Siva Dinesh. K
Reg.No      : 23028_068
Date        : 04-01-2024
Module      : Advanced C
Description : Program to reverse a string iteratively.
*/
#include <stdio.h>
#include <string.h>

//function defination.
void reverse_iterative(char str[]);

int main()
{
    char str[30];
    /*read input*/
    printf("Enter any string : ");
    scanf("%[^\n]", str);

    /*calling the function*/
    reverse_iterative(str);
    
    /*printign the reversed string*/
    printf("Reversed string is %s\n", str);

    return 0;
}

/*declaring the function*/
void reverse_iterative(char str[]){
 
    /*storing the string len for iterating*/
    int n=strlen(str);

    /*swapping the elements of string*/
    for(int i=0,j=n-1; i<n/2; i++,j--){

        char temp = str[j];

        str[j]= str[i]
            ;
        str[i] = temp;

    }
}
