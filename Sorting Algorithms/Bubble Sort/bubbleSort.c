/*
    Aluno: João Carlos Gonçalves
    Matrícula: 201705991
    Matéria: ED2
    Data: 05/10/2019
*/


#include <stdio.h>
#include <stdlib.h>


/*
    Bubble Sort é um algoritmo de ordenação onde, dado um vetor os elementos são comparados 2 a dois buscando levar sempre o maior elemento para o
    final, e reduzindo o tamanho do vetor do fim para o inicio.     Utilizando o fim--;

    Ex. V[] = {5,4,3,2,1};

    [5,4,3,2,1] -> [4,5,3,2,1] -> [4,3,5,2,1] -> [4,3,2,5,1] -> [4,3,2,1,5]   = [5]  
    
    * O maior valor está no final, agora o fim decrementa 1. Antes eram 5 elemtos, agora serão 4
    

    [4,3,2,1]   -> [3,4,2,1]   -> [3,2,4,1]   -> [3,2,1,4]                    = [4,5]             
    
    * O maior valor está no final, agora o fim decrementa 1. Antes eram 4 elemtos, agora serão 3
    

    [3,2,1]     -> [2,3,1]     -> [2,1,3]                                     = [3,4,5]                                      
    
    * O maior valor está no final, agora o fim decrementa 1. Antes eram 3 elemtos, agora serão 2
    

    [2,1]       -> [1,2]                                                      = [2,3,4,5]                               
    
    * O maior valor está no final, agora o fim decrementa 1. Antes eram 2 elemtos, agora serão 1
    
    [1]         -> [1]                                                        = [1,2,3,4,5]

    * O maior valor está no final, agora o fim decrementa 1. Antes eram 1 elemtos, agora serão 0

    
    Com 0 saímos do laço de repetição e desta forma o vetor ficará completamente ordenado.

    [1,2,3,4,5]
    

    Não é um algoritmo recomendado para grandes conjuntos de dados.

*/




void bubbleSort(int A[], int n){

    int temp;

    for(int k = 0; k < n-1; k++){

        for(int i = 0; i <= n-k-1; i++){
            
            if(A[ i ] > A [i + 1]){
            
            temp = A[ i ];
            A[ i ] = A[ i + 1];
            A[i + 1] = temp;

            }
        }
    }

}







int main()
{

    printf("\n\n\tBUBBLE SORT\n\n");

    int vetor[] = {2,5,1,4,3};

    printf("\nVetor Desordenado\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }

    bubbleSort(vetor, 4);

    printf("\nVetor Ordenado\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }


}