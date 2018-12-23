#include <bits/stdc++.h>

using namespace std;

/*
URI 1546 - Feedback
Esse é um problema muito fácil.
A solução é apenas um switch que checa qual o número
e imprime o responsável correspondente.
*/

int main() {

	int n, k, temp;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> k;
		for(int j = 0; j < k; j++) {
			cin >> temp;
			switch(temp) {
				case 1:
					cout << "Rolien" << endl;
					break;
				case 2:
					cout << "Naej" << endl;
					break;
				case 3:
					cout << "Elehcim" << endl;
					break;
				case 4:
					cout << "Odranoel" << endl;
					break;
			}
		}
	}

	return 0;
}