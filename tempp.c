#include<stdio.h>

int main(int arc,char *argv[],char *env[]){

    int i=0;
    
    printf("command line arguments : \n");
    for(int i=0;i<arc;i++){
        printf("%s \n",argv[i]);

    }
    
    printf("\nenvironmental variables arguments : \n");
    for(int i=0;env[i]!=NULL;i++)
        printf("%s \n", env[i]);

    return 0;
}