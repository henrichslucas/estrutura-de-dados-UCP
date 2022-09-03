#include <stdio.h>

#define MAX 100;

int main()
{
    typedef struct{
        float valor[MAX];
        int qtd;
    } TLista;
    
    void inicializar(TLista *L){
        (*L).qtd = 0;
    }
    
    void finalizar(TLista *L){
        (*L).qtd = 0;
    }
    
    int VAZIA(TLista L){
        return L.qtd == 0;
    }
    
    int cheia(TLista L){
        return L.qtd == MAX;
    }
    
    int obterQtd(TLista L ){
        return L.qtd;
    }
    
    floar obterValor(TLista L, int pos){
        if(pos<0 || pos>=L.qtd){
            printf("nao existe elemento na posicao %i\n", pos);
        }
        return L.valores[pos];    
    }
    
    void atribuirValor(TLista *L, int pos, float info){
        if(pos<0 || pos>=L.qtd){
            printf("nao existe elemento na posicao %i\n",pos);
            exit(-1);
        }
        (*L).valores[pos] = info;
    }
    
    void inserirInicio(TLista *L, float info){
        int i;

        if(cheia(*L)){
            printf("lista cheia nao pode inserir\n");
            exit(-1);
        }
        for(i=(*L).qtd-1; i>=0; i--){
            (*L).valores[i+1] = (*L).valores[i];
        }
        (*L).valores[0] = info;
        (*L).qtd++;
    }

    void inserirNaPosicao(TList *L, int pos float info){
        int i;
        if(cheia(*L)){
            printf("lista cheia nao pode inserir\n")
        }
    }

    void inserirOrdenado(TLista *L, float info){
        int i;

        if(cheia(*L)){
            printf("lista cheia nao pode inserir\n");
            exit(-1);
        }
        for(i=(*L).qtd-1; i>=0; i--){
            (*L).valores[i+1] = (*L).valores[i];
        }
        (*L).valores[0] = info;
        (*L).qtd++;

        
    }

    return 0;
}
