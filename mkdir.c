#include <stdio.h>
#include <sys/stat.h> 
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    
    if (argc > 2){
        printf("Funcao usada incorretamente -> Formanto esperado ./mkdir {nome}. Mais que 1 parametro passado.");
        return 1;
    }

    char *nome_pasta = argv[1];
    printf("%s", nome_pasta);

    if (mkdir(nome_pasta, 0777) == 0) {
        printf("Pasta '%s' criada com sucesso.\n", nome_pasta);
    } else {
        perror("Erro ao criar a pasta");
    }

    return 0;
}