#include <bits/stdc++.h>
using namespace std;

int main() {

	int v1[5], v2[5];
	for(int i = 0; i < 5; i++)
		cin >> v1[i];
	for(int i = 0; i < 5; i++)
		cin >> v2[i];
	
	for(int i = 0; i < 5; i++) {
		if(v1[i] == v2[i]) {
			cout << "N" << endl;
			return 0;
		}
	}
	cout << "Y" << endl;

	return 0;
}