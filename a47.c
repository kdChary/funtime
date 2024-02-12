/*
Name        : Siva Dinesh. K
Reg.No      : 23028_068
Date        : 09-01-2024
Module      : Advanced C
Description : Program to check if the given number is a pangram.
*/
#include <stdio.h>

//function declaration.
int pangram(char []);

int main(){
    
    //read input.
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    //call function & store return value.
    int retVal = pangram(str);

    //print the result.
    if(retVal){

        printf("The Entered String is a Pangram String\n");
        return 0;
    }

    printf("The Entered String is not a Pangram String\n");
    return 0;
}

//defining the function.
int pangram(char str[]){
    
    int i=0,count=0;
    //array to track alphabets.
    int alpha[26];    

    //run the loop until '\0'.
    for(int i=0;str[i] != '\0'; i++){
        
        //convert all the char into lower.
        //int ch = tolower(str[i]);
        
        //compare ascii values.
        if ('a' <= str[i] && str[i] <= 'z'){
            
            //increment count if in range.
            //count += !alpha[str[i]-97];
            alpha[str[i]-97] = 1;
            //printf("%d-", count); 
        }
        else if('A'<= str[i] && str[i] <= 'Z'){
            
            //increment count if in range.
            //count += !alpha[str[i]-65];
            alpha[str[i]-65] = 1;
            //printf("%d\t", count);
        }
        //printf("^_^");
        
    }
    for (i=0; i<26; i++){
        if (alpha[i]==1){
            count++;
        }
    }
    if (count == 26){
        return 1;
    }
    return 0;
}



