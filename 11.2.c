//
//  main.c
//  11.2
//
//  Created by Jeremy on 12/20/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>
int f(int);
int g(int);

int main() {
    // insert code here...
    int insert,gresult,fresult;
    printf("Enter a number:");
    scanf("%d",&insert);
    gresult = g(insert);
    fresult = f(gresult);
    
    printf("The answer of the equation is %d\n", fresult);
    
    return 0;
}

int f(int a)
{

    if (a>0) {
        return a+2;
    };
    if (a<=0) {
        return -3*a+7;
    }
    return 0;
}
int g(int a)
{
    
    if (a>0) {
        return a*a+2;
    };
    if (a<=0) {
        return 7*a-5;
    }
    return 0;
}