#include <iostream>
#include <iomanip>
using namespace std;

#define LIN 5
#define COL 3

void mostra_matriz1(int **p)
{
	for(int i=0; i<LIN; ++i)
	{
		for(int j=0; j<COL; ++j)
		{
			cout << setw(2) << p[i][j] << " |"; 
		}
		cout << endl;
	}
}

void mostra_matriz2(int **p)
{
	int *a;
	for(int i=0; i<LIN; ++i)
	{
		a = *p;
		for(int j=0; j<COL; ++j)
		{
			cout << setw(2) << (*a) << " |";
			a++; 
		}
		p++;
		cout << endl;
	}
}

int main(int argc, char** argv)
{
	int i;
	int j;
	int k;
	int **mat;
	
	mat = (int**)malloc(LIN * sizeof(int));
	
	for(i=0; i<LIN; ++i)
	{
		mat[i] = (int*)malloc(COL * sizeof(int));
	}
	
	k=1;
	for(i=0; i<LIN; ++i)
	{
		for(j=0; j<COL; ++j)
		{
			mat[i][j] = k++; 
		}
	}
	
    mostra_matriz1(mat);
	cout << endl; 
	mostra_matriz2(mat);
	
	free(mat);
	
	return 0;
}