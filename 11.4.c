//
//  main.c
//  11.4
//
//  Created by Jeremy on 12/20/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>


void finder(double *k){
    
    double breakpart1[100],breakpart2[100];
    int d,count=0;
    
    for(d=0;d<100;d++)
        breakpart1[d]= k[d];

    for(d=0;d<100;d++)
        breakpart2[d]= k[d+100];
    
    for (d=0;d<100;d++ ) {
        if (breakpart1[d] == breakpart2[d]) {
            count++;
        }
    }
    if (count ==100) {
        printf("the two arrary are the same ");
    }
    
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    double a[200];
    int b;
    printf("Enter 200 double numbers:\n");
    for (b=0; b<200; b++) {
        scanf("%lf",&a[b]);
    }
    finder(a);
    return 0;
}

