#include <stdio.h>

/* Declaração de registros */
typedef struct date {
    int dia;
    int mes;
    int ano;
} date;

typedef struct hour
{
    int hora;
    int minuto;
    int segundo;
} hour;

typedef struct events {
    char descricao[255];
    char local[150];
    date data_inicio;
    date data_fim;
    hour hora_inicio;
    hour hora_fim;
} events;

/* Protótipo de funções */
int leOpcao();
hour duracaoTotal(events evento[], int n);

int main(void) {

    events eventos[500];
    int n = 0;
    int opcao;

    do {

        opcao = leOpcao();

        switch (opcao) {
            case 1:
                printf("Cadastrar novo Evento!\n");

                printf("Informe uma breve descrição do evento: ");
                scanf(" %[^\n]", eventos[n].descricao);

                printf("Informe o local do evento: ");
                scanf(" %[^\n]", eventos[n].local);

                printf("Informe a data de Inicio e Fim do evento (XX/XX/XXXX - XX/XX/XXXX): ");
                scanf("%d/%d/%d - %d/%d/%d", 
                    &eventos[n].data_inicio.dia, 
                    &eventos[n].data_inicio.mes, 
                    &eventos[n].data_inicio.ano, 
                    &eventos[n].data_fim.dia, 
                    &eventos[n].data_fim.mes, 
                    &eventos[n].data_fim.ano
                );
                
                printf("Informe a hora de Início e Fim do evento (XX:XX:XX - XX:XX:XX): ");
                scanf("%d:%d:%d - %d:%d:%d", 
                    &eventos[n].hora_inicio.hora, 
                    &eventos[n].hora_inicio.minuto, 
                    &eventos[n].hora_inicio.segundo, 
                    &eventos[n].hora_fim.hora, 
                    &eventos[n].hora_fim.minuto, 
                    &eventos[n].hora_fim.segundo
                );
                
                n++;

                printf("\n-------------------------------\n");
                printf("USUÁRIO CADASTRADO COM SUCESSO!");
                printf("\n-------------------------------\n");

                printf("\nPressione enter para continuar!\n");
                getchar(); /* pega o ultimo 'enter' */
                getchar(); /* Aguarda o 'enter' para continuar */
                break;
            
            case 2:
                printf("Consultar eventos em um dia e horário específicos.\n");

                printf("\n-------------------------------\n");
                printf("Pressione enter para continuar!\n");
                getchar();
                getchar();
                break;
            
            case 3:
                printf("Listar todos os eventos de um dia específico em ordem cronológica.\n");

                printf("\n-------------------------------\n");
                printf("Pressione enter para continuar!\n");
                getchar();
                getchar();
                break;
            
            case 0:
                printf("Encerrando programa!\n");
                break;

            default:
                printf("Opção Inválida!\n");

                break;
        }

    } while (opcao != 0);

    return 0;
}

int leOpcao() {

    int op;

    printf("\n=====================================\n");
    printf("          AGENDA DE EVENTOS\n");
    printf("=====================================\n");
    printf("  [1] Cadastrar evento\n");
    printf("  [2] Listar evento (dia e hora)\n");
    printf("  [3] Listar todos os eventos\n");
    printf("  [0] Sair\n");
    printf("=====================================\n");
    printf("Digite a sua opção: ");
    scanf("%d", &op);

    return op;

}

hour duracaoTotal(events evento[], int n) {

    int segundosI, segundosF, duracaoTotalSeg;
    hour duracao;
    int resto;

    segundosI = (evento[n].hora_inicio.hora * 3600) + (evento[n].hora_inicio.minuto * 60) + evento[n].hora_inicio.segundo;

    segundosF = (evento[n].hora_fim.hora * 3600) + (evento[n].hora_fim.minuto * 60) + evento[n].hora_fim.segundo;

    duracaoTotalSeg = segundosF - segundosI;

    if (duracaoTotalSeg < 0) {
        duracaoTotalSeg = duracaoTotalSeg * -1;
    }

    duracao.hora = duracaoTotalSeg / 3600;
    resto = duracaoTotalSeg % 3600;

    duracao.minuto = resto / 60;

    duracao.segundo = resto % 60;

    return duracao;

}