// In ascending order
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> hardik = {5,4,3,2,1};
    
    auto first = hardik.begin();
    auto last = hardik.end();
    
    sort(first,last);
    
    for(auto i : hardik){
        cout<<i<<" "<<endl;    
    }
    
}


// In ascending order in some defined range
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    vector <int> hardik = {9,8,7,6,5,4,3,2,1};
    auto first = hardik.begin() + 1;
    auto last = hardik.end() - 5;
    sort(first,last);
    for(auto i : hardik){
        
        cout<<i<<" "<<endl;
    }
}


// In descending order using comparator "comp"
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> hardik = {1,2,3,4,5,6,7,8,9};
    auto first = hardik.begin();
    auto last = hardik.end();
    auto comp =[](int a, int b){
        return a>b;
    };
    sort(first,last,comp);
    
    for(auto i : hardik){
        cout<<i<<" ";
    };
    
    return 0;
}






