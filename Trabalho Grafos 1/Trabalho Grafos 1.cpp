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
	int Grafo[4][4];

	//	0	1	0   0
	//	1	0	1	0
	//	0	1	0	0
	//	0	0	0	0

	//Instanciando cada campo da matriz
	for (size_t linha = 0; linha < 4; linha++)
		for (size_t coluna = 0; coluna < 4; coluna++)
			Grafo[linha][coluna] = 0;

	//Perguntamos quantas ?arestas a matriz possui?
	int Qtde_Arestas = 0;
	int Linha = 0;
	int Coluna = 0;
	
	cout << "Digite a quantidade de arestas: ";
	cin >> Qtde_Arestas;

	//De alguma forma distribuir essas arestas pela matriz
	for (size_t i = 0; i < Qtde_Arestas; i++)
	{
		cout << "Digite o local da " << Qtde_Arestas << " aresta: " << endl;
		cout << "Linha: ";
		cin >> Linha;
		cout << "Coluna: ";
		cin >> Coluna;
		
		//Adicionar existência
		if (Linha != Coluna)
			Grafo[Linha][Coluna] = 1;

		cout << "\n";
	}
	cout << "\n";
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