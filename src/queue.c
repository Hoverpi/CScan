#include <stdlib.h>
#include <stdio.h>
#include "../queue.h"

typedef struct {
    char ip[16];  // Almacena la dirección IP
    int port;     // Almacena el número de puerto
} NetInfo;

// Definición interna de la estructura (no visible desde fuera)
typedef struct strNode {
    Netinfo *net;
    struct strNode* prev;
};

typedef struct strNode *Node;

typedef struct strQueue {
    struct strNode* first;
    struct strNode* last;
    int size;
    void (*destructor)();  // Puntero a función destructor
};

Queue queue_create(void (*destructor)()) {
    Queue q = (Queue) calloc(1, sizeof(strQueue));
    q -> destructor = destructor; 

    return q;
}

int queue_size(Queue q) {
    if(q != NULL) {
        return q -> size;
    } else {
        return -1;
    }
}

bool queue_isEmpty(Queue q) {

}