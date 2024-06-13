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

    Node* fourth = new Node;
    fourth->componente = 4;
    fourth->next = NULL;

    // Enlazar los nodos
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Suponemos que currPtr está apuntando a second
    Node* currPtr = second;

    // a) Tome acceso al miembro componente del primer elemento de la lista
    int primerComponente = head->componente;
    std::cout << "Miembro componente del primer elemento: " << primerComponente << std::endl;

    // b) Avance currPtr para que apunte al siguiente elemento
    currPtr = currPtr->next;
    std::cout << "Nuevo currPtr->componente después de avanzar: " << currPtr->componente << std::endl;

    // c) Acceda al miembro del componente del siguiente elemento (el que sigue después del elemento actual)
    int siguienteComponente = currPtr->next->componente;
    std::cout << "Miembro componente del siguiente elemento: " << siguienteComponente << std::endl;

    // d) Tomé acceso al miembro del componente del elemento que sigue al siguiente elemento
    int siguienteSiguienteComponente = currPtr->next->next->componente;
    std::cout << "Miembro componente del elemento que sigue al siguiente: " << siguienteSiguienteComponente << std::endl;

    // Liberar la memoria (en un caso real, se liberaría toda la lista adecuadamente)
    delete fourth;
    delete third;
    delete second;
    delete head;

    return 0;
}

