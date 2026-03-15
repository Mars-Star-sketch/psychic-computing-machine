#include <stdio.h> 

int main() { 

int num1; 
int num2; 
 
printf("Escolha o primeiro número: "); 
scanf("%d", &num1); 
printf("Escolha o segundo número: "); 
scanf("%d", &num2); 
 
if (num1 < num2){ 
   printf("O número %d é o maior", num2); 
} 
else if (num2 < num1){ 
   printf("O número %d é o maior", num1); 
} 
 
else if (num1 = num2){ 
   printf("Os números são iguais."); 
 
} 
return 0; 
 

} 