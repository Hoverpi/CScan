#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdbool.h>

// Definición de tipo opaco (no se revela la implementación interna)
typedef struct strQueue* Queue;

// Declaración de las funciones públicas
Queue queue_create(void (*destructor)(void*));  // Crea la cola
int queue_size(Queue);                    // Devuelve el tamaño de la cola
bool queue_isEmpty(Queue);                 // Verifica si la cola está vacía
void queue_peek(Queue);                  // Consulta el elemento al frente
void queue_append(Queue, void);      // Añade un nuevo elemento a la cola
void queue_pop(Queue);                  // Remueve el elemento al frente
void queue_destroy(Queue);                // Destruye la cola y libera memoria

#endif