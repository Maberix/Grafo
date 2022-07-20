#include <iostream>

using namespace std;

class nodo{
public:
    int arista;
    int vertice;
    nodo *siguiente;
};
class Vertice{};
class Arista
{
	int origen;
    int destino;
    int peso;
	Arista* sig;

public:
	Arista(int origen, int destino, int peso);
};

void InsertaArista(int origen, int destino, int peso)
{
	if (origen == NULL)
		cout << "El vertice origen no existe" << endl;

	if (destino == NULL)
		cout << "El vertice destino no existe" << endl;

	if (origen != NULL && destino != NULL)
	{
		Arista* nueva = new Arista(origen, destino, peso);

		if (origen->arista == NULL)
			origen->arista = nueva;
		else
		{
			Arista* j = origen->arista;

			while (j->sig != NULL)
				j = j->sig;

			j->sig = nueva;
		}
	}
}

void RecorridoAnchura(string origen)
{
	if (origen != NULL)
	{
		cout << "Origen: " << origen << endl;
		cout << "En anchura: ";
		queue<int> cola;

		while ()
		{
			list<int>::iterator iter = find(lista.begin(), lista.end(), Actual);

			if (iter == lista.end())
			{
				cout << Actual->nombre << ", ";
				lista.push_back(Actual);
			}

			Arista* i = Actual->arista;
		}
	}
}

void Grafo::RecorridoProfundidad(string origen)
{
	if (origen != NULL)
	{
		cout << "Origen: " << origen << endl;
		cout << "En profundidad: ";
		stack<int> pila;

		while ()
		{
			list<int>::iterator iter = find(lista.begin(), lista.end(), Actual);

			if (iter == lista.end())
			{
				cout << Actual->nombre << ", ";
				lista.push_back(Actual);
			}

			Arista* i = Actual->ari;
		}
	}
}

int main () {

}
