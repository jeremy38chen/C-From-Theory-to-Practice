#include <stdio.h>
#include <string.h>

//The process transcript of this program is on word file


int main()
{
    char str1[100],str2[100],str3[100],temp1[100],temp2[100],temp3[100];
    int len1,len2,len3;
    
    printf("Enter the first character:");
    gets(str1);
    strcpy(temp1, str1);
    len1 = strlen(str1);
    
    printf("Enter the second character");
    gets(str2);
    strcpy(temp2, str2);
    len2 = strlen(str2);
    
    printf("Enter the third character");
    gets(str3);
    len3 = strlen(str3);
    
    
    strncpy(str1, str3,len3+1);
    
    strncpy(str2, temp1,len1+1);
    
    strncpy(str3, temp2,len2+1);
    
    printf("The result after swapping the str to right:\n");
    
    puts(str1);
    puts(str2);
    puts(str3);
    
    
    
    return 0;

}