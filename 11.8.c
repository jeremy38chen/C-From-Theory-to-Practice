//
//  main.c
//  11.8
//
//  Created by Jeremy on 12/20/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
void findrow(double);
int c,b;
double count,max;
int *temp;
int same[5]={0,0,0,0,0};
int main() {
    // insert code here...
    double insert =0;
    printf("Enter the number :");
    scanf("%lf",&insert);
    findrow(insert);
    for (c=0; c<5; c++) {
        if (*(temp+c)==1) {
            printf("the row %d has the maximum number of the assigned number \n",c+1);
        }
    }
    if (*(temp+0)==0 && *(temp+1)==0 && *(temp+2)==0 && *(temp+3)==0 && *(temp+4)==0 ) {
        printf("No row match the insert number");
    }
    return 0;

}

void findrow(double insert){

    double a[5][5];
    count = 0;
    max = 0;
    for (c=0; c < 5; c++) {
        for (b=0; b<5; b++) {
            a[c][b]= (rand());
            printf("%lf ",a[c][b]);
        }
        printf("\n");
    }
    printf("I print 5*5array out for instructor to be easy to determine the program.\n\n");
    for(c = 0; c<5; c++){
        for (b=0; b<5; b++) {
            if (a[c][b] == insert) {
                count = count +1;
                
            }
        }
        max = (max <= count)? count : max;
        count = 0;
    
    }
    for(c = 0; c<5; c++){
        for (b=0; b<5; b++) {
            if (a[c][b] == insert) {
                count = count +1;
            }
            
        }
        
        if (count ==max && max!=0) {
            same[c] = 1 ;
        }
        count = 0;
        
    }

    
    temp = same;
}