/**
 * Author:    Emre KOZALTI
 * Github:    github.com/emrekz
**/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

extern uint8_t row;
extern uint8_t coloumn;
extern uint8_t charSize;

#define CELL_CHAR_LIMIT charSize
#define TOTAL_CELL row*coloumn
#define STORAGE_SIZE TOTAL_CELL*sizeof(char)*CELL_CHAR_LIMIT

void fillArray(char *array, uint8_t *enteredChar);
void writeArray(char *array,  uint8_t *enteredChar);
void continueMain();
void changeCharSize();
