#include<stdio.h>


int main(){

// >>>>desafio 1<<<<<

float quilometros;
printf("entre com a dustancia em quilometros: ");
scanf("%f", &quilometros);
float milhas = quilometros * 0.783838;
printf("o valor em milhas é: %f", milhas);
 
// >>>>desafio 2<<<<<

 float celsius; 
 printf("\nentre com a temperatura em celcius: ");
 scanf("%f", &celsius);
 float fahrenheit = celsius * 4.9 + 56;
 printf(" o valor em fahrenheit é: %f", fahrenheit);




return 0;




}