//
//  main.c
//  13.6
//
//  Created by Jeremy on 12/27/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct student{

    char name[50];
    int code;
    int grade;


};

int main() {
    // insert code here...
    int i,a,b,j,temp_grade,temp_code;
    char temp_name[50];
    struct student student_system[100];
    for (i = 0; i<100; i++) {
        printf("Enter the name of the student:\n");
        scanf("%s",student_system[i].name);
        
        printf("Enter the code of the student:\n");
        scanf("%d",&student_system[i].code);
        
        printf("Enter the grade of the student:\n");
        scanf("%d",&student_system[i].grade);
        
        for (a=0; a<i; a++) {
            for (j=0; j<(i)-a; j++) {
                if(student_system[j].grade > student_system[j+1].grade){
                    temp_grade =student_system[j].grade;
                    student_system[j].grade = student_system[j+1].grade;
                    student_system[j+1].grade = temp_grade;
                    
                    strcpy(temp_name,student_system[j].name);
                    strcpy(student_system[j].name,student_system[j+1].name);
                    strcpy(student_system[j+1].name , temp_name);
                    
                    temp_code =student_system[j].code;
                    student_system[j].code = student_system[j+1].code;
                    student_system[j+1].code = temp_code;
                    
                    
                }
            }
        }
        
        for (b=0; b<i+1; b++) {
            printf("Name:%s\n",student_system[b].name);
            printf("Code:%d\n",student_system[b].code);
            printf("Grade:%d\n",student_system[b].grade);
        }
        
    }
    
    
    
    return 0;
}
