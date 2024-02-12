/*
Name        : Siva Dinesh. K
Reg.No      : 23028_068
Date        : -01-2024
Module      : Advanced C
Description :
*/
#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char *my_strtok(char str[], const char delim[]);

int main()
{
    char str[50], delim[50];
        
    printf("Enter the string  : ");
    scanf("%s", str);
                
     __fpurge(stdout);
                 
    printf("Enter the delimeter : ");
    scanf("\n%s", delim);
    __fpurge(stdout);
                                
    char *token = my_strtok(str, delim);
    printf("Tokens :\n");
                                        
    while (token != NULL)
    {
        printf("%s\n", token);
        token = my_strtok(str, delim);
    }
}

char *my_strtok(char str[], const char delim[]){
    static int j,i=0;
    int k=0;
    j=i;
    //static char arr[j];
    while(str[i] != '\0'){
        
        while(delim[k] !='\0'){
            printf("%c, %d\n", delim[k], k);
            if(delim[k] == str[i]){
                str[i]='\0';
                i++;
                printf("___%c___\n",delim[k]);
                k++;
                return &str[j];
            }
            if(str[i]==':'){
                printf("\nHello\n");
            }
            k++;
        }
        
        i++;
        printf("%d, %c", i, str[i]);
    }
    if(str[j]!='\0'){
        return &str[j];
    }return NULL;
}
