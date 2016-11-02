//
//  main.c
//  4.6
//
//  Created by Jeremy on 10/17/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//


/*  1.insert a integer
    2.put it into (array quotient[0])
    3.put (array quotient)/2 into the next (array quotient),(array remain) equals (quotient)%2
    4.do the step 3 in 8 times
    5,print the sum of the number in (array remain[1,3,5,7,9])
 */
#include <stdio.h>

int main() {
    // insert code here...
    
    int i = 0;
    int quotient[8];
    int remain[8];
    int insertInteger = 0;
    
        scanf("%d",&insertInteger);
    
    quotient[i] = insertInteger;
    
    for (i = 0;i<8;i++) {
        
            quotient[i+1] = quotient[i]/2;
            remain[i] = quotient[i]%2;
        }
        
    
        printf("%d",remain[1]+remain[3]+remain[5]+remain[7]);
    
    
    return 0;
    
    
    }
    
    
    
    
    
    
    

