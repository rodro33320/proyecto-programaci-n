#include <iostream>

struct Node {
    int componente;  // Miembro de componente
    Node* next;      // Puntero al siguiente nodo
};

int main() {
    // Crear algunos nodos para el ejemplo
    Node* head = new Node;
    head->componente = 1;
    head->next = NULL;

    Node* second = new Node;
    second->componente = 2;
    second->next = NULL;

    Node* third = new Node;
    third->componente = 3;
    third->next = NULL;

    // Enlazar los nodos
    head->next = second;
    second->next = third;

    // Suponemos que currPtr está apuntando a second
    Node* currPtr = second;

    // Crear un nuevo nodo
    Node* newNode = new Node;
    newNode->componente = 100;
    newNode->next = NULL;

    // Enlazar head al nuevo nodo
    newNode->next = head;
    head = newNode;

    // Fijar currPtr para que apunte al nuevo nodo
    currPtr = newNode;

    // Verificar el resultado
    std::cout << "Nuevo nodo creado con componente: " << currPtr->componente << std::endl;

    // Liberar la memoria 
    delete third;
    delete second;
    delete head;

    return 0;
}

