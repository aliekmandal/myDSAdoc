/*
1 2 3 4 5
1 2 3 4 
1 2 3
1 2 
1

*/

#include<bits/stdc++.h>

using namespace std;

void patternTwo(int n){

    if(n==0){
        return;
    }

    for(int i=1; i<=n ;i++) {
        cout<<i<<" ";
    }
    cout<<endl;

    patternTwo(n-1);
}

int main(){

    patternTwo(5);
    return 0;
}