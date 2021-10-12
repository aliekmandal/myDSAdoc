//TC: O(n)    AS:O(1)

#include<bits/stdc++.h>

using namespace std;

int sol(int arr[], int n){
	int maxDiff=arr[1]-arr[0];
	
	int minElement=arr[0];
	
	
	for(int i=0;i<n;i++){
		if(arr[i]-minElement > maxDiff){
			maxDiff= arr[i]-minElement;
		}
		
		
		if(arr[i]<minElement){
			minElement= arr[i];
		}
		
	}
	
	
	return maxDiff;
}

int main(){
	
	int arr[] = {1, 2, 90, 10, 110};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  cout<<sol(arr,n);;
	
	return 0;
}
