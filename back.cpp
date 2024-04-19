#include<bits/stdc++.h>
using namespace std;

int backtrack(int i,int n){
    if(i<1){
        return 0;

    }
    else{
        backtrack(i-1,n);
        cout<<i<<" ";
    }
}
int main(){
    backtrack(3,3);
}