#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    char str2[50];
    char str3[50];

    printf("Enter the string to work with : ");
    scanf("%s",str);

    printf("The string : %s",str);
    printf("\nLength of the string : % d",strlen(str));
    printf("\nEnter the string to concatenate : ");
    scanf("%s",str2);
    printf("\nConcatenated string : %s",strcat(str,str2));
    printf("\nThe string is now : %s",str);
    printf("\nEnter string to compare with : ");
    scanf("%s",&str3);
    if (strcmp(str,str3) ==0){
        printf("\nThe strings are equal");
    }
    else{
        printf("\nThe strings are not equal");
    }


    return 0;
}

