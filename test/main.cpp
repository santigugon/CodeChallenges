#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Grafo {
private:
    int numVertices;
    vector<list<int>> listaAdyacencia;

public:
    Grafo(int vertices) {
        numVertices = vertices;
        listaAdyacencia.resize(vertices);
    }

    void agregarArista(int origen, int destino) {
        listaAdyacencia[origen].push_back(destino);
        listaAdyacencia[destino].push_back(origen); // Si el grafo es no dirigido
    }

    void mostrarListaAdyacencia() {
        for (int i = 0; i < numVertices; ++i) {
            cout << "Nodo " << i << ": ";
            for (const auto& vecino : listaAdyacencia[i]) {
                cout << vecino << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Grafo grafo(5);

    grafo.agregarArista(0, 1);
    grafo.agregarArista(0, 4);
    grafo.agregarArista(1, 2);
    grafo.agregarArista(1, 3);
    grafo.agregarArista(1, 4);
    grafo.agregarArista(2, 3);
    grafo.agregarArista(3, 4);

    grafo.mostrarListaAdyacencia();

    return 0;
}
