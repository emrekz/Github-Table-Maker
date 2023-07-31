#include "header.h"

void fillArray(char *array, uint8_t *enteredChar) {
  printf("\n");
  for(uint8_t i=0;i<row;i++){
    for(uint8_t n=0;n<column;n++){
      printf("Row[%d] Column[%d] = ", i,n);
      scanf(" %[^\n]%n", (array + (i*column+n)*CELL_CHAR_LIMIT), (enteredChar+(i*column+n)));
      if(*(enteredChar+(i*column+n))-1 > CELL_CHAR_LIMIT) {
        printf("\e[31m\nCHAR LIMIT EXCESSED!\nPlease enter max. %d characters in each cell.\n\n\e[0m", CELL_CHAR_LIMIT);
        n--;
      }
    }
  }
}