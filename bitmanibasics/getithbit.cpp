#include <bits/stdc++.h>
using namespace std;
int main(){
    //get ith bit of a number
    int n;
    cin>>n;
    int i;
    cin>>i;
    cout<<((n>>i) & 1);
    return 0;
}