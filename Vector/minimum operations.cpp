#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int operations = 0;
    for(int i=0;i<n;i++){
        if(i==0 || v[i]!=v[i-1]){
            operations++;
        }
    }
    cout<<operations;
    return 0;
}