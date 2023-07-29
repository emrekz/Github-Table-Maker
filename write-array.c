#include "header.h"

void writeArray(char *array,  uint8_t *enteredChar) {
  uint8_t currentCell = 0;
  printf("\nWHOAAA! There it is!\nCopy on below code and paste in to your README.md file.\n");
  for(int16_t i=0;i<=STORAGE_SIZE-CELL_CHAR_LIMIT;i+=CELL_CHAR_LIMIT){
    if(currentCell%coloumn == 0){
      if(currentCell/coloumn == 1){
        printf("\n|");
        for(uint8_t k=0;k<coloumn;k++){
          printf(" - |");
        }
      }
      printf("\n| ");
    }
    for(uint64_t n=i;n<i+*(enteredChar+currentCell)-1;n++){
      printf("%c", *(array+n));
    }
    currentCell++;
    printf(" | ");
  }
  uint8_t douwant = 'N';
  printf("\n\n\nDo you want to continue? [Y][N] : ");
  scanf("%s", &douwant);
  toupper(douwant)=='Y' ? continueMain() : 0;
}