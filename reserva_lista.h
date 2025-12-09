#ifndef RESERVA_LISTA_H
#define RESERVA_LISTA_H

typedef struct reserva {
    int id_reserva;
    int id_hospede;
    int numero_quarto;
    char data_entrada[11];
    char data_saida[11];
} RESERVA;

typedef struct caixa_res {
    RESERVA elem;
    struct caixa_res *prox;
} CAIXA_RES;

typedef CAIXA_RES* ponteiro_res;

typedef struct {
    ponteiro_res prim;
    ponteiro_res ult;
    int qtd;
} LISTA_RESERVA;

// Protótipos
void criar_lista_reserva_vazia(LISTA_RESERVA *l);
int lista_reserva_vazia(LISTA_RESERVA l);
void ler_reserva(RESERVA *x, int prox, int id_hospede);
void Insere_reserva(LISTA_RESERVA *l, RESERVA x);
void Exibe_Todas_Reservas(LISTA_RESERVA l);

#endif
