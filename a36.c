/*
Name        : Siva Dinesh. K
Reg.No      : 23028_068
Date        : 02-01-2024
Module      : Advanced C
Description : Program to count line,word & character count. 
*/
#include <stdio.h>

int main(){
    char ch;
    static int lineCount,wordCount,charCount;
    int wrd=0; 
    while((ch=getchar())!=EOF){
        charCount++;
        if(ch == '\n'){
            lineCount++;
        }
        if(ch == ' '||ch=='\t'||ch=='\n'){
             wrd=0;
        }
        else if(!wrd){
            wrd = 1;
            wordCount++;
        }
                   
    }
    printf("\nCharacter count : %d\n"
            "Line count : %d\nWord count : %d\n",
            charCount,lineCount,wordCount);
    return 0;

}

