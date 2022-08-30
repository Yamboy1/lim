#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool isWonRow(char player, const char game[3][3], uint8_t rowNum){
    for(size_t i=0; i<3; i++) {
        if (game[rowNum][i] != player){
            return false;
        }
    }
    return true;
}

void main(void)
{
//char game[3][3] = {{'X', 'O', ' '},{'X', 'X', 'X'}, {' ', ' ', ' '}};
//printf(isWonRow('X', game, 1) ? "true\n" : "false\n"); 
const char game[3][3] = {{'X', 'O', ' '},{' ', ' ', ' '}, {'X', 'X', 'O'}};
printf(isWonRow('X', game, 2) ? "true\n" : "false\n"); 
}