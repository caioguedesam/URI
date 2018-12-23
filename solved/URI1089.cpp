#include <bits/stdc++.h>

using namespace std;

/*URI 1089 - Loop Musical
Esse é um problema simples, embora eu também tenha demorado
mais do que gostaria. Resolvi da seguinte maneira:
> Tem um contador pk para o número de picos, que é
incrementado ao achar um pico.
> Para achar os picos, crio um vetor com todas as
frequências. Verifico o pico comparando o valor de uma fre-
quência em um dado índice com o anterior e o posterior.
> A primeira e última frequência são comparadas com a última
e a primeira, respectivamente, que são adicionadas no vetor.
> Caso a frequência do "meio" seja menor ou maior que ambas
as duas das "extremidades", é um pico.
*/

int main() {

	int n, pk;
	vector<int> am;
	while(cin >> n && n!=0) {
		pk = 0;
		for(int i = 0; i < n; i++) {
			int tmp;
			cin >> tmp;
			am.push_back(tmp);
		}
		am.insert(am.begin(), am[n-1]);
		am.push_back(am[1]);

		for(int i = 1; i < am.size()-1; i++) {
			int maxpk = max(max(am[i-1], am[i+1]), am[i]);
			int minpk = min(min(am[i-1], am[i+1]), am[i]);
			if(maxpk == am[i] || minpk == am[i]) {
				pk++;
			}
		}
		am.clear();
		cout << pk << endl;
	}

	return 0;
}