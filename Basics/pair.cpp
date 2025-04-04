// Pairs
// pair<int,int>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <pair<int,int>> hardik = {{1,2},{3,4}};
    for(auto i : hardik){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}


// pair<string,pair<int,int>>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <pair<string,pair<int,int>>> hardik = {{"hardik",{1,2}},{"deepanshu",{3,4}}};
    for(auto i : hardik){
        cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
    }
    
    return 0;
}

