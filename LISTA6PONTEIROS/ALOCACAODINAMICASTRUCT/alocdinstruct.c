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
    gets (p->nome);
    printf ("Curso: ");
    gets (p->curso);
    printf ("Ano de ingresso: ");
    scanf ("%d", &p->anoIngresso);
    fflush (stdin);
    printf ("Previsão de formatura em: ");
    scanf ("%d", &p->anoFormatura);
    return;
}

void mostrar_aluno (struct aluno *p) {

    printf ("\nDados do Aluno:\n");
    printf ("Nome: %s\n", p->nome);
    printf ("Curso: %s\n", p->curso);
    printf ("Ano de Ingresso: %d\n", p->anoIngresso);
    printf ("Previsão de Formatura: %d\n",p->anoFormatura);
};

int main () {

    struct aluno a;

    leraluno (&a);
    
    mostrar_aluno(&a);

    return 0;
}