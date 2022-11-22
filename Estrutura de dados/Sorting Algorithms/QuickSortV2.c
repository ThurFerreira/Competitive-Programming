#include <stdio.h>
#include "lib_sort.h"

void mediana_tres_int(flor *vetor, int inicio, int fim){
  if(vetor[fim].nro_petalas < vetor[fim/2].nro_petalas) troca(vetor, fim/2, fim);

  if(vetor[inicio].nro_petalas < vetor[fim/2].nro_petalas) troca(vetor, inicio, fim/2);
  else if(vetor[inicio].nro_petalas > vetor[fim].nro_petalas) troca(vetor, inicio, fim);
  
  return;
}

void mediana_tres_string(flor *vetor, int inicio, int fim){
  if(strcmp(vetor[fim].nome, vetor[fim/2].nome) < 0) troca(vetor, fim/2, fim);

  if(strcmp(vetor[inicio].nome, vetor[fim/2].nome) < 0) troca(vetor, inicio, fim/2);
  else if(strcmp(vetor[inicio].nome, vetor[fim].nome) > 0) troca(vetor, inicio, fim);
  
  return;
}

int ordena_conjunto_int(flor *vetor, int pivo, int esq, int dir){
  while(esq < dir){
      if(vetor[esq].nro_petalas > vetor[pivo].nro_petalas){
        while(dir > esq){ 
          if(vetor[dir].nro_petalas <= vetor[pivo].nro_petalas){
            troca(vetor, esq, dir);
            break;
          }
          else dir--;
        }
      }
      else esq++;
    }

  return esq;
}

int ordena_conjunto_string(flor *vetor, int pivo, int esq, int dir){
  while(esq < dir){
      if(strcmp(vetor[esq].nome, vetor[pivo].nome) > 0){
        while(dir > esq){ 
          if(strcmp(vetor[dir].nome, vetor[pivo].nome) <= 0){
            troca(vetor, esq, dir);
            break;
          }
          else dir--;
        }
      }
      else esq++;
    }

  return esq;
}

void quick_sort_int(flor *vetor, int inicio, int fim){
  if(fim - inicio < 1) return;
  else{
    if(fim-inicio > 1) mediana_tres_int(vetor, inicio, fim); //caso existam pelo menos 3 valores entre inicio e fim, efetua a mediana
    
    int limiar = ordena_conjunto_int(vetor, inicio, inicio+1, fim); //ordena este conjunto de valores e retorna a posicao do elemento que divide o conjunto dos menores do conjunto dos maiores
    troca(vetor, inicio, limiar-1); //troca o pivô com o último elemento do conjunto dos menores que o pivô
    
    quick_sort_int(vetor, inicio, limiar-1); //chamada recursiva no conjunto dos menores
    quick_sort_int(vetor, limiar, fim); //chamada recursiva no conjunto com os maiores
  }
  
  return;
}

void quick_sort_string(flor *vetor, int inicio, int fim){
  if(fim - inicio < 1) return;
  else{
    if(fim-inicio > 1) mediana_tres_string(vetor, inicio, fim); //caso existam pelo menos 3 valores entre inicio e fim, efetua a mediana
    
    int limiar = ordena_conjunto_string(vetor, inicio, inicio+1, fim); //ordena este conjunto de valores e retorna a posicao do elemento que divide o conjunto dos menores do conjunto dos maiores
    troca(vetor, inicio, limiar-1); //troca o pivô com o último elemento do conjunto dos menores que o pivô
    
    quick_sort_string(vetor, inicio, limiar-1); //chamada recursiva no conjunto dos menores
    quick_sort_string(vetor, limiar, fim); //chamada recursiva no conjunto com os maiores
  }
  
  return;
}
