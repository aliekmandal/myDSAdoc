//finding divisors from 1 --- n
//TC : O(n log(n))

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> div(n+1);
	
	for(int i = 1 ; i <= n ; i++){
		for(int j = i ; j <= n ; j += i){
			div[j]++;
		}
	}    
	
	for(int i : div){
		cout << i << "\n" ;
	}
	
	return 0;
}