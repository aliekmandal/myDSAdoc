//this program can be improved using binary search

#include<iostream>

using namespace std;

int sol(int arr[], int n, int k){
	
	int res=0; 
	
	for(int i=0;i<n ;i++){
		
		if(arr[i]==k){
			res++;
		}
	}
	return res;
}

int main(){
	
	int arr[]={1,1,8,6,1,4,1,2,5,7,8,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<sol(arr, n, 1);
	
	
	return 0;
}
