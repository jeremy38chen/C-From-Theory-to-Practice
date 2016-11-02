//
//  main.c
//  6.13
//
//  Created by Jeremy on 10/21/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//
/*  1.write a function that print a(a value that user insert) times.
    2.use a for loop (1~5) include function,for loop (3~1) include function.
*/

#include <stdio.h>
void showStar(int a);

int main(int argc, const char * argv[]) {
    // insert code here...
    for (int i=1; i<5; i++) {
        showStar(i);
    }
    for (int i=3; i>0; i--) {
        showStar(i);
    }
    
}

void showStar(a){
    for (int i = 0; i<a; i++) {
        printf("* ");
    }
    printf("\n");

}