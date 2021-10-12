//Sorting 0 1 2 without using sorting

#include<bits/stdc++.h>

using namespace std;

int sol( int a[], int n){
	
	int lo=0;
	int mid=0;
	int hi= n-1;
	   while (mid <= hi) {
        switch (a[mid]) {
 
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
		
	}
	
	


int main(){
	
	int arr[]={0,2,2,1,0,2,1,1,0};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	sol(arr, n);
	
	for(int i=0;i<n ;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
