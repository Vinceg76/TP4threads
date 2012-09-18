/* 
 * File:   main.c
 * Author: vincent
 *
 * Created on 18 septembre 2012, 09:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

void impair(){
    int i=1;
    for(i=1;i<1000;i=i+2)
    {
        
        printf("%d \n",i);
        usleep(1);
    }

    
}

void pair(){
    int j=0;
    for(j=0;j<=1000;j=j+2)
    {

        printf("%d \n",j);
        usleep(1);

    }

    
}

int main(int argc, char** argv) {
    //void* a;
    //void* b;
    pthread_t thpair,thimpair;
    
    pthread_create(&thpair,NULL,(void*)pair,NULL);
    pthread_create(&thimpair,NULL,(void*)impair,NULL);
    pthread_join(thpair,NULL);
    pthread_join(thimpair,NULL);
    return (EXIT_SUCCESS);
}

