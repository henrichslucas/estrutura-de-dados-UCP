#include <stdio.h>
#include <stdlib.h>

#define maxQtd 100

typedef struct
{
  int itopo;
  float vet[maxQtd];

} Tpilha;

int vazia(Tpilha p)
{
  return p.itopo == -1;
}

int cheia(Tpilha p)
{
  return p.itopo == maxQtd - 1;
}

float topo(Tpilha p)
{
  return p.vet[p.itopo];
}

void remover(Tpilha *p)
{
  if (vazia(*p))
  {
    printf("Pilha vazia!");
    exit(0);
  }
  else
  {
    (*p).itopo--;
  }
}

void inserir(Tpilha *p, float info)
{
  if (cheia(*p))
  {
    printf("Pilha cheia!");
    exit(0);
  }
  else
  {
    (*p).itopo++;
    (*p).vet[(*p).itopo] = info;
  }
}

void inicializar(Tpilha *p)
{
  (*p).itopo = -1;
}

void finalizar(Tpilha *p)
{
  (*p).itopo = -1;
}
