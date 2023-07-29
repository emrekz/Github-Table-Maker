#include "header.h"

void fillArray(char *array, uint8_t *enteredChar) {
  printf("\n");
  for(uint8_t i=0;i<row;i++){
    for(uint8_t n=0;n<coloumn;n++){
      printf("Row[%d] Coloumn[%d] = ", i,n);
      scanf(" %[^\n]%n", (array + (i*coloumn+n)*CELL_CHAR_LIMIT), (enteredChar+(i*coloumn+n)));
      if(*(enteredChar+(i*coloumn+n))-1 > CELL_CHAR_LIMIT) {
        printf("\nCHAR LIMIT EXCESSED!\nPlease enter max. %d characters in each cell.\n\n", CELL_CHAR_LIMIT);
        n--;
      }
    }
  }
}