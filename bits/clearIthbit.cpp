#include<bits/stdc++.h>

using namespace std;


int main(){
    cout<<"Enter Number: ";
    int number;
    cin>>number;

    cout<<"Enter Bits: ";
    int bit;
    cin>>bit;

    int mask = ~(1<<bit);
    mask = number & mask;

    cout<< mask;




    return 0;
}