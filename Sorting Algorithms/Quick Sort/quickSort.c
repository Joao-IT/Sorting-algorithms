/*
    Aluno: João Carlos Gonçalves
    Matrícula: 201705991
    Matéria: ED2
    Data: 05/10/2019
*/


#include <stdio.h>
#include <stdlib.h>


/*
    QuickSort é um algoritmo de ordenação recursivo onde segue a ideia de "Dividir para conquistar"
    Onde um elemento é escolhido como pivô e os dados são rearanjados, valores menores que o pivô ficam a esquerda, e os maiores à direita.

    Exemplo do funcionamento.

    https://www.youtube.com/watch?v=Hoixgm4-P4M&t=17s

    É um algoritmo estável não alterando a ordem dos dados iguais, porém uma das desvantagens é que a escolha do pivô influencia no desempenho do algoritmo.
*/

// Função para particionar

int particionar(int A[], int inicio, int fim){

    int i = inicio + 1;
    int piv = A[inicio];
    for(int j = inicio+1; j<= fim; j++){

        if(A[j] < piv){

            int aux;
            aux = A[i];
            A[i] = A[j];
            A[j] = aux;

            i+=1;
        }
    }

    int aux2;
    aux2 = A[inicio];
    A[inicio] = A[i - 1];
    A[i -1] = aux2;

    return i-1;
}




// Função recursiva 

void quickSort(int A[], int inicio, int fim){

    if(inicio < fim){

        int posicaoPivo = particionar(A, inicio, fim);
        quickSort(A, inicio, posicaoPivo-1);
        quickSort(A, posicaoPivo+1, fim);
    }

}










int main()
{

    printf("\n\n\tQUICK SORT\n\n");

    int vetor[] = {2,5,1,4,3};

    printf("\nVetor Desordenado\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }

    quickSort(vetor,0,4);

    printf("\nVetor Ordenado\n");

    for(int k = 0; k <=4; k++){
        printf("- %d -",vetor[k]);
    }


}