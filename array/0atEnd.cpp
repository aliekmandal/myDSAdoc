//Time Complexity: O(n)
//Moving all zeros at the end
#include<bits/stdc++.h>

using namespace std;

void sol(int arr[], int n){
	
	int count=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i], arr[count]);
			
			count ++;
		}
		
	}
	
}

int main(){
	
	int arr[]={4,0,6,0,2,0,7};
	
	int n=7;
	
	sol(arr,n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
