//
//  main.c
//  pratice
//
//  Created by Jeremy on 10/11/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>

float bankdeposit(int,int);

int main() {
    // insert code here...
    int rate = 0,initalmoney = 0;
    float totalmoney = 0;
    
    printf("insert the annual interest rate %%:");
    scanf("%d",&rate);
    
    printf("insert your money:");
    scanf("%d",&initalmoney);
    
    totalmoney = bankdeposit(initalmoney,rate);
    
    printf("Your deposit after one year:%.f",totalmoney);
    
  
    
}


float bankdeposit(int c,int d){

    float e = 0;
    e = c*(1+(d*0.01));
    return e;

}