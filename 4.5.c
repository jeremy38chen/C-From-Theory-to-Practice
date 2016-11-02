//
//  main.c
//  4.5
//
//  Created by Jeremy on 10/17/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

/*  1.insert two integers
    2.two integrals do the Xor equation 
    3.print the result of those integers passed the equation
 */
#define snapONE(c,d)  (((c)^(d))^(d))
#define snapTWO(c,d)  (((c)^(d))^(c))
#include <stdio.h>

int main() {
    
    int x=0,y=0;
    printf("First integer:");
    scanf("%d",&x);
    printf("Second integer:");
    scanf("%d",&y);
    x=snapONE(x,y);
    y=snapTWO(y,x);
    
    printf("result of two integers go after the first equation:%d\nresult two integers go after the second equation:%d",x,y);
    
    return 0;
    
   
    
}
