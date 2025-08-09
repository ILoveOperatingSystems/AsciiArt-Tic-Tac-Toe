void UpdateScore() {
    //select index for player's score
    short scoreIndex;
    if (playerState == 'O') {
        scoreIndex = 0;
    } else {
        scoreIndex = 1;
    }
    //check the rows
    if ((board.rowOne[0] == playerState) && (board.rowOne[0] == board.rowOne[1]) && (board.rowOne[0] == board.rowOne[2])) {
        score[scoreIndex] += 1;
        board.HasScoreInced = 1;
    }
    if ((board.rowTwo[0] == playerState) && (board.rowTwo[0] == board.rowTwo[1]) && (board.rowTwo[0] == board.rowTwo[2])) {
    score[scoreIndex] += 1;
    board.HasScoreInced = 1;
    }
    if ((board.rowThree[0] == playerState) && (board.rowThree[0] == board.rowThree[1]) && (board.rowThree[0] == board.rowThree[2])) {
        score[scoreIndex] += 1;
        board.HasScoreInced = 1;
    }
    //check the diags
    if ((board.rowOne[0] == playerState) && (board.rowTwo[1] == playerState) && (board.rowThree[2] == playerState)) {
        score[scoreIndex] += 1;
        board.HasScoreInced = 1;
    }

    if ((board.rowThree[0] == playerState) && (board.rowTwo[1] == playerState) && (board.rowOne[2] == playerState)) {
        score[scoreIndex] += 1;
        board.HasScoreInced = 1;
    }
    //Check the fucking columns.
    if ((board.rowOne[0] == playerState) && (board.rowTwo[0] == playerState) && (board.rowThree[0] == playerState)) {
        score[scoreIndex] += 1;
        board.HasScoreInced = 1;
    }
    if ((board.rowOne[1] == playerState) && (board.rowTwo[1] == playerState) && (board.rowThree[1] == playerState)) {
        score[scoreIndex] += 1;
        board.HasScoreInced = 1;
    }
    if ((board.rowOne[2] == playerState) && (board.rowTwo[2] == playerState) && (board.rowThree[2] == playerState)) {
        score[scoreIndex] += 1;
        board.HasScoreInced = 1;
    }
}
