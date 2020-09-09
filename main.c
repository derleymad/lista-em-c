#include <stdio.h>
#include <stdlib.h>
#include "listaSequencialEstatica.h"
#include <string.h>

int main(){
    int opc,pos;
    Lista *li;
    li = cria_lista();

    struct aluno dados_aluno1;
  //  struct aluno *dados_aluno2;


    while (1==1){

        menu();
            scanf("%i",&opc);

        system("clear");
            if (opc==1){

                system("clear");

                int opc2;
                printf("Inserir 1-inicio ou 2-fim?\n");
                    scanf("%i",&opc2);

                    if (opc2==1){

                            menu2(&dados_aluno1);

                                inserir_inicio(li,dados_aluno1);
                    }

                    else if (opc2==2){

                            menu2(&dados_aluno1);

                                inserir_fim(li,dados_aluno1);
                    }

                }
            else if (opc==2){
                system("clear");
                printf("Qual pos? ");
                    scanf("%i",&pos);
                        consulta_lista_pos(li,pos,&dados_aluno1);
                            menu3(dados_aluno1);

                }
            else if (opc==3){
                system("clear");
                printf("%i\n",tamanho_lista(li));
            }
            else if (opc==4){
                system("clear");
                libera_lista(li);

            }
            else if (opc==5){
                system("clear");
                remover_inicio(li);
            }
            else if (opc==6){

                printf("Digite sua matricula:\n");
                scanf("%i",&pos);
                consulta_lista_mat(li,pos,&dados_aluno1);

                    printf("\nMatricula %i ENCONTRADA\n",pos);
                        menu3(dados_aluno1);

            }


}

    return 0;
}

