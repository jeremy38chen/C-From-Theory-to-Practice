//
//  main.c
//  10.7
//
//  Created by Jeremy on 12/7/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    // insert code here...
   
    char str1[100],str2[100],temp[100],*address;
    int i =0,a=0,index,indexNext = 0,count =0,len,len2;
    
    printf("Enter the first character:");
    gets(str1);
    len = strlen(str1);
    
    printf("Enter the second character:");
    gets(str2);
    len2 = strlen(str2);
    
    
    for (i=0; indexNext < len-1;i++){
        
        address = strstr(str1+indexNext,str2);
        if (address == NULL) {
            break;
        }
        
        index = address - str1;
        indexNext = index + len2;
        strcpy(temp+index-len2*count, str1+indexNext);
        count++;
       
        
    }
    
    printf("the result is :%s",temp);
    

    
    return 0;
}
