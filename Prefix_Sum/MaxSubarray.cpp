//O(n square) - Time Complexity
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int u;cin>>u;
        v.push_back(u);
    }
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            int sum = accumulate(v.begin()+i, v.begin()+j, 0);
            maxsum = max(maxsum, sum);
        }
    }
    cout<<maxsum<<" ";
    return 0;
}

//O(n)- Time Complexity
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int u;cin>>u;
        v.push_back(u);
    }
    int sum=0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        sum = sum + v[i];
        max_sum = max(sum, max_sum);
        if(sum<0) sum =0;
    }
    cout<<max_sum;
    return 0;
}
