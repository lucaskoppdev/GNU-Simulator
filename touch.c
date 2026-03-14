#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]){

  if (argc > 2){
    printf("Parametros invalidos ao tentar criar o arquivo, esperado 2\n");
    exit(0);
  }

  if (argc == 1){
    printf("Argumento: 'FILE_NAME' faltando, tente novamente!\n");
    exit(0);
  }


  FILE *file;


  file = fopen(argv[1], "w");


  if (file == NULL) {

    printf("Erro ao criar o arquivo \n");
    exit(1);
  }

  fclose(file);

  printf("O arquivo %s foi criado com sucesso!", argv[1]);
  
  return 0;
}
