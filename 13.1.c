//
//  main.c
//  13.1
//
//  Created by Jeremy on 12/27/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>

struct employee {
    
    char firstname[50];
    char lastname[50];
    int age;
    int salary;

};




int main() {
    // insert code here...
    
    struct employee employee[50];
    int i,max_salary=0,salary_count=0,age_count=0,max_age=0;
    
    
    for (i=1;i<51; i++) {
        printf("Enter the firstname of the %d employee:",i);
        scanf("%s",employee[i].firstname);
        
        printf("Enter the lastname of the %d employee:",i);
        scanf("%s",employee[i].lastname);
        
        printf("Enter the age of the %d employee:",i);
        employee[0].age = 0;
        scanf("%d",&employee[i].age);
        max_age = (max_age <= employee[i].age)?employee[i].age:max_age;
        age_count = (max_age <= employee[i].age)?i:age_count;
        
        printf("Enter the salary of the %d employee:",i);
        employee[0].salary = 0;
        scanf("%d",&employee[i].salary);
        max_salary = (max_salary <= employee[i].salary)?employee[i].salary:max_salary;
        salary_count = (max_salary <= employee[i].salary)?i:salary_count;
    }
    
    
    
    
    printf("the employee who has the highest solary is: %s\n",employee[salary_count].lastname);
    printf("the solary is %d\n",employee[salary_count].salary);
    printf("the employee who has the oldest age is %s\n",employee[age_count].lastname);
    printf("the age is %d\n",employee[age_count].age);
    
    
    
    return 0;
}
