#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    
    while(cin >> n >> m && n+m != 0){
        int heads[n], knights[m];

        for(int i = 0; i < n; i++)
            cin >> heads[i];
        for(int i = 0; i < m; i++)
            cin >> knights[i];

        sort(heads, heads+n);
        sort(knights, knights+m);

        int k = 0, coins = 0;
        bool saved = true;
        for(int i = 0; i < n; i++){
            // seleciona cavaleiro k para cortar cabeca i
            while(knights[k] < heads[i] && k < m){
                k++;
            }

            coins += knights[k];
            
            if(k < m) k++;
            else{
                saved = false;
                break;
            }
        }

        if(!saved) cout << "Loowater is doomed!\n";
        else cout << coins << endl;
    }
}