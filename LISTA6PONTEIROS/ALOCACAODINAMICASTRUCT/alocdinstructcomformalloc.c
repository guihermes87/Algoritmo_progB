#include   <stdio.h>
#include   <stdlib.h>

struct aluno{
    char nome[80];
    char curso[60];
    int anoIngresso;
    int anoFormatura;
};

void leraluno (struct aluno *p) {
    
    printf ("Digite o nome do aluno: ");
    fflush(stdin);
    scanf ("%s", p->nome);
    printf ("Curso: ");
    fflush(stdin);
    scanf ("%s",p->curso);
    printf ("Ano de ingresso: ");
    scanf ("%d", &p->anoIngresso);
    printf ("Previsão de formatura em: ");
    scanf ("%d", &p->anoFormatura);
    return;
}

void mostrar_aluno (struct aluno *p) {

    printf ("\nDados do Aluno:\n");
    printf ("Nome: %s\n", p->nome);
    printf ("Curso: %s\n", p->curso);
    printf ("Ano de Ingresso: %d\n", p->anoIngresso);
    printf ("Previsão de Formatura: %d\n", p->anoFormatura);
};

int main () {

    struct aluno *ptr;

    ptr = (struct aluno *) malloc (sizeof(struct aluno));
    
    if (!ptr) {
        printf ("Erro de alocação de memória!\n");
        exit (1);
    }

    
    leraluno (ptr);
    mostrar_aluno(ptr);
    
   
    free (ptr);
    
    return 0;
}