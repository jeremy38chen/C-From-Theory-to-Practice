//
//  main.c
//  6.14
//
//  Created by Jeremy on 10/21/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//
/*  1.set the value of user-inserted number to insertM and insertN (M*N)
    2.print to tell user to insert the row and column of the grid
    3.write a function that print the characters on the horizon line
    4.write a function that print the characters on the vertical line
    5.Then use a for loop that runs insertM times to run the two function
 */
#include <stdio.h>
void gridHorizon1(int a);
void gridHorizon2(int a);

int main(int argc, const char * argv[]) {
    // insert code here...
    int insertM =0;
    int insertN =0;
    printf("insert the number of row of the grid:");
    scanf("%d",&insertM);
    printf("insert the number of column of the grid:");
    scanf("%d",&insertN);
    for (int i =0; i< insertM; i++) {
        
        gridHorizon1(insertN);
        gridHorizon2(insertN);
    }
    gridHorizon1(insertN);
    
    return 0;
}

void gridHorizon1(a){

    for (int i = 0; i<a; i++) {
        printf("+--");
    }
    printf("+");
    printf("\n");

}

void gridHorizon2(a){
    
    for (int i = 0; i<a; i++) {
        printf("|  ");
    }
    printf("| ");
    printf("\n");
    
}