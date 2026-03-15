#include <stdio.h> 

 

int main(){ 

     

    int numero; 

    int centena; 

     

    printf("Escolha o número: "); 

    scanf("%d",&numero); 

     

    if (numero <= 99 | numero > 999){ 

        printf("Número invalido"); 

    } 

     

    centena = numero / 100; 

     

    if (centena % 2 == 0){ 

        printf("%d é um número par\n",centena); 

    } 

    else{ 

        printf("%d é um número impar\n",centena); 

    } 

     

    return 0; 

} 