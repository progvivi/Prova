#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void main(){
char string[10];
int c;
printf("digite a string:");
scanf("%s", &string);
c = strlen(string);
printf("numero de letras da string: %d\n",c);
}