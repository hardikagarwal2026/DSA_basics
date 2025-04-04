#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    map<int,int, greater<int>> freq;
    for(auto i: v){
      freq[i]++;
    }
    int maxsum = 0;
    int count = 0;
    for(auto it = freq.begin(); it != freq.end(); it++){
        if(count==m){break;}
        maxsum += it->first * it->second;
        count++;
    }
    cout<<maxsum<<endl;
    }
    return 0;
}