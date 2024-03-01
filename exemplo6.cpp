#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int *v;
	int *aux;
	
	v = new int[10];
	
	//Carregando o array
	for(int i=0; i<10; ++i)
	{
		v[i] = i+1;
	}

	// Exibindo os valores do array - 
	// percorrendo através do índice 
	for(int i=0; i<10; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	aux = v; // Guardando o endereco do 1. elemento
		
	// Exibindo os valores do array - 
	// percorrendo através do endereço 
	for(int i=0; i<10; ++i)
	{
		cout << *v << " ";
		v++;
	}
	cout << endl;
	
	v = aux; // Recuperando o endereco do 1. elemento
	
	// Exibindo os valores do array - 
	// percorrendo através do índice 
	for(int i=0; i<10; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	
	delete[] v;
	
	return 0;
}