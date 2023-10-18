#include <pthread.h>
#include <stdio.h>
int saldo;

void * holaHilo(void *thid){
    printf(format: "Hola desde un hilo" %d\n,*((int *)thid));
    pthread_exit(retval: NULL);
}

void * incrementaSaldo(){
    printf(format: "El saldo actual es %d\n",saldo);

}

int main(){
    pthread_t t;
    saldo = 0;
    int thid = 1;
    pthread_create(newthread: &t, attr:NULL,start_routeine: holaHilo,arg: &thid);
    pthread_exit(retval: NULL);
}