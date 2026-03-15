#include <stdio.h> 

  

int main(){ 

     

    int numero; 

     

    printf("Escolha um número: "); 

    scanf("%d", &numero); 

     

    if (numero % 3 == 0){ 

        printf("%d é múltiplo de 3\n", numero); 

    } 

    else{ 

        printf("%d não é múltiplo de 3\n", numero); 

    } 

     

    return 0; 

} 