#include<bits/stdc++.h>
using namespace std;
// #include <stdlib.h>
int main(){
    // pair
    pair <int,int> p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    //nested pair
    pair<int ,pair<int,int>> k={1,{2,3}};
    cout<<k.first<<" "<<k.second.first<<" "<<k.second.second<<endl;
    pair<int,int> arr[]={{1,2},{2,3},{3,4},{4,5}};
    //pair printing
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;

    }
    // vector
    vector <int> v;
    v.push_back(1);
    // emplace_back is faster than push back
    v.emplace_back(2);
    
    vector<pair<int,int>> vp;
    vp.push_back({1,2});
    vp.push_back({2,3});

    // predefined size and asigned vlaue || visual representation [20,20,20,20,20] size=5
    vector<int> k(5,20);

    // predefined sized vector || visual representation [0,0,0,0,0] size=5
    vector<int> j(5);
    
    // coping vector
    vector<int> v3={1,3,4,5};
    vector<int> v4(v3);
    // printing vector using iterator
    for(vector<int>::iterator it=v4.begin();it!=v4.end();it++){
        cout<<*(it)<<endl;
    }
    // printing vector using auto method
    for(auto i:v4){
        cout<<i<<" ";
    }
    cout<<endl;
    // deleting vector element // v4=[1,3,4,5] deleted element 3  
    v4.erase(v4.begin()+1);
    for(auto i:v4){
        cout<<i<<" ";
    }
    // deleting vector element in a range // v4=[1,3,4,5] deleting range 3 to 4
    v4.erase(v4.begin()+1,v4.begin()+3);
    for(auto i:v4){
        cout<<i<<" ";
    }
    //insertion in vector
    v4.insert(v4.begin(),0);
    v4.insert(v4.begin()+1,2,1);
    for(auto i:v4){
        cout<<i<<" ";
    }
    //finding out vector size
    cout<<v4.size();
    //pop out the last element
    v4.pop_back();
    //swap
    v4.swap(v);
    // earse entire vector
    v.clear();

}