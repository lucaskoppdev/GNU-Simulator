#include <stdio.h>


int main(int argc, char *argv[]){

  if (argc < 2){
    printf("Ocorreu um erro. %d argumentos passados, esperado 1", argc);
  }

  if (argc != 2){
    printf("Passados %d argumentos, esperados 1.", argc - 1);
  }

  if (remove(argv[1]) == 0){
    printf("Pasta excluida com sucesso!");
  }
  else{
    printf("Ocorreu um erro ao tentar remover a pasta. A funcao so pode remover pastas Vazias"); 
  }

  return 0;
}
