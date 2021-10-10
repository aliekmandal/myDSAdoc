//Program to reverse an array

#include<iostream>
using namespace std;

void sol(int arr[], int n){
	int temp;
	int low=0;
	int high=n-1;
	
	while(low<high){
		temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		
		low++;
		high--;
		
	}
	
	
}

int main(){
	
	int arr[]= {3,6,4,9,0,7,1};
	
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	sol(arr, n);
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<< " ";
		
	}
	
	return 0;
}
