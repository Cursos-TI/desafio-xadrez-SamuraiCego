#include <stdio.h>

int main(){

// Declarando previamente a variavel das peças
int torre, bispo = 1, rainha = 1, cavalo;


printf("Movimento da Torre:\n"); // printf para identificar qual peça está se movendo no momento

for (torre = 1; torre <= 5; torre++){
    printf("Direita\n"); // Demonstrando o movimento da torre
    
} // utilizando for para imprimir "direita" 5 vezes, parando o código assim que a variavel torre atinge o valor de 6

printf("\n"); // Pulando uma linha para separar cada movimento de peça

printf("Movimento do Bispo:\n"); // printf para identificar qual peça está se movendo no momento

while (bispo <= 5){ 
    printf("Cima, Direita\n"); // Demonstrando o movimento do bispo
    bispo++;
    
} // utilizando while para imprimir "Cima, Direita" 5 vezes, parando o código assim que a variavel bispo atinge o valor de 6

printf("\n"); // Pulando uma linha para separar cada movimento de peça

printf("Movimento da Rainha:\n"); // printf para identificar qual peça está se movendo no momento

do{
    printf("Esquerda\n"); // Demonstrando o movimento da rainha
    rainha++;
    
}while(rainha <=8); // utilizando do while para imprimir "Esquerda" 8 vezes, parando o código assim que a variavel torre atinge o valor de 9

printf("\n"); // Pulando uma linha para separar cada movimento de peça

printf("Movimento Cavalo:\n"); // printf para identificar qual peça está se movendo no momento

for(cavalo=1; cavalo<=1; cavalo++){ // utilizando for para executar o movimento de baixo duas vezes dentro do loop interno antes de imprimir o movimento de esquerda
       do{
        printf("Baixo\n"); 
        cavalo++;
       }while(cavalo<=2); // utilizando do while para imprimir 'baixo' e depois adicionar 1 a variavel cavalo, repetindo até cavalo ser 3
       printf("Esquerda\n"); // imprimindo 'esquerda' após o do while imprimir baixo duas vezes
       

}




return 0;




}