//
//  main.c
//  4.3
//
//  Created by Jeremy on 10/16/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//



/*  1,user insert the scores which the three student get and restrict the insert valid scores to be <=10  2,print pass ,if the score is >=6,otherwise print fail.
 */

#include <stdio.h>

int main() {
    
    int score[3];
    int count = 0;
    
    for (int i = 0; i<3; i++) {
        printf("insert score to indicate student pass or fail in test:");
        scanf("%d",&score[i]);
        while (score[i]>10 || score[i]<0) {
            printf("error,the score must less than 10,insert again:");
            scanf("%d",&score[i]);
        }
        
        if (score[i]>=6) {
            printf("the student pass the exam\n");
            count++;
        }
        else{
            printf("the student fail the exam\n");
         
        }
        
    }
    
    printf("the number of student pass the exam:%d",count);
    return 0;
    
}
