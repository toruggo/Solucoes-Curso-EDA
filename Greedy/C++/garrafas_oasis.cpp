/*
    Esse exercício produz a maior quantidade possível de garrafas para um número de litros disponível.

    Pode-se adaptar a historinha para ser o menor número de garrafas possíveis, e mudar o código para sort ao contrário.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;

	cin >> t;

	int n, x, ans = 0;
	while(t--){
		cin >> n >> x;

		int v[n];

		for(int i = 0; i < n; i++)
			cin >> v[i];

		sort(v, v+n);

		ans = 0;
		for(int i = 0; i < n; i++){
			if(x - v[i] >= 0){
				x -= v[i];
				ans++;
			}
			else
				break;
		}

		cout << ans << endl;
	}
}