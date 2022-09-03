#include<stdio.h>

#define MAX 100

#define _FILA_VAZIA_NAO_TEM_PRIMEIRO_ 1
#define _FILA_VAZIA_NAO_TEM_ULTIMO_   2

typedef struct{
   float vet[MAX];
   int   iInicio, iFim;
} TFila;

void inicializar(TFila *f)
{
   (*f).iInicio = 0;
   (*f).iFim = -1;
}
void finalizar(TFila *f)
{
   (*f).iInicio = 0;
   (*f).iFim = -1;
}

#define prox(x) ((x+1) % MAX)

/*int prox(int x)
{
	return (x+1) % MAX;
    //return x==MAX-1?0:x+1;
}*/

int vazia(TFila f)
{
   return prox(f.iFim) == f.iInicio && f.iInicio == -1;
}

int cheia(TFila f)
{
   return prox(f.iFim) == f.iInicio && f.iInicio != -1;
}

float primeiro(TFila f)
{
   if (vazia(f))
   {
     printf("Fila vazia nao tem primeiro");
     exit(_FILA_VAZIA_NAO_TEM_PRIMEIRO_);
   }
   return f.vet[f.iInicio];
}

float ultimo(TFile f)
{
   if (vazia(f))
   {
     printf("Fila vazia nao tem ultimo");
     exit(_FILA_VAZIA_NAO_TEM_ULTIMO_);
   }
   return f.vet[f.iFim];
}

void inserir(TFile *f, float info)
{
   if (cheia(*f))
   {
     printf("Fila cheia nao pode inserir");
     exit(3);
   }
   (*f).iFim = prox((*f).iFim);
   (*f).vet[(*f).iFim] = info;
}

void remover(TFile *f)
{
   if (vazia(*f))
   {
     printf("Fila vazia nao pode remover");
     exit(4);
   }
   if ((*f).iInicio == (*f).iFim)
   {
     (*f).iInicio = 0;
     (*f).iFim = -1;
   }
   else 
      (*f).iInicio = prox((*f).iInicio);
}

