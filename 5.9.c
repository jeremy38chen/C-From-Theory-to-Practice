//
//  main.c
//  5.9
//
//  Created by Jeremy on 10/18/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

/*  1.User insert three integers,put those number into array
    2.print the question that what the user want
    3.insert 1 ,if you want to check whether the three number are different
    4.insert 2 ,if you want to check whether any two of those number are equal
    5.insert 3, if you want to check how many numbers fall in the interval [-5,5]
    6.use switch case to direct the statement user want
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int insertNumber[3];
    int insertChoice = 0;
    int count = 0;
    for (int i =0; i<3; i++) {
        printf("insert the %d of 3 number:",i+1);
        scanf("%d",&insertNumber[i]);
        
    }
    
    printf("Make a choice to indicate what you want\n");
    printf("insert 1 ,if you want to check whether the three number are different\n");
    printf("insert 2 ,if you want to check whether any two of those number are equal\n");
    printf("insert 3, if you want to check how many numbers fall in the interval [-5,5]\n");
    
    scanf("%d",&insertChoice);
    
    switch (insertChoice) {
        case 1:
            if ((insertNumber[0]-insertNumber[1])!=0) {
                printf("the First number and the Second number are different\n");
            }
            if ((insertNumber[1]-insertNumber[2])!=0) {
                printf("the Second number and the Third number are different\n");
            }
            if ((insertNumber[0]-insertNumber[2])!=0) {
                printf("the First number and the Third number are different\n");
            }
            if ((insertNumber[0]-insertNumber[1])==0 && (insertNumber[1]-insertNumber[2])==0 && (insertNumber[0]-insertNumber[2])==0) {
                printf("None of those number are different");
            }
            break;
            
        case 2:
            if ((insertNumber[0]-insertNumber[1])==0) {
                printf("the First number and the Second number are the same\n");
            }
            if ((insertNumber[1]-insertNumber[2])==0) {
                printf("the Second number and the Third number are the same\n");
            }
            if ((insertNumber[0]-insertNumber[2])==0) {
                printf("the First number and the Third number are the same\n");
            }
            if ((insertNumber[0]-insertNumber[1])!=0 && (insertNumber[1]-insertNumber[2])!=0 && (insertNumber[0]-insertNumber[2])!=0) {
                printf("None of those number are same");
            }
            break;
        
        case 3:
            
            for (int i = 0; i<3; i++) {
                
                count = (5 >= insertNumber[i] && insertNumber[i] >= -5)?count+1:count;
                
            }
            printf("there are %d number fall in interval[-5,5]",count);
            break;
            
        default:
            printf("error");
            ;
            
            
    }
    
    
}
