#include <stdio.h>

int main(){

    char carros[5][30] = {
        "Civic",
        "Corolla",
        "Skyline",
        "Trueno",
        "HB20"
    };

    float preco[5] = {150, 140, 90, 80, 100};

    int alugado[5] = {0,0,0,0,0};

    int opcao;

    while (opcao != 3){

        printf("\n--- LOCADORA FUJIWARA SHOP ---\n");
        printf("1 - Carros Disponíveis\n");
        printf("2 - Devolver Carro Alugado\n");
        printf("3 - Sair\n");
        printf("Escolha Uma Opção: ");
        scanf("%d", &opcao);

        if(opcao == 1){

            printf("\nCarros Disponíveis Para Aluguel:\n");

            for (int i = 0; i < 5; i++){
                if (alugado[i] == 0){
                    printf("%d - %s (R$ %.2f/dia)\n",i,carros[i],preco[i]);
                }
                
            }

            int escolha;
            printf("Escolha o carro que quer alugar: ");
            scanf("%d",&escolha);

            if(alugado[escolha] == 0){
                alugado[escolha] = 1;
                printf("Você alugou o %s\n",carros[escolha]);
            }else{
                printf("Carro Indisponível\n");
            }
            
        }
        if (opcao == 2){

            printf("Carros Alugados: \n");

            for (int i = 0; i < 5; i++){
                if (alugado[i] == 1){
                    printf("%d - %s\n",i,carros[i]);
                }
                
            }
            
            int escolha;
            printf("Escolha o carro que deseja devolver: ");
            scanf("%d",&escolha);

            if(alugado[escolha] == 1){

                int dias;
                printf("Quantos Dias Ficou Com o Carro?: ");
                scanf("%d",&dias);

                float total = preco[escolha] * dias;

                printf("O Valor Total é de: %.2f\n",total);
                alugado[escolha] = 0;


            }else{
                printf("Esse Carro Não Está Alugado.");
            }
        }
        

    }
    printf("Encerrando o Sistema...");
    return 0;
    


}