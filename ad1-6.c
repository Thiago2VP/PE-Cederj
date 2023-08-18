#include <stdio.h>
#include <stdlib.h>

struct lista{
    int info;
    struct lista* prox;
    //struct lista* ant;
};
typedef struct lista* def_lista;

def_lista inicializa (void) {
	return NULL;
}

def_lista cria (int num) {
	def_lista nova_lista = (def_lista) malloc(sizeof(struct lista));
	nova_lista->info = num;
	nova_lista->prox = NULL;
	//nova_lista->ant = NULL;
	return nova_lista;
}

def_lista insere_inicio (def_lista Lista, int num) {
	def_lista novo_no = cria(num);
	novo_no->prox = Lista;
	//Lista->ant = novo_no;
	return novo_no;
}
/*
def_lista menor_no_ini (def_lista Lista) {
	int minimo = 1000000;
	def_lista aux;
	def_lista menor;
	def_lista ant;
	for (aux = Lista; aux != NULL; aux = aux->prox) {
		if (aux->info < minimo) {
			minimo = aux->info;
			menor = aux;
			ant = aux->ant;
		}
	}
	if (menor->ant == NULL) {
		return menor;	
	}
	if (menor->prox == NULL) {
		menor->ant->prox = NULL;
		menor->ant = NULL;
		menor->prox = Lista;
		Lista->ant = menor;
		return menor;
	}
	ant->prox = menor->prox;
	menor->prox->ant = ant;
	menor->prox = Lista;
	Lista->ant = menor;
	return menor;
}
*/
def_lista menor_no_ini_s (def_lista Lista) {
	int minimo = 1000000;
	def_lista aux;
	def_lista aux_ant = NULL;
	def_lista menor;
	def_lista ant;
	for (aux = Lista; aux != NULL; aux = aux->prox) {
		if (aux->info < minimo) {
			minimo = aux->info;
			menor = aux;
			ant = aux_ant;
		}
		aux_ant = aux;
	}
	if (ant == NULL) {
		return menor;	
	}
	if (menor->prox == NULL) {
		ant->prox = NULL;
		menor->prox = Lista;
		return menor;
	}
	ant->prox = menor->prox;
	menor->prox = Lista;
	return menor;
}

void imprime_lista (def_lista Lista) {
	def_lista aux;

	printf("\nA lista : \n");
	for (aux = Lista; aux != NULL; aux = aux->prox) {
		printf("%d ", aux->info);
	}
	printf("\n");
}

int main() {
	def_lista lista = cria(5);
	lista = insere_inicio(lista, 13);
	lista = insere_inicio(lista, 4);
	lista = insere_inicio(lista, 21);
	lista = insere_inicio(lista, 10);
	imprime_lista(lista);
	//lista = menor_no_ini(lista);
	lista = menor_no_ini_s(lista);
	imprime_lista(lista);
	return 1;
}