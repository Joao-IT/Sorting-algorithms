/*
    Aluno: João Carlos Gonçalves
    Matrícula: 201705991
    Matéria: ED2
    Data: 05/10/2019
*/


#include <stdio.h>
#include <stdlib.h>


/*
    Selection Sort é um algoritmo onde dado um vetor os elementos são comparados até que esteja ordenado, sempre colocando o maior elemento no final
    e reduzindo o tamanho do vetor.

    
    Ex. V[] = {5,4,3,2,1};

    [5,4,3,2,1]

    [1,4,3,2,5]

    agora o valor 5 já está na maior posição, diminuimos o tamanho do vetor

    [1,4,3,2]   [5]

    buscamos novamente o maior elemento do vetor

    [1,2,3,4]   [5]

    agora o valor 5 já está na maior posição, diminuimos o tamanho do vetor
    
    [1,2,3]     [4, 5]

    repetimos os passos buscando o maior valor
    
    [1,2]       [3,4,5]

    [1]         [2,3,4,5]
    
    []          [1,2,3,4,5]

    Algoritmo simples, porém com alto custo computacional.

*/




void selectionSort(int A[], int n){

    int menor;

    for(int i = 0; i < n-1; i++){

        menor = i;

        for(int j = i+1; j <= n; j++){
            if(A[ j ] < A[ menor ]){

                menor = j;
            }
        }

        //Função para troca dos valores
        int temp;
        temp = A[menor];
        A[menor] = A[i];
        A[i] = temp;

    }
}






int main()
{

    printf("\n\n\tSELECTION SORT\n\n");

    int vetor[] = {2,5,1,4,3};

    printf("\nVetor Desordenado\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }

    selectionSort(vetor, 4);

    printf("\nVetor Ordenado\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }


}