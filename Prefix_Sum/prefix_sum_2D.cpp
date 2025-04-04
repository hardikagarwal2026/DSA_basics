//prefix sum -2D
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int prefix_sum[n][m];
    prefix_sum[0][0] = arr[0][0];
    //first - row
    for(int j=1;j<m;j++){
        prefix_sum[0][j] = prefix_sum[0][j-1] + arr[0][j];
    }
    //first-column
    for(int i=1;i<n;i++){
        prefix_sum[i][0] = prefix_sum[i-1][0] + arr[i][0];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            prefix_sum[i][j] = arr[i][j]+ prefix_sum[i-1][j] + prefix_sum[i][j-1] - prefix_sum[i-1][j-1];
        }
    }
    int u,l,d,r;
    cin>>u>>l>>d>>r;
    int sumofu_l_d_r = prefix_sum[d][r] - prefix_sum[d][l-1] - prefix_sum[u-1][r] + prefix_sum[u-1][l-1];
    cout<<sumofu_l_d_r<<" ";
    return 0;
}