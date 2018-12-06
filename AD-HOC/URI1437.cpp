#include <bits/stdc++.h>
using namespace std;

/*URI 1437 - Esquerda, Volver!
Esse é um problema simples, resolvi da seguinte forma:
o soldado pode estar virado para uma de 4 direções
(norte = 1, leste = 2, sul = 3, oeste = 4).
Cada comando do general faz um incremento ou decremento nesse número.
Se for "D", ele vira para a direita, incrementando.
Se for "E", ele vira para a esquerda, decrementando.
Uma variável pos guarda o valor da posição atual. Se,
em algum momento, pos = 5 ou pos = 0, pos volta para 1 (norte).
*/

int main() {
	int n, pos = 1;
	char inp;
	cin >> n;
	while(n != 0) {
		for(int i = 0; i < n; i++) {
			cin >> inp;
			if(inp == 'D') {
				pos++;
				if(pos == 5)
				 pos = 1;
			}
			else if(inp == 'E') {
				pos--;
				if(pos == 0)
				 pos = 4;
			} 		
		}
		if(pos == 1)
			printf("N\n");
		else if(pos == 2)
			printf("L\n");
		else if(pos == 3)
			printf("S\n");
		else if(pos == 4)
			printf("O\n");
		pos = 1;
		cin >> n;
	}

	return 0;
}
