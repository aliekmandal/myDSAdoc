#include<bits/stdc++.h>

using namespace std;

int main(){
    
    cout<<"Enter Number: ";
    int number;
    cin>>number;
    

    cout<<"Enter the bit (0-31): ";
    int bit;
    cin>>bit;
    

    int mask = 1<<bit;
    mask= number | mask;

    cout<<"End result is: "<<mask;




    return 0;
}