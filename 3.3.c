//
//  main.c
//  3.3
//
//  Created by Jeremy on 10/11/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>
#define successRate(x,y) (x*100/(x+y))
#define failRate(x,y) (x*100/(x+y))

int main() {
    // insert code here...
    int StudentPass = 0;
    float StudentPassRate = 0;
    int StudentFail = 0;
    float StudentFailRate = 0;
    
        printf("insert the number of student who passed the exam:");
            scanf("%d",&StudentPass);
    
        printf("insert the number of student who failed the exam:");
            scanf("%d",&StudentFail);
    
    
    StudentPassRate = successRate(StudentPass, StudentFail);
    StudentFailRate = failRate(StudentFail, StudentPass);
    
    printf("the RATE of student who passed the exam is : %.f\n",StudentPassRate);
    printf("the RATE of student who failed the exam is : %.f",StudentFailRate);
    
}
