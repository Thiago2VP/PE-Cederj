#include <stdio.h>
#include <stdlib.h>

struct No_AVL{
    int chave;
    int fb;
    struct No_AVL* esq;
    struct No_AVL* dir;
};
typedef struct No_AVL* def_no_avl;

struct Arvore_AVL{
    def_no_avl raiz;
};
typedef struct Arvore_AVL* def_arvore_avl;

int main() {
	def_arvore_avl arvore;
	return 1;
}