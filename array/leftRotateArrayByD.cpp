
#include<bits/stdc++.h>

using namespace std;

void rev(int arr[], int low , int high){
	int temp;
	while(low<high){
		swap(arr[low], arr[high]);
		low++;
		high--;
	}
}

void sol(int arr[], int n, int d){
	/*
	TC: O(n)
	AS:O(1)
	*/

	rev(arr, 0, d-1);
	rev(arr, d, n-1);
	rev(arr, 0, n-1);	
	
}

void sol2(int arr[], int n, int d){
	
	/*
	TC: O(n)
	AS: O(n)
	*/
	
	int temp[d];
	
	for(int i=0;i<d;i++){
		temp[i]=arr[i];
	}
	
	for(int i=d; i<n ;i++){
			arr[i-d]=arr[i];
	}
	
	for(int i=0;i<d;i++){
		arr[n-d+i]=temp[i];
	}
	
	
}

int main(){
	
	int arr[]={5,3,6,0,0,0};
	int n=6;
	int d=3;
	
	sol(arr, n, d);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
