//
//  main.c
//  homework_4
//
//  Created by Jeremy on 9/24/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>

int main() {
    // insert code here...
    float a = 7.2,b = 5.4;
    int c = a/b;
    printf("integer part of their division=%d\nfractional part of their division=%f",c,a-(c)*b);
    return 0;
}
