#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	string numero;
	getline(cin, numero);
	
	for(int i=numero.length()-1; i >-1; i--)
	{
		for(int o=0; o <= i; o++)
		{
			cout << numero[o];
		}
		cout << endl;
	}
	return 0;
}