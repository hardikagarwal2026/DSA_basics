#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first=0, last = n-1;
    while(first<last){
        swap(arr[first], arr[last]);
        first++;
        last--;
    }
    for(auto i:arr){
        cout<<arr[i];
    }
    return 0;
}
