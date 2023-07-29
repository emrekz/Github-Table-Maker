#include "header.h"

uint8_t row;
uint8_t coloumn;
uint8_t charSize = 5;

int main() {
  printf("\nWELLCOME TO GITHUB TABLE MAKER ! \n\nPlease enter row and coloumn size of your table.\nInfo : Maximum character size in a cell is %d\n\n",CELL_CHAR_LIMIT);
  changeCharSize();
  return 0;
}

void continueMain() {
  printf("Enter row size : ");
  scanf("%d", &row);
  printf("Enter coloumn size : ");
  scanf("%d", &coloumn);
  char *array = (char *) malloc(STORAGE_SIZE);
  uint8_t *enteredChar = (uint8_t *) malloc(TOTAL_CELL);
  fillArray(array, enteredChar);
  writeArray(array, enteredChar);
  free(array);
  free(enteredChar);
}

void changeCharSize() {
  printf("Do you want to change maximum character size in a cell? [Y][N] : ");
  uint8_t changeCharSize;
  scanf("%s", &changeCharSize);
  if(toupper(changeCharSize) == 'Y') {
    printf("Please enter character limit on each cell : ");
    scanf("%d", &charSize);
    continueMain();
  }
  else if(toupper(changeCharSize) == 'N') {
    continueMain();
  }
}