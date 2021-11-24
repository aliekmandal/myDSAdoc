#include<iostream>

using namespace std;

int BSrecursion(int arr[], int target, int start, int end){
    int mid = start + (end - start)/2;

    if(arr[mid]==target){
        return mid;
    }

    else if(arr[mid]>target){
        return BSrecursion(arr, target, start, mid - 1);
    }

    else{
        return BSrecursion(arr, target, mid + 1, end);
    }
    return -1;
}

int main(){
    int arr[] = { 2, 3, 4, 10, 40 };
    int target = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = BSrecursion(arr, target ,0, n - 1);

    cout<<result;

    return 0;
}