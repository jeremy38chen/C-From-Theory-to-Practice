//
//  main.c
//  13.13
//
//  Created by Jeremy on 12/27/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>

union selected_type{

    char u_char;
    int u_int;
    float u_float;
    double u_double;
    


};

struct var_type{

    
    int type;
    union selected_type st;



};


int main() {
    // insert code here...
    struct var_type var_type;
    printf("Enter a type 1: char, 2: int, 3: float, 4: double:");
    scanf("%d",&var_type.type);
    switch (var_type.type) {
        case 1:
            while(getchar() != '\n');
            printf("Enter a char:");
            scanf("%c",&var_type.st.u_char);
            printf("%c",var_type.st.u_char);
            break;
        case 2:
            printf("Enter a int:");
            scanf("%d",&var_type.st.u_int);
            printf("%d",var_type.st.u_int);
            break;
        case 3:
            printf("Enter a float:");
            scanf("%f",&var_type.st.u_float);
            printf("%f",var_type.st.u_float);
            break;
        case 4:
            printf("Enter a double:");
            scanf("%lf",&var_type.st.u_double);
            printf("%f",var_type.st.u_double);
            break;
            
        
    }
    return 0;
}
