/*
Name        : Siva Dinesh. K
Reg.No      : 23028_068
Date        : 05-01-2024
Module      : Advanced C
Description : Program to reverse a string recursively.
*/
#include <stdio.h>
#include <string.h>

//function defination.
void reverse_recursive(char str[], int ind, int len);
int main(){
    /*reading input*/
    char str[30];
    printf("Enter any string : ");
    scanf("%[^\n]", str);

    /*calling function*/
    int len = strlen(str), ind=0;

    reverse_recursive(str, ind,len);

    /*Printintg the reversed string*/
    printf("Reversed string is %s\n", str);

    return 0;

}

/*declaring the function to reverse the string*/
void reverse_recursive(char str[], int ind, int len){
    //base condition.
    if(ind < len){
        //temp to store char in string indx
        char temp = str[ind];

        /*swaping the charecters.*/
        str[ind] = str[len-1];
        str[len-1] = temp;
        /*Updating the values of len and ind*/
        ind++;len--;

        /*callind the func inside itself for recursion.*/
        reverse_recursive(str, ind, len);
    }
}
