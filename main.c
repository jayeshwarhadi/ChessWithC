#include <stdio.h>
//#include <conio.h> //for executables retaining output screen when program is running (temporary)
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

void turnsPlayer(char player[],char board[10][10]){
    char checkmate = isCheckmate(); // function in logic.c
    char check = isCheck(); // function in logic.c
    if(checkmate == 'Y'){

    }else if(check == 'Y'){

    }else{
        boardDisplay(board);
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
    int toss = sideDecider();
    if(toss == 0){
        turnsPlayer(p1,board); // First move Advantage P1
    }else{
        turnsPlayer(p2,board); // First move Advantage P2
    }
    //getch(); //for executables retaining output screen (temporary)
    return 0;
}