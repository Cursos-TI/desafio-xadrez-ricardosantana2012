#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void FuncaoRainha(int n){
    printf("Rainha move:\n");
    for (int i = 1; i <= n; i++)
    {
        printf("Esquerda\n");
    }
}

void FuncaoTorre(int n){
    printf("Torre move:\n");
    for (int i = 1; i <= n; i++)
    {
        printf("Direita\n");
    }
}
void FuncaoBispo(int n){
    printf("Bispo move:\n");
    char espaco[10]=" ";
    for(int i =1; i<=n;i++){                 
        if (i<=n)
        {
           printf("Cima, ");
        }
        printf("direita");
        printf("\n");       
        }
}    


    int main(){
        
        int bispo = 5 ,torre = 5 ,rainha=8 , j=1;
        int cavalo1= 1,cavalo2= 2;
        
    printf("#### JOGO DE XADREZ###\n\n");


        //Mostra como o cavalo vai andar no tabuleiro sem dizer a direção.
        printf("Cavalo move:\n");
        for(int i=0; i<=cavalo1;i++){
            printf("C");
        }
        printf("\n");
        for(int i = 1; i<=cavalo2 ; i++){
            printf("C\n")
;       }
       
        FuncaoBispo(bispo);    

        FuncaoTorre(torre);
        
        FuncaoRainha(rainha);
    }
