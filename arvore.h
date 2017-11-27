#ifndef ARVORE_H
#define ARVORE_H
typedef struct arvore Arv;

Arv* cria_arv(int num, Arv* dir, Arv* esq);
Arv* cria_caracter(unsigned char c, Arv* dir, Arv* esq);
Arv* cria_arvvazia();
int arv_vazia(Arv* a);
Arv* libera_arv(Arv* a);
int retorna_freq(Arv* a);


#endif /* ARVORE_H */

