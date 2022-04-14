#include <stdio.h>

int main(void){
  printf("^===^^===\n");
  printf("Welcom to the Decimal to Hexadecimal Converter!\n");
  printf("Enter a number:\n");

  int theNumber; //declares an integer
  scanf("%d",&theNumber); //Use & to point to theNumber

  printf("The number you entered was %d \n",theNumber);
  printf("The number in hexadecimal: %X \n", theNumber);

  printf("Thank you!\n");
  printf("^===^^===");

    
  return 0;
}