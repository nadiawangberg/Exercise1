#include <pthread.h>
#include <stdio.h>

int i = 0;

void* incrementingThreadFunction(){
    for (int j = 0; j < 1000000; j++) {
        i++;
    }

    return NULL;
}

void* decrementingThreadFunction(){
    for (int j = 0; j < 1000000; j++) {
        i--;
    }

    return NULL;
}


int main(){
    //declears thread obj
    pthread_t incrementingThread;
    pthread_t decrementingThread;

    // create the actual thread as living thread
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);

    //waits for the threads to finish
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    return 0;
}
