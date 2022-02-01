typedef int tipo_lista;

struct struct_lista
{
  tipo_lista dado;
  struct struct_lista * prox;
};

class lista
{
private:
  struct_lista* lista_;
  void excluir_lista(struct_lista* lista_);

public:
  lista(void);
  ~lista(void);
  struct_lista* buscar(tipo_lista dado);
  void inserir(tipo_lista dado);
  void imprimir(void);
  int remover(tipo_lista dado);
};





