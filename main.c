/* 
 * File:   main.c
 * Author: vincent
 *
 * Created on 18 septembre 2012, 09:09
 */

#include <stdio.h>
#include <stdlib.h>
int i;
pthread_mutex_t mutex;

/*
 * 
 */

void impair() {

    while (1) {
        if (i % 2 == 1) {
            printf("%d \n", i);

        }
        usleep(1);
    }
    pthread_exit(NULL);



}

void pair() {
    int j;
    while (1) {
        pthread_mutex_lock(&mutex);
        for (j = 0; j < 20; j++) {
            if (i % 2 == 0) {
                printf("%d \n", i);

            }
            else
            {
                usleep(1);
            }
            usleep(1);
        }
    }
    pthread_mutex_unlock(&mutex);
    usleep(1);
    pthread_exit(NULL);

}

int main(int argc, char** argv) {

    //void* a;
    //void* b;
    pthread_t thpair, thimpair;


    pthread_create(&thpair, NULL, (void*) pair, NULL);
    pthread_create(&thimpair, NULL, (void*) impair, NULL);
    // printf("%d \n",i);
    for (i = 1; i <= 10000; i++) {
        usleep(1);
    }

    return (EXIT_SUCCESS);
}

