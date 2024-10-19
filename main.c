#include <stdio.h>
#include <conio.h> //for executables retaining output screen when program is running (temporary)
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

/*
char * Player(int index,char * p1,char * p2){
    switch(index){
        case 0:
            return p1;
        case 1:
            return p2;
    }
}
*/

void turnsPlayer(int turnCounter,char board[10][10],char * White, char * Black){
    char checkmate = isCheckmate(); // function in logic.c
    char check = isCheck(); // function in logic.c
    if(checkmate == 'Y'){

    }else if(check == 'Y'){

    }else{
        boardDisplay(board,White,Black);
        exit(0);
    }
    switch (turnCounter)
    {
    case 0:
        turnsPlayer(1,board,White,Black);
    case 1:
        turnsPlayer(0,board,White,Black);
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
    char p1[10],p2[10];
    printf("Enter Player 1 Name : ");
    scanf("%s",&p1);
    printf("Enter Player 2 Name : ");
    scanf("%s",&p2);
    char *Black , *White;
    int toss = sideDecider();
    switch (toss)
    {
    case 0:
        White = p1;
        Black = p2;
        break;
    case 1:
        White = p2;
        Black = p1;
        break;
    }
    printf("%s Plays WHITE and %s Plays black\nBest of Luck!\n",White,Black);
    turnsPlayer(toss,board,White,Black);
    getch(); //for executables retaining output screen (temporary)
    return 0;
}