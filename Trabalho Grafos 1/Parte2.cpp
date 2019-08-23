#include <iostream>
#include <list>

using namespace std;

int main()
{
	const int Qtde_Vertices = 4;
	list<int>* adj = new list<int>[Qtde_Vertices]; // cria as listas

	//Perguntamos quantas ?arestas a matriz possui?
	int Qtde_Arestas, primeiroVertice, segundoVertice;
	cout << "Digite a quantidade de arestas: ";
	cin >> Qtde_Arestas;

	for (size_t pos = 0; pos < Qtde_Arestas; pos++)
	{
		cout << "Digite o local da " << Qtde_Arestas << " aresta: " << endl;
		cout << "Primeiro Vertice: ";
		cin >> primeiroVertice;
		cout << "Segundo Vertice: ";
		cin >> segundoVertice;

		if (primeiroVertice != segundoVertice)
		{
			adj[primeiroVertice].push_back(segundoVertice);
			adj[segundoVertice].push_back(primeiroVertice);
		}

		cout << "\n";
	}
	cout << "\n";

	cout << "Exibindo as listas adjacentes" << endl;
	for (size_t i = 0; i < Qtde_Vertices; i++)
	{
		list <int> ::iterator it;
		cout << i;

		for (it = adj[i].begin(); it != adj[i].end(); it++)
			cout << " -> " << *it;
		cout << endl;
	}
}