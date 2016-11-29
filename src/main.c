#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_LINHA 80

int main(int argc, char *argv[])
{
if (a!=2){
    fprintf(stderr,"Sintaxe: main <arquivo>\n");
    exit(EXIT_FAILURE);
}
FILE *fin = fopen(argv[1],"rt");
if (!fin){
    fprintf(stderr,"Arquivo náo encontrado: %s\n",argv[1]);
    exit(EXIT_FAILURE);
}
char linha[TAM_MAX_LINHA];
int i=0;
while (fgets(linha, TAM_MAX_LINHA, fin) ){
    fprintf(stdout, "%5d: %s", i++, linha);
}
fclose(fin);
}
