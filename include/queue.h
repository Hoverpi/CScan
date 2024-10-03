#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdbool.h>

// Definición de tipo opaco (no se revela la implementación interna)
typedef struct strQueue* Queue;

Queue queue_create(void (*destructor)(void*));  // Crea un ejemplar Queue con memoria dinámica
                                                // y asigna NULL, NULL, 0 y destructor.
int queue_size(Queue);         // Extrae el tamaño de la cola
Bool queue_isEmpty(Queue);     // ¿El primero es nulo?
Type queue_peek (Queue);       // Consulta quién está al frente (no elimina)
void queue_offer(Queue, Type); // Se forma uno nuevo (colocarlo al final)
Type queue_poll(Queue);        // Atiende al que está al frente (elimina)
void queue_destroy(Queue);     // Elimina a todos los nodos y a la cola misma

#endif