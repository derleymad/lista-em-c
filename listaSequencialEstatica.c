#include <stdlib.h>
#include <stdio.h>
#include "listaSequencialEstatica.h"

struct lista{
    int qtd;
    struct aluno dados[MAX];
};

Lista* cria_lista(){
    Lista *li;
    li = (Lista*)malloc(sizeof(struct lista));
    if (li != NULL)
        li->qtd=0;
    return li;
}

void menu(void){
    printf("Digite 1 para inserir\n");
        printf("Digite 2 para consultar\n");
        printf("Digite 3 para ver tamanho\n");
        printf("Digite 4 para apagar lista\n");
        printf("Digite 5 para remover\n");
        printf ("Digite 6 para consultar matricula\n");
}

int menu2(struct aluno *al){
            printf("\nMatricula\n");
        scanf("%i",&al->matricula);
            printf("n1\n");
        scanf("%f",&al->n1);
            printf("n2\n");
        scanf("%f",&al->n2);
            printf("n3\n");
        scanf("%f",&al->n3);
            printf("Nome\n");
        scanf("%s",al->nome);

        return 1;
}

menu3(struct aluno dados_aluno1){
    printf("\nMatricula: %i\n\n",dados_aluno1.matricula);
    printf("n1: %f \t ",dados_aluno1.n1);
    printf("n2: %f \t ",dados_aluno1.n2);
    printf("n3: %f \t ",dados_aluno1.n3);
    printf("Nome: %s \t ",&dados_aluno1.nome);
    printf("\n\n");

}

void libera_lista(Lista* li){
        free(li);
}

int tamanho_lista(Lista* li){
    if(li==NULL)
        return -1;
    else
        return li->qtd;
}

int lista_cheia(Lista* li){
    if(li==NULL)
        return -1;
    return  (li->qtd == MAX); //SE FOR VERDADE RETORNA 1, FOR FALSO 0;
}

int lista_vazia(Lista* li){
    if(li==NULL)
        return -1;
    return (li->qtd == 0);
}

int inserir_fim(Lista* li, struct aluno al){
    if (li == NULL)
        return 0;
    if(lista_cheia(li))
        return 0;
    li->dados[li->qtd]=al;
    li->qtd++;
    return 1;
}

int inserir_inicio(Lista* li, struct aluno al){
    if(li==NULL) return 0;

    if(lista_cheia(li)) return 0;
        int i;
            for(i=li->qtd-1; i>=0; i--)
                li->dados[i+1] =  li->dados[i];
            li->dados[0] = al;
            li->qtd++;
            return 1;
}

int consulta_lista_pos(Lista* li, int pos, struct aluno *al){
    if(li==NULL || pos <= 0 || pos > li->qtd)
        return 0;
    *al=li->dados[pos-1];
    return 1;
}

int consulta_lista_mat(Lista*li, int mat, struct aluno *al){
    if (li==NULL)   return 0;
    else{
        int i=0;
            while(li->dados[i].matricula != mat && i<li->qtd)   i++;

            if (i==li->qtd) return 0;
            else{
                *al = li->dados[i];
                return 1;
            }
    }
}

int remover_inicio(Lista* li){
    if (li==NULL){
        return 0;
    }
    else if (lista_vazia(li)){
        return 0;
        }
    else {
        int i;
        for (i=0;i<(li->qtd)-1;i++)
            li->dados[i]= li->dados[i+1];

        li->qtd--;
        return 1;
    }

}

int remover_fim(Lista* li){
    if (li==NULL) return 0;
    else if (lista_vazia(li)) return 0;

    else{
    li->qtd--;
    return 1;
    }
}

int inserir_meio(Lista *li, struct aluno al){
        if (li==NULL)   return 0;
        else if (cheia(li)) return 0;
        else{

        }

}


