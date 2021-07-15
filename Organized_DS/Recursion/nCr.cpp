#include<bits/stdc++.h>
using namespace std;

int comb(int n, int r) {
    if(r==0 || r==n) return 1;

    return (n*comb(n-1, r-1))/r;
}

int c(int n, int r) {
    if(r==0 || r==n) return 1;

    return c(n-1, r-1) + c(n-1, r);
}

int main() {

    int n = 
    10, r = 7;
    if(r>n) 
    cout<< "r cannot be greater than n";
    cout<<comb(n, r);
return 0;
}