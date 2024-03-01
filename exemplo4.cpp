#include <iostream>
using namespace std;

void mostra_array1(int p[])
{
	for(int i=0; i<5; ++i)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	//p[0] = 99;
}

void mostra_array2(int p[])
{
	for(int i=0; i<5; ++i)
	{
		cout << *p << " ";
		p++;
	}
	cout << endl#include <iostream>
using namespace std;
;
}

void mostra_endereco_array(int p[])
{
	for(int i=0; i<5; ++i)
	{
		cout << p << " ";
		p++;
	}
	cout << endl;
}

int main(int argc, char** argv)
{
	int a[5] = {10, 20, 30, 40, 50};
	
	cout << "1. posicao: " << a[0] << endl;
	mostra_array1(a);
	mostra_array2(a);
	mostra_endereco_array(a);
	
	return 0;
}