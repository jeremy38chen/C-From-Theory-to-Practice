//
//  main.c
//  11.4
//
//  Created by Jeremy on 12/20/15.
//  Copyright (c) 2015 Jeremy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int a,b,pixel[8][8];
void floodfill(int,int,int,int);
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("I choose (1,1) for my location and change the value to 3 \n");
    for (a=0; a<8; a++) {
        for (b=0; b<8; b++) {
            pixel[a][b]=rand()%5;
            printf("%d ",pixel[a][b]);
        }
        printf("\n");
    }
    
    printf("\n");
    floodfill(1, 1, 3, pixel[1][1]);
    
    for (a=0; a<8; a++) {
        for (b=0; b<8; b++) {
            printf("%d ",pixel[a][b]);
        }
        printf("\n");
    }
    
    
}
void floodfill(int x, int y, int new_color, int old_color)
{
    if (x>=0 && x<8 && y>=0 && y<8)
        if (pixel[x][y] == old_color)
        {
           
            pixel[x][y] = new_color;
            
            floodfill(x+1, y, new_color, old_color);
            floodfill(x-1, y, new_color, old_color);
            floodfill(x, y+1, new_color, old_color);
            floodfill(x, y-1, new_color, old_color);
        }
}
