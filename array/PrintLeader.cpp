#include<bits/stdc++.h>

using namespace std;

void sol(  int arr[], int n ){
	
  int cLead= arr[n-1]; //Current Leader transversing from right
  cout<<cLead<<" ";
  
  for(int i=n-2;i>=0; i--){
  	if(cLead<arr[i]){
  		cLead= arr[i];
  		cout<<cLead<<" ";
  		
	  }
  	
  }
  
  
  
	
}

int main(){
	
	int arr[]={7, 10 , 4, 10, 6, 5, 2};
	
	int n= sizeof(arr)/sizeof(arr[0]);
	
	sol(arr, n);
	
	
	return 0;
}
