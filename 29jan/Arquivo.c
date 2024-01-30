#include <stdio.h>

int main(void){

FILE* fp;
fp = fopen("entrada.txt","w");
if(fp==NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
}
    return 0;
}

// Função fopen e fclose

#include <stdio.h>
#include <stdlib.h>

int main(void){

//Cria o arquivo: entrada.txt no modo texto "t"
FILE * arquivos = fopen("entrada.txt","wt");
if(arquivo==NULL){
    printf("Erro ao abrir o arquivo! ");
    exit(1);
}
else{
    printf("Arquivo criado! ");
}
fclose(arquivo); //Fecha o arquivo criado
    return 0;
}



//Funções para ler dados
// int fgetc(FILE* fp);
#include <stdio.h>

int main(void){

FILE * arquivo = fopen("entrada.txt", "rt");
int c;

if(arquivo==NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
}
else{
    printf("Arquivo criado! ");
}
c = fgetc(arquivo); // Lê um caractere do arquivo
printf("%c\n", c); //Imprime o caractere lido
if(!fclose(arquivo)){
    printf("Arquivo fechado com sucesso! ");
}// Fecha o arquivo criado
    return 0;
}



// char* fgets(char* s, int n, FILE* fp);
#include <stdio.h>

int main(void){

FILE * arquivo = fopen("entrada.txt", "rt");
int c;

if(arquivo==NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
}
else{
    printf("Arquivo criado! ");
}
c = fgets(c, 20, arquivo); // Lê uma linha do arquivo
printf("%s\n", c); //Imprime a string lida

if(!fclose(arquivo)){
    printf("Arquivo fechado com sucesso! ");
}// Fecha o arquivo criado
    return 0;
}



// int fscanf(FILE* fp, char* formato,...);
#include <stdio.h>

int main(void){

FILE * arquivo = fopen("entrada.txt", "rt");
int c;

if(arquivo==NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
}
else{
    printf("Arquivo aberto! ");
}

scanf(arquivo, "%s", c)
printf("%s\n", c); //Imprime a string lida

if(!fclose(arquivo)){
    printf("Arquivo fechado com sucesso! ");
}// Fecha o arquivo criado
    return 0;
}



//Cria arquivo escrito

#include <stdio.h>

int main(void){

// Cria o arquivo: entrada_escrita.txt no modo "w" write
FILE* arquivo = fopen("entrada_escrita.txt", "w");

if(arquivo==NULL){
    printf("Erro na abertura do arquivo!\n");
    exit(1);
}
else{
    printf("Arquico aberto! ");
}
// fputc('A', arquivo);
// fputs("Hello world! ", arquivo);
fprintf(arquivo, "Meu texto! ");

if(!close(arquivo)){
    printf("Arquivo fechado com sucesso! ");
}

    return 0;
}


//Teste proposto escrito
#include <stdio.h>

int main(void){

    int c;
    int nlinhas = 0;
    FILE *fp;
    /* abre arquivo para leitura */
    fp = fopen("entrada.txt", "rt");
    if(fp == NULL) {
        printf("Nao foi possivel abrir arquivo.\n");
        return 1;
    }

    /* lê caractere a caractere */
    while((c = fgetc(fp))!= EOF){
        if(c == '\n')
        nlinhas++;
    }
    /* fecha arquivo */
    fclose(fp);
    /* exibe resultado na tela */
    printf("Numero de linhas = %d\n", nlinhas);
    
    return 0;
}