#include <stdio.h>
#include "screen.h"

char boardDisplay(char board[10][10]){
    for(int i = 0; i < 10; i ++){
        for(int j = 0; j < 10; j++){
            printf("%c ",board[i][j]);
        }
    }
}