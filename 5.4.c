//
//  main.c
//  5.4
//
//  Created by Jeremy on 10/17/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//
/*  1.insert lab grade and theory grade which the valid score is at 0~10,then put those grade into each assigned array,if inserted score is greater than 10,print error and insert again.
 
    2.In the end,we gona have a numbercial comparsion.If the final score is at range of 8~10,print the sentence of the student is at the range.
*/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int lab_grd[3],theory_grd[3];
    
    for (int i = 1; i<4; i++) {
        
        printf("insert the %d student's score of lab part(valid score range 0~10):",i);
        scanf("%d",&lab_grd[i-1]);
        
        if (lab_grd[i-1]>10) {
            i=i-1;
            printf("error insert the student's score again\n");
            continue;
        }
        printf("insert the %d student's score of theory part(valid score range 0~10):",i);
        scanf("%d",&theory_grd[i-1]);
        if (theory_grd[i-1]>10) {
            i=i-1;
            printf("error insert the student's score again\n");
            continue;
        }
        
    }
    
    for (int i = 1; i<4; i++) {
        
        if (10 >= lab_grd[i-1]*0.3+theory_grd[i-1]*0.7 && lab_grd[i-1]*0.3+theory_grd[i-1]*0.7 >= 8) {
            
            printf("the score of the %d student is at range of 0~10\n",i);
            
        }
        else
            printf("the score of the %d student isn't at range of 0~10\n",i);

    }
    
    
    return 0;
  
}
