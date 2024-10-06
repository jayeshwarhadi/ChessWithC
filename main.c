#include <stdio.h>
#include "logic.h"
#include "screen.h"
#include <stdlib.h>
#include <time.h>

/*
    compiler statement = gcc main.c logic.c screen.c -o app
*/

int sideDecider(){
    srand(time(NULL));  // seed for random function
    return rand()%2;
}

void turnsPlayer(char player[]){
    char checkmate = isCheckmate(); // function in logic.c
    if(checkmate == "Y"){

    }else{

    }
}

int main(){
    // Initial Board Placement
    char board[10][10] = {
        "XabcdefghX",
        "8rnbqkbnr8",
        "7pppppppp7",
        "6--------6",
        "5--------5",
        "4--------4",
        "3--------3",
        "2PPPPPPPP2",
        "1RNBQKBNR1",
        "XABCDEFGHX"
    };
    // Players Initialization
    char p1[10];
    char p2[10];
    printf("Enter Player 1 Name : ");
    scanf("%s",&p1);
    printf("Enter Player 2 Name : ");
    scanf("%s",&p2);
    // White-Black Position Picker
    if(sideDecider() == 0){
        turnsPlayer(p1); // First move Advantage P1
    }else{
        turnsPlayer(p2); // First move Advantage P2
    }
    return 0;
}