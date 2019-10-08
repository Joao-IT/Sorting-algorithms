/*
    Aluno: João Carlos Gonçalves
    Matrícula: 201705991
    Matéria: ED2
    Data: 05/10/2019
*/


#include <stdio.h>
#include <stdlib.h>


/*
    Merge Sort ou "Ordenação por mistura" utiliza a ideia de "Dividir para conquistar",
    dividindo recursivamente o conjunto de dados, até que cada subconjunto possua 1 elemento.

    Depois combina 2 conjuntos de forma a obter um conjunto maior e ordenado.

    Ex: V[]={5,4,3,2,1};



                                [5,4,3,2,1]
                    
                         [5,4,3]           [2,1]

                [5,4]   [3]             

          [5] [4]     [3]    

    Vertifica entre o 4 e o 5 quem é o menor e retorna.


                                [5,4,3,2,1]
                    
                         [5,4,3]           [2,1]

                [4,5]   [3]         

    Agora faz intercalação entre os dois vetores verificando quem é o menor e retornando em ordem.


                                 [5,4,3,2,1]
                    
                         [3,4,5]           [2,1]

    Após o pimeiro vetor estar ordenado, vamos fazer o mesmo para o vetor da direita.


                                [5,4,3,2,1]
                    
                         [3,4,5]           [2,1]
                                        
                                        [2]     [1]

    Faz a intercalação entre os dois valores verificando quem é o menor.

                                [5,4,3,2,1]
                    
                         [3,4,5]           [1,2]


    Agora, após os 2 vetores estarem ordenados é feita e intercalação entre eles resultando em um vetor ordenado.

                                [1,2,3,4,5]



                                        

    Processo se repete até que exista apenas 1 conjunto.

    É um algoritmo rápido e estável, porém, por ser um algoritmo recursivo e utilizar um
    vetor auxiliar durante a ordenação, desta forma gasta um pouco mais de memória. 

*/




// Combinar os dados de forma ordenada

void sortData(int A[], int inicio, int meio, int fim){

    int p = inicio;
    int q = meio + 1;

    int vet[fim - inicio + 1];
    int k = 0;

    for(int i = inicio; i <= fim; i++){

        if(p > meio)
            vet[k++] = A[q++];
        
        else if(q > fim)
            vet[k++] = A[p++];

        else if( A[p] < A[q])
            vet[k++] = A[p++];
        
        else 
            vet[k++] = A[q++];
    }

    for(int p = 0; p < k; p++){
        A[inicio++] = vet[p];
    }
}




// Principal função recursiva

void mergeSort(int A[], int inicio, int fim){
    
    if(inicio < fim){
        
        int meio = (inicio + fim) / 2;

        mergeSort(A, inicio, meio);
        mergeSort(A, meio + 1, fim);

        sortData(A, inicio, meio, fim);

    }
}




int main()
{

    printf("\n\n\tMERGE SORT\n\n");

    int vetor[] = {2,5,1,4,3};

    printf("\nVetor Desordenado\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }

    mergeSort(vetor, 0, 4);

    printf("\nVetor Ordenado\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }


}