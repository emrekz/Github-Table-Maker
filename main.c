#include "header.h"

uint8_t row;
uint8_t column;
uint32_t charSize = 20;

int main() {
  printf("\e[1;35m\nWELLCOME TO GITHUB TABLE MAKER !");
  printf("\e[0m\n\nPlease enter row and column size of your table.\nInfo : Default character size in a cell is %d\nRecommendation : Don't make size so big for system health\n\n",CELL_CHAR_LIMIT);
  changeCharSize();
  return 0;
}

void continueMain() {
  printf("Enter row size : ");
  scanf("%d", &row); 
  printf("Enter column size : ");
  scanf("%d", &column);
  char *array = (char *) malloc(STORAGE_SIZE);
  uint8_t *enteredChar = (uint8_t *) malloc(TOTAL_CELL);
  fillArray(array, enteredChar);
  writeArray(array, enteredChar);
  free(array);
  free(enteredChar);
}

void changeCharSize() {
  printf("\e[33mDo you want to change maximum character size in a cell? [Y][N] : \e[0m");
  uint8_t changeCharSize;
  scanf("%s", &changeCharSize);
  if(toupper(changeCharSize) == 'Y') {
    printf("Please enter character limit on each cell : ");
    scanf("%d", &charSize);
    if(charSize>1000){
      printf("\e[33m\nAre you sure for make it bigger than 1000?\n\e[0m");
      printf("Please enter again character limit on each cell : ");
      scanf("%d", &charSize);
    }
    continueMain();
  }
  else if(toupper(changeCharSize) == 'N') {
    continueMain();
  }
}