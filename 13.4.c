//
//  main.c
//  13.4
//
//  Created by Jeremy on 12/27/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>


struct printbit{

    unsigned int clean :1;
    unsigned int lowink :2;
    unsigned int errorcode :4;
    unsigned int pagejam :1;
    unsigned int pagenumber :8  ;
    

};
int *converttobinary(int);


int main() {
    
    int i;
    struct printbit printbit_1;
    
    printbit_1.pagenumber = 0;
    printbit_1.clean= 0;
    printbit_1.lowink= 0;
    printbit_1.errorcode= 0;
    printbit_1.pagejam= 0;
    
    for (i=0; i<20; i++) {
        printbit_1.pagenumber = printbit_1.pagenumber+1;
        
        if (i>7) {
            printbit_1.lowink =3;
        };
        if (i==12) {
            printbit_1.errorcode =10;
        };
        if (i==14) {
            printbit_1.pagejam =1;
        };
        if (i==19) {
            printbit_1.clean =1;
        };
        
        
        
        
        printf("The %d print\n",i+1);
        printf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d\n",*converttobinary(printbit_1.clean),*(converttobinary(printbit_1.lowink)+1),*(converttobinary(printbit_1.lowink)),*(converttobinary(printbit_1.errorcode)+3),*(converttobinary(printbit_1.errorcode)+2),*(converttobinary(printbit_1.errorcode)+1),*(converttobinary(printbit_1.errorcode)),*(converttobinary(printbit_1.pagejam)),*(converttobinary(printbit_1.pagenumber)+7),*(converttobinary(printbit_1.pagenumber)+6),*(converttobinary(printbit_1.pagenumber)+5),*(converttobinary(printbit_1.pagenumber)+4),*(converttobinary(printbit_1.pagenumber)+3),*(converttobinary(printbit_1.pagenumber)+2),*(converttobinary(printbit_1.pagenumber)+1),*(converttobinary(printbit_1.pagenumber)));
        
        
        
        
        
    }
    
    
    
    
    
    
    return 0;
}

int *converttobinary(int k){

    static int a[8];
    int i=0;
    
    do{
        
        a[i]=k%2;
        k = k/2;
        i++;
        if (k/2==0) {
            a[i]=k;
            a[i+1]=0;
            a[i+2]=0;
        }
    }while(k/2!=0);

    return a;
};