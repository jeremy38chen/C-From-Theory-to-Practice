//
//  main.c
//  6.8
//
//  Created by Jeremy on 10/21/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

/*  1.Declare int insertNum for user value,int countN for counting the number of negative number and int countP for counting the number of postive number.
    2.Use a infinite loop for user to insert a number ,if countP ==10 jump out the loop.
    3.print how many number of negative number did u insert.
 */
 
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int insertNum = 0;
    int countN = 0;
    int countP = 0;
    while (1) {
        printf("insert a number:");
        scanf("%d",&insertNum);
        
        countN = (insertNum<0)?countN+1:countN;
        countP = (insertNum>=0)?countP+1:countP;
        
        if (countP == 10) {
            break;
        }
    }
    printf("There are %d negative number",countN);
    return 0;
}
