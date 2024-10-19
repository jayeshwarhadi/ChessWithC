#include <stdio.h>
#include "screen.h"

void infoDisplay(int row,char * White,char * Black){
    switch (row)
    {
    case 1:
        printf("\t<= black %s",Black);
        break;
    case 4:
        printf("\tChess With C || Pre-Release 0.00.001");
        break;
    case 5:
        printf("\tGITHUB : github.com/jayeshwarhadi/ChessWithC");
        break;
    case 8:
        printf("\t<= WHITE %s",White);
        break;
    }
}

void boardDisplay(char board[10][10],char * White,char * Black){
    for(int i = 0; i < 10; i ++){
        for(int j = 0; j < 10; j++){
            printf("%c  ",board[i][j]);           
        }
        infoDisplay(i,White,Black);
        printf("\n");
    }
}