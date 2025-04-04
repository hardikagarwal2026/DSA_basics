//prefix sum - 1D
//by appending same vector for prefix sum calculation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int u;
        cin>>u;
        v.push_back(u);
    }
    int l,r;
    cin>>l>>r;
    for(int i=1;i<n;i++){
        v[i]=v[i]+v[i-1]; //appending v for creating prefix sum
    }
    cout<<endl;
    int sum = v[r]-v[l-1];
    cout<<sum;
    return 0;
}

//by creating new vector "prefix_sum" for prefix sum calculation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int u;
        cin>>u;
        v.push_back(u);
    }
    int l,r;
    cin>>l>>r;
    vector<int> prefix_sum(n);
    prefix_sum[0]=v[0];
    for(int i=1;i<n;i++){
        prefix_sum[i]=prefix_sum[i-1]+v[i];
    }
    int sumltor= prefix_sum[r] - prefix_sum[l-1];
    cout<<sumltor<<" ";
    return 0;
}


