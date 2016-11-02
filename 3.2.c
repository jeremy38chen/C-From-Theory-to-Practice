//
//  main.c
//  3.2
//
//  Created by Jeremy on 10/11/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    int FAge= 0;
    int SAge= 0;
    int x =0;
    
    printf("Enter your Father's age:");
    scanf("%d",&FAge);
    
    printf("Enter your age:");
    scanf("%d",&SAge);
    
    x = (FAge-2*SAge);
    
    printf("After %d years , your Father's age will two times older than you",x);
    
    return 0;
    
}
