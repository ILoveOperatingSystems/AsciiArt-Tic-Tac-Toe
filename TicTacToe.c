#include <stdio.h>
#include <string.h> //memset because of course it's in the string library.
#include <stdlib.h>

//init score and player
char playerState = 'O';
short score[2]; //use number of elements NOT highest expected index when declaring arrys

//create board state
struct boardstate{
    char rowOne[3];
    char rowTwo[3];
    char rowThree[3];
    char HasScoreInced;
} board;
//init board state to defaults
void InitBoard() {
board.HasScoreInced = 0;
memset(board.rowOne, 0 , (sizeof(board.rowOne))); //not a string must blank whole array
memset(board.rowTwo, 0 , (sizeof(board.rowOne)));
memset(board.rowThree, 0 , (sizeof(board.rowOne)));
}

//Instead of func prototype let the preproc just dump the whole kitandkabodle in.
#include "TicTacToeScore.c"
//#include "TicTacToeDraw.c"
//#include "Drawv2alpha.c" // temp
#include "Drawv3alpha"

int main() {

    score[0] = 0;
    score[1] = 0;
    short row;
    short column;
    InitBoard();
    short drawCounter = 0;

    while(!board.HasScoreInced) {

    printf("Current player is %c, please select row: ", playerState);
    //TODO: better input checking
    scanf("%1hi", &row);
    printf("\n select column: \n");
    scanf("%1hi", &column);

switch (row) {
    case 1:
        if(!board.rowOne[(column - 1)]) {
        board.rowOne[(column - 1)] = playerState;
        drawCounter += 1;
        }
        DrawBoard();
        break;
    case 2:
        if(!board.rowTwo[(column - 1)]) {
        board.rowTwo[(column - 1)] = playerState;
        drawCounter += 1;
        }
        DrawBoard();
        break;
    case 3:
        if(!board.rowThree[(column - 1)]) {
        board.rowThree[(column - 1)] = playerState;
        drawCounter += 1;
        }
        DrawBoard();
        break;
    default:
        return 1;
}

    UpdateScore();

    if(playerState == 'O') {
        playerState = 'X';
    } else if (playerState == 'X'){
        playerState = 'O';
    }

    if(drawCounter == 9) {
        printf("Game Draw\n");
        return 0;
    }

    if (board.HasScoreInced) {
        printf("Score. O has %hi X has %hi\n", score[0], score[1]);
    }

    } //while loop end
return 0;
}
