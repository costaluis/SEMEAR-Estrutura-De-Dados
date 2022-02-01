typedef int tipo_lista;
typedef struct struct_lista lista;

struct struct_lista
{
  tipo_lista dado;
  struct struct_lista * prox;
};


lista* cria_lista(void);
lista* buscar_lista(lista* lista_, tipo_lista dado);
int remover_lista(lista* lista_, tipo_lista dado);
void inserir_lista(lista* lista_, tipo_lista dado);
void excluir_lista(lista* lista_);
void imprimir_lista(lista* lista_);