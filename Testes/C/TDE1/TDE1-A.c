#include <stdio.h> 

int main() { 

int numero; 
 
printf("Escolha um número de 1 à 7: "); 
scanf("%d",&numero); 
 
if (numero == 1) { 
   printf("Segunda-Feira"); 
} 
else if (numero == 2) { 
   printf("Terça-Feira"); 
} 
else if (numero == 3) { 
   printf("Quarta-Feira"); 
} 
else if (numero == 4) { 
   printf("Quinta-Feira"); 
}     
else if (numero == 5) { 
   printf("Sexta-Feira"); 
} 
else if (numero == 6) { 
   printf("Sábado"); 
} 
else if (numero == 7) { 
   printf("Domingo"); 
} 
else { 
   printf("Número Invalido"); 
} 
return 0; 
 

} 