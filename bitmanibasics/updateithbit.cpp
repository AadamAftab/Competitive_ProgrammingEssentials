#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, val;
    cin>>n>>i>>val;
    n = (n & ~(1 << i)) | (val << i);
    cout<<n<<endl;
    return 0;
}