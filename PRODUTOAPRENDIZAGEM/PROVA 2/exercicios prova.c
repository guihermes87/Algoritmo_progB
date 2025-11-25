//1 

struct carro {
    char placa[10];
    int ano;
    char modelo[30];
    float valorIPVA;
};

//B
struct carro v[50];

//C
float totalIPVA = 0;
int i;

for(i=0;i=50;i++)
totalIPVA += v[i].valorIPVA;

//2

py = &Y s;
Y == &pY n;
Y == *pY s;
pY == *Y n;

//3
//variavel inteira x ponteiro px;
//quais são corretas;

letra c correta recebe &x;
letra b correta recebe px;

//4
//trecho de codigo;
int x, *px;
float a, *pa;

x = 10 V;
*pa = &a F;
px = &a;
*px = 2;
px = &x;
pa = &x;
*px = 3.5;
*pa = 4.5;

//5
int *p;
int a = 5;
p = &a;

*p e igual a 5 - v
p é igual a 5 - falso, igual ao conteudo de p;
p armazazenada o endereco de a; verdadeiro;
ao executar *p=30, a tera o valor 30; verdadeiro;
ao ser alterado o valor de a, o p será modificado - falso;

//6

//9

int contarVogal(char *p){
int i=0, q=0;
    for (;*p; p++){
        if (*p =='a'|| *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
        printf ("%d",i);
        q++;
}   
}

s = ALGORITMOS;
i = 0123456789;

int main () {
    char s[30];
    int v;
    scan("%s", s);
    v = contarvogal(s);
    printf("Há %d vogais em %s, v, s);
};


//10

void ler (int *v) {
int i;
for (i=0; i <31; i++){
printf ("Acesso no dia %d", i+1)
scanf(%d, (v+i)); ou &v[i]
}
return;
}

float calcularMedia(int *v){
int i;
float m = 0;
for (i=0;i<31;i++){
m += *(v+i); igual a &v[i]
}
m = m/31;
return m;
}

void comparar (int m2025, int m2024){
if (m2025>m2024){
printf("Media QTDE. 2025 = %d", m2025)
dif = (m2025 - m2024) /m2024;
printf("Dif = %f", dif);
    else if (m2024>m2025){
        printf ("MaiorQTE, 2024 = %d", m2024);
        dif = (m2024 - m2025)/2025;

}
        else {
        printf("IGUAIS");
        }
}
}

int main(){
int acesso[31];
float mediaOut2025, mediaOut2024;

ler(acesso);
mediaOut2025 = calcularMedia(acesso);

printf ("Informe a media de OUT 2024:");
scanf ("%f", &mediaOut2024);

comparar (mediaOut2025;mediaOut2024);
}

//11
 s = carlos_luiz_silva\0;
 login = CLS\0;

include <string.h>

int main (){

char s[30], login[10];
gets(s);
login[0] = s[0];

k=1;
for (;*s; s++) {
if (*s == ' '){
login[k] = *(s+1);
k++
} 
}
login[k] = '\0';
puts(login);

}