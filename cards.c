#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char card_nme[3];
    int count = 0;
    while(card_nme[0] != 'X'){
    puts("Enter the card_name: ");
    scanf("%2s", card_nme);
    int val = 0;
    switch(card_nme[0]){
    case 'K':
    case 'Q':
    case 'J':
     val = 10;
     break;
    case 'A':
     val = 11;
     break;
    case 'X':
     continue;
    default:
     val = atoi(card_nme);
     if ((val < 1) || (val > 10)){
       puts ("Invalid values");
       continue;
    }
  }
    if ((val >= 3) && (val <= 6)){
       puts("Count has gone up");
     } else if (val == 10){
       puts("Count has gone down");
     }
  }
   return 0;
}
 
