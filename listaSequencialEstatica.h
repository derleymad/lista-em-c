#define MAX 50

struct aluno {
    int matricula;
    char nome[30];
    float n1,n2,n3;

};
typedef struct lista Lista;

Lista* cria_lista();

void menu(void);
int menu2(struct aluno *al);
menu3(struct aluno dados_aluno1);

void libera_lista(Lista* li);

int tamanho_lista(Lista* li);

int lista_cheia(Lista* li);

int lista_vazia(Lista* li);

int inserir_fim(Lista* li, struct aluno al);

int inserir_inicio(Lista* li, struct aluno al);

int consulta_lista_pos(Lista *li,int pos,struct aluno *al);

int consulta_lista_mat(Lista*li, int mat, struct aluno *al);

int remover_inicio(Lista *li);

int remover_fim(Lista *li);

int inserir_meio(Lista *li, struct aluno al);
