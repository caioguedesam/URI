#include <bits/stdc++.h>
using namespace std;

/*URI 1245 - Botas Erradas
Esse é um problema simples, embora eu tenha demorado muito
tempo nele por motivo algum. Resolvi da seguinte forma:
Tem dois vetores que armazenam as botas dos pés direitos
e esquerdos, respectivamente. Cada bota entrada incrementa
um inteiro no seu vetor, na posição do tamanho (ex.: uma
bota 38 D realiza o incremento d[38]++).
Após todas as botas da rodada, o programa vê qual o número
de cada posição correspondente nos dois vetores é o mínimo
(que representa o número de pares) e incrementa uma variável
pares, que é a resposta.
*/

int main() {
	int turns, size, pairs = 0;
	char feet;
	
	while(cin >> turns) {
		vector<int> d(100);
		vector<int> e(100);
		
		//Guardando botas nos vetores respectivos
		for(int i = 0; i < turns; i++) {
			cin >> size >> feet;
			if(feet == 'D')
				d[size]++;
			else
				e[size]++;
		}
		//Checando o número de botas iguais
		for(int i = 0; i < 100; i++) {
			pairs += min(d[i],e[i]);
		}

		//Mostrando o total de pares
		cout << pairs << endl;

		//Isso limpa a variável pares de botas
		pairs = 0;
	}

	return 0;
}