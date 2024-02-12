/*
Name        : Siva Dinesh. K
Reg.No      : 23028_068
Date        : 05-01-2024
Module      : Advanced C
Description :program to squeeze the char in s1 that matches with string2.
*/
#include <stdio.h>
#include <string.h>

void squeeze(char [], char []);

int main()
{
    /*reading input.*/
    char str1[30], str2[30];
    
    /*reading string 1*/
    printf("Enter string1:");
    scanf("%[^\n]", str1);

    /*To avoid the buffer.*/                
    getchar();

    /*reading string 2*/
    printf("Enter string2:");
    scanf("%[^\n]", str2);
    
    /*calling the squeeze function*/
    squeeze(str1, str2);
                                
    /*Printing the result.*/
    printf("After squeeze s1 : %s\n", str1);
    
    return 0;
}

/*Declaring the function*/
void squeeze(char str1[], char str2[]){
    /*var to iterate and compare*/
    int k,i,j;

    /*calculating the len of strings*/
    int len1=strlen(str1),len2=strlen(str2);

    /*Iterating through first loop*/
    for (i=0;i<len1;i++){
        
        /*Nested loop to comapre str1 & str2 elements*/
        for(j=0;j<len2;j++){

            /*comparing the elements*/
            if(str1[i]==str2[j]){

                /*replacing the ith element if i<len*/
                for(k=i;k<len1-1;k++){

                    /*swapping the elements.*/
                    str1[k] = str1[k+1];
                }

                /*decreasing the len1 to remove the duplicates*/
                len1--;
                i--;
                /*exiting the inner most for loop*/
                break;
            }
        }
    }
    /*inserting the last element as \0*/
    str1[len1] = '\0';
}
