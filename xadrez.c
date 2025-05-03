#include <stdio.h>
// Criando um Void para cada peça
void torreR(int movimentoT){
    if (movimentoT > 0){
        printf("Direita\n");
        torreR(movimentoT - 1);
    }
}
void bispoR(int movimentoB){
    if (movimentoB > 0){
        printf("Cima, Direita\n");
        bispoR(movimentoB - 1);
    }
}
void rainhaR(int movimentoR){
    if (movimentoR > 0){
        printf("Esquerda\n");
        rainhaR(movimentoR - 1);
    }
}

int main(){

printf("Movimento da Torre:\n"); // Printf para identificar a peça que está se mexendo
torreR(5); // iniciando torreR com o valor de 5
printf("\n"); // Printf para pular a linha no console

printf("Movimento do Bispo com Recursividade:\n"); // Printf para identificar a peça que está se mexendo
bispoR(5); // iniciando bispoR com o valor de 5
printf("\n"); // Printf para pular a linha no console

printf("Movimento do Bispo com Loops aninhados:\n"); // Printf para identificar a peça que está se mexendo
/* Utilizando o loop externo para imprimir "Cima," e acrescentar a variavel bispoCima até que ela se torne 6, e utilizando o loop interno para imprimir "Direita" enquanto 
a variavel bispoLado tem o valor igual a variavel bispoCima e acrescentando a ela, fazendo  com que elas não tenham mais o valor igual e então parando o loop interno*/
for(int bispoCima = 1; bispoCima <= 5; bispoCima++){ 
    printf("Cima, ");
    for (int bispoLado = bispoCima; bispoLado == bispoCima; bispoLado++){
        printf("Direita\n");
    }
}
printf("\n"); // Printf para pular a linha no console

printf("Movimento da Rainha\n"); // Printf para identificar a peça que está se mexendo
rainhaR(8); // iniciando rainhaR com o valor de 8
printf("\n"); // Printf para pular a linha no console

printf("Movimento do Cavalo\n");
/*utilizando o for com as variaveis cavaloCima e cavaloLado, enquanto cavaloLado for igual a 1 o loop externo imprimirá "Cima" e acrescentará em cavaloCima, o for interno 
apenas executará quando cavaloCima tiver o valor de 2 e cavaloLado tiver o valor de 1 e quando for executado imprimirá "Direita" e acrescentará em cavaloLado fazendo com que 
ambos os loops parem de executar
*/
for(int cavaloCima=1, cavaloLado=1; cavaloLado == 1; cavaloCima++){ 
    printf("Cima\n");
    
    for(cavaloLado; cavaloCima == 2 && cavaloLado == 1; cavaloLado++){
        printf("Direita\n");
    }
    
}

return 0;




}