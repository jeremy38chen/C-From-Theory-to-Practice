//
//  main.c
//  10.11
//
//  Created by Jeremy on 12/7/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>

#include <string.h>

int main()

{
    
    char num[50];
    
    int  i, len;
    
    int result=0;
    
    printf("Enter a number to convert to integer: ");
    
    gets(num);
    
    len = strlen(num);
    
    for(i=0; i<len; i++){
        
        result = result * 10 + ( num[i] - '0' );
        
    }
    
    printf("The converted result:%d", result);
    
}