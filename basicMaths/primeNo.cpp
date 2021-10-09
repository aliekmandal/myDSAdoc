//Program to check prime number

#include<bits/stdc++.h>

using namespace std;

bool sol( int n){
	if(n<=1){
		return false;
	}
	
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
		
		return true;
	}
	
}

int main(){
	
	int x;
	cin>>x;
	
	sol(x)?cout<<"Prime Number":cout<<"Not Prime";
	
	
	
	
	
	
	return 0;
}
