#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	vector<pair<int, string>> transactions;
    	
    	// make a vector ordered by time containing all transactions
    	for(int i = 0; i < n; i++){
    	    transactions.push_back({arr[i], "arrival"});
    	    transactions.push_back({dep[i], "departure"});
    	}
    	
    	sort(transactions.begin(), transactions.end());
    	
    	// allocate platforms as need them, and keep the maximum we needed
    	int platforms = 0, ans = 0;
    	for(int i = 0; i < transactions.size(); i++){
    	    if(transactions[i].second == "arrival") {
    	        platforms++;
    	    }
    	    else if(transactions[i].second == "departure"){
    	        platforms--;
    	    }
    	    ans = max(ans, platforms);
    	}
    	

    	return ans;
    }
};

int main() {
    
}