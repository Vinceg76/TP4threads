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

int threadimp(){
    int i=1;
    int sy;
    for(i=1;i<20;i=i+2)
    {
        sy=0;
        printf("%d \n",i);
        sy=1;
        return sy;
    }
    
}

int threadpai(){
    int j=0, sy2;
    for(j=0;j<20;j=j+2)
    {
        sy2=0;
        printf("%d \n",j);
        sy2=1;
        return sy2;
    }
    
}

int main(int argc, char** argv) {
    

    pthread_create(&threadimp(),NULL,&threadpai(),NULL);
    pthread_exit(0);
    return (EXIT_SUCCESS);
}

