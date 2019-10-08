/*
    Aluno: João Carlos Gonçalves
    Matrícula: 201705991
    Matéria: ED2
    Data: 05/10/2019
*/

#include <stdio.h>
#include <stdlib.h>

/*
    Insertion Sort é um algoritmo onde os elementos são colocados por ordem de chagada e eles já vão sendo organizados.

    Algoritmo simples, porém não não eficiente para grandes volumes de dados.

    Compara todos os elementos
*/






void insertionSort(int A[], int n){

    for(int i = 0; i <= n; i++){
        
        int temp = A[i];
        int j = i;


            while (j > 0 && temp < A[j-1])
            {
                A[j] = A[j-1];
                j = j-1;
                
            }
        A[j] = temp;
        /*printf("\nInteração\n");
        for(int k = 0; k<=4; k++){
            printf("- %d - ", A[k]);
        }*/
        
    }
}




int main()
{

    printf("\n\n\tINSERTION SORT\n\n");

    int vetor[] = {2,5,1,4,3};

    printf("\n\tVetor Desordenado\n\n\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }

    insertionSort(vetor, 4);

    printf("\n\n\n\tVetor Ordenado\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }


}