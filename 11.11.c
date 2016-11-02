//
//  main.c
//  11.11
//
//  Created by Jeremy on 12/20/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    
    int result =0, insert1 = 0,insert2 =0;
    char charcter;
    printf("Enter the arguments with the sign of a math opera- tion, two one-digit numbers(format:%%c %%d %%d):");
    scanf("%c %d %d",&charcter,&insert1,&insert2);
    
    switch (charcter) {
        case 43:
            result = insert1+insert2;
            printf("the ressult is %d\n",result);
            break;
         
        case 45:
            result = insert1-insert2;
            printf("the ressult is %d\n",result);
            break;
            
        case 42:
            result = insert1*insert2;
            printf("the ressult is %d\n",result);
            break;
            
        case 47:
            result = insert1/insert2;
            printf("the ressult is %d\n",result);
            break;
     
        default:
            printf("error");
            break;
    }
    
    
    
    
    
}
