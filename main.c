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
    for(i=1;i<20;i=i+2)
    {

        printf("%d \n",i);

    }
    
}

void pair(){
    int j=0;
    for(j=0;j<20;j=j+2)
    {

        printf("%d \n",j);

    }
    
}

int main(int argc, char** argv) {
    

    pthread_create(&impair(),NULL,&pair(),NULL);
    pthread_exit(0);
    return (EXIT_SUCCESS);
}

