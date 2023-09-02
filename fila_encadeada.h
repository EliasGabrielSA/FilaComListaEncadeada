typedef struct no {
    int dado;
    struct no *prox;
} No;

typedef struct fila {
    No *inicio;
    No *fim;
} Fila;

void inicializar(Fila *f);
No *criarNovoNo(int dado);
void enfileirar(Fila *f, int dado);
int desenfileirar(Fila *f);
short int filaVazia(Fila *f);
void imprimir(Fila *f);
