/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<bits/stdc++.h>

using namespace std;

void patternOne(int row){

    if(row==0){
        return;
    }

    patternOne(row - 1);
    for(int i=1;i<=row;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main(){

    patternOne(5);
    return 0;
}