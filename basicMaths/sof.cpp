//sieve of eratosthenes
//we can find whether a number is prime or not
//find number of divisors in O(n(log(log(n)))
//<-----    only works for isPrime<=100    ------>
//you can increase value from 100 to desired in line 22 and 24 for algo to work for greater than 100


#include <bits/stdc++.h>

using namespace std;

int main(){
	
	
	vector<int> div(100+1 , 1);// array to store 1 or 0 for every i
	
	//if div[i]==0 "i" is not prime 
	//else prime
	
	div[1]=0; //as 1 is not prime
	
	for(int i = 2 ; i <= 100 ; i++){
		if(!div[i]) continue;
		
		for(int j = i*i ; j <= 100 ; j+=i){
			div[j]=0;
		}
	}
	
	int isPrime;
	cin >> isPrime ;
	
	if(div[isPrime]){
		 cout << "Prime" ;
	}
	
	else{
		cout<<"Not Prime";
	} 
	    
}