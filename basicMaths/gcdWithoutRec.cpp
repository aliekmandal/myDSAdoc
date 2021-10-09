//Program to find Greatest Common Factor(GCD)

#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if(a==0){
		return b;
	}
	
	if(b==0){
		return a;
	}
	
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		if(a<b){
			b=b-a;
		}
	}
	return a;
}

int main(){
	
	cout<<gcd(6,15);
	return 0;
}
