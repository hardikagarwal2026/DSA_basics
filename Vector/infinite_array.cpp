#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int q;
    cin>>q;
    vector<int> l(q);
    vector<int> r(q);
    for(int i=0;i<q;i++){
        cin>>l[i];
    }
    for(int i=0;i<q;i++){
        cin>>r[i];
    }
    int max_r = *max_element(r.begin(), r.end());
    vector <int> infinite;
    while(infinite.size() < max_r){
        infinite.insert(infinite.end(), v.begin(),v.end());
    }
    vector<int> sum_array(q);
    
    for(int i=0;i<q;i++){
        int sum=0;
        for(int j=l[i]-1;j<r[i];j++){
        sum += infinite[j % n];
        }
        sum_array[i]=sum;
    }
    for(auto i: sum_array){
         cout<<i<<" ";     }
     }
    return 0;
}
