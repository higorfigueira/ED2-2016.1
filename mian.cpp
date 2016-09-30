#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct no{
   struct no *esq;
   int info;
   struct no *dir;
}TNO;

void insere(TNO ** raiz,int x){
    if(*raiz == NULL)
    {
      TNO * novo;
      novo = (TNO *)malloc(sizeof(TNO));
      novo->info = x;
      novo->esq = NULL;
      novo->dir = NULL;
      *raiz = novo;
    }else
      if (x < (*raiz)->info)
        insere(&((*raiz)->esq),x);
      else
        insere(&((*raiz)->dir),x);
}

void mostra(TNO * no){
   if(no != NULL){
       printf("%d\n", no->info);
       mostra(no->esq);
       mostra(no->dir);
   }
}

int buscaR(TNO * aux, int b)
{
  if(aux != NULL)
  {
    if(aux->info == b)
      return 1;
    else
    {
      buscaR(aux->esq, b);
      buscaR(aux->dir, b);
    }
  }
  return -1;
}

int busca(TNO * aux, int b)
{
  while(aux != NULL)
  {
    if(aux->info == b)
      return 1;
    else if (aux->info < b)
      aux = aux->dir;
    else
      aux = aux->esq;
  }
  return -1;
}

void remover(TNO ** t, int x)
{
  if(*t != NULL)
  {
    if(x<(*t)->info)
      remover(&((*t)->esq), x);
    else if (x > (*t)->info)
      remover(&((*t)->dir), x);
    else
    {
      TNO * aux;
      aux = *t;
      // NENHUM FILHO
      if(aux->esq == NULL && aux->dir == NULL)
      {
        free(aux);
        *t = NULL;
      }
      // UM FILHO
      else if(aux->esq == NULL || aux->dir == NULL)
      {
        if(aux->esq == NULL)
          *t = aux->dir;
        else
          *t = aux->esq;
        free(aux);
      }
      // DOIS FILHOS
      else
      {
        // TNO * anterior;
        // TNO * aux1;
        // anterior = aux;
        // aux1 = aux->esq;
        //
        // while(aux1->dir != NULL)
        // {
        //   anterior = aux1;
        //   aux1 = aux1->dir;
        // }
        // aux->info = aux1->info;
        // if(aux1->esq == NULL && anterior!= aux){
        //   anterior->dir = NULL;
        // }else{
        //   if(anterior == aux){
        //     anterior->esq = aux1->esq;
        //   }else
        //   anterior->dir = aux1->esq;
        // }
        // free (aux1);

        aux = maior(&(*t)->esq);
        aux->esq = (*t)->esq;
        aux->dir = (*t)->dir;
        free((*t));
        (*t) = aux;
      }
    }
  }
}

TNO *maior (TNO **t){
  if((*t)->dir != NULL )
    return maior((*t)->dir);
  else{
    TNO *aux = t;
    if((*t)->esq == NULL){
      *t = NULL;
      return aux;
    }else{
      *t = (*t)->esq;
      return aux;
    }
  }
}


int main(){

  TNO * arvore;
  arv = NULL;

  insere(&arvore,10);
  insere(&arvore,5);
  insere(&arvore,15);
  insere(&arvore,3);
  insere(&arvore,4);
  insere(&arvore,20);
  insere(&arvore,25);
  insere(&arvore,1);
  insere(&arvore,2);
  insere(&arvore,18);

  mostra(arvore);

  int qtd = 0;
  int x = 0;
  printf("\nQuantos deseja remover?\n");
  scanf("%d", &qtd);
  while(qtd>0){
    printf("\n Qual valor deseja remover?\n");
    scanf("%d", &x);

    remover(&arvore, x);
    printf("\n");
    mostra(arvore);
    printf("\n");
    qtd--;
  }


}
