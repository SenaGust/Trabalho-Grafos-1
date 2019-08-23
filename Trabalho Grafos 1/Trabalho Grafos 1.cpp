// Trabalho Grafos 1.cpp : Este arquivo contém a função 'main'.
// Primeira tarefa: Criar uma matriz adjascente

#include <iostream>
using namespace std;

//n >> tamanho da matriz also número de vértices
//0 >> representa a ausência de arestas 
//1 >> representa a presença de arestas 

int main()
{
	//O valor representa a quantidade de linhas e colunas da nossa matriz adjacente
	const int Qtde_Vertices = 4;
	int Grafo[Qtde_Vertices][Qtde_Vertices];

	//	0	1	0   0
	//	1	0	1	0
	//	0	1	0	0
	//	0	0	0	0

	//Instanciando cada campo da matriz
	for (size_t linha = 0; linha < Qtde_Vertices; linha++)
		for (size_t coluna = 0; coluna < Qtde_Vertices; coluna++)
			Grafo[linha][coluna] = 0;

	//Perguntamos quantas ?arestas a matriz possui?
	int Qtde_Arestas = 0;
	int LinhaAresta = 0;
	int ColunaAresta = 0;
	
	cout << "Digite a quantidade de arestas: ";
	cin >> Qtde_Arestas;

	//De alguma forma distribuir essas arestas pela matriz
	for (size_t pos = 0; pos < Qtde_Arestas; pos++)
	{
		cout << "Digite o local da " << pos << " aresta: " << endl;
		cout << "Linha: ";
		cin >> LinhaAresta;
		cout << "Coluna: ";
		cin >> ColunaAresta;
		
		//Adicionar existência da aresta na matriz
		if (LinhaAresta != ColunaAresta)
			Grafo[LinhaAresta][ColunaAresta] = 1;
		else
			cerr << "Ocorreu um erro causado pelo usuário.";

		cout << "\n";
	}
	cout << "\n";
	cout << "Exibindo matriz" << endl;

	//Exibindo matriz
	for (size_t linha = 0; linha < 4; linha++)
	{
		for (size_t coluna = 0; coluna < 4; coluna++)
			cout << Grafo[linha][coluna] << " ";

		cout << "\n";
	}
}