#include <stdio.h>
#include "screen.h"

void infoDisplay(int row){
    if(row == 1){
        printf("\t<= black");
    }if(row == 8){
        printf("\t<= WHITE");
    }
}

void boardDisplay(char board[10][10]){
    for(int i = 0; i < 10; i ++){
        for(int j = 0; j < 10; j++){
            printf("%c  ",board[i][j]);           
        }
        infoDisplay(i); 
        printf("\n");
    }
}