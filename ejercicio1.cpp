#include <iostream>
using namespace std;

struct NodeType {
    int component;
    int link;
};

NodeType node[100];
int head;
int currPtr;

int main() {
    // Inicialización de los nodos para propósitos de demostración
    head = 0;
    currPtr = 0;

    // Supongamos que la lista tiene al menos 3 elementos para el ejemplo
    node[0].component = 10;
    node[0].link = 1;
    node[1].component = 20;
    node[1].link = 2;
    node[2].component = 30;
    node[2].link = -1;  // -1 indica el final de la lista

    // a) Acceda al miembro de componente del primer elemento de la lista.
    int firstComponent = node[head].component;
    cout << "primer componente: " << firstComponent << endl;

    // b) Avance currPtr para que apunte al siguiente elemento.
    currPtr = node[currPtr].link;
    cout << "Puntero actual después de avanzar: " << currPtr << endl;

    // c) Tome acceso al miembro de componente del siguiente elemento (el que sigue después del elemento actual).
    int nextComponent = node[node[currPtr].link].component;
    cout << "siguiente componente: " << nextComponent << endl;

    // d) Acceda al miembro del componente del elemento que sigue al siguiente elemento.
    int nextNextComponent = node[node[node[currPtr].link].link].component;
    cout << "Siguiente del siguiente componente: " << nextNextComponent << endl;

    return 0;
}

