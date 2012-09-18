/* 
 * File:   main.c
 * Author: vincent
 *
 * Created on 18 septembre 2012, 09:09
 */

#include <stdio.h>
#include <stdlib.h>
int i;

/*
 * 
 */

void impair() {
    while (i < 1000) {
        if (i % 2 == 1) {
            printf("%d \n", i);

        }
        usleep(1);
    }
    pthread_exit(NULL);



}

void pair() {
    while (i <= 1000) {
        if (i % 2 == 0) {
            printf("%d \n", i);

        }
        usleep(1);
    }
    pthread_exit(NULL);

}

int main(int argc, char** argv) {

    //void* a;
    //void* b;
    pthread_t thpair, thimpair;


    pthread_create(&thpair, NULL, (void*) pair, NULL);
    pthread_create(&thimpair, NULL, (void*) impair, NULL);
    // printf("%d \n",i);
    for (i = 1; i < 1000; i++) {
        usleep(1);
    }

    return (EXIT_SUCCESS);
}

