//Program to find LCM


#include<bits/stdc++.h>

using namespace std;

int lcm(int a, int b){
	int l=max(a,b);
	int s=min(a,b);
	
	for(int i=l;; i+=l){
		if(i%s==0){
			return i;
		}
	}
	
}

int main(){
	
	cout<<lcm(5,7);
	
	return 0;
}
