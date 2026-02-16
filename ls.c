//Observe que esse seria um ls "puro", sem filtros, ou seja, ira mostrar tudo contido na pasta atual, inclusive o "." e ".." de navegacao entre pastas do linux
#include <stdio.h>
#include <dirent.h>


int main(){ 
    DIR *d;
    struct dirent *dir;

    d = opendir(".");

    if (d) {
        while ((dir = readdir(d)) != NULL){
            
            printf("%s\n", dir->d_name);
        }
    }

    return 0;
}