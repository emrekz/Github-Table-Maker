#include "header.h"

uint8_t row;
uint8_t coloumn;
uint8_t charSize = 5;

int main() {
  printf("\nWELLCOME TO GITHUB TABLE MAKERR ! \n\nPlease enter row and coloumn size of your table.\nInfo : Default character size in a cell is %d\nRecommendation : Don't make size bigger than 63 for 64-bit PCs\n\n",CELL_CHAR_LIMIT);
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
    while(charSize>63){
      printf("\nDon't make bigger than 63 !\n");
      printf("Please enter character limit on each cell : ");
      scanf("%d", &charSize);
    }
    continueMain();
  }
  else if(toupper(changeCharSize) == 'N') {
    continueMain();
  }
}