#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    PS: an array of 2N+1 numbers all appearing twice except 1. find the number*/
    vector<int> arr={1,3,5,4,3,1,5};
    int XOR=0;
    for(auto x:arr){
        XOR=XOR^x;
    }
    cout<<XOR<<endl;
    return 0;
}