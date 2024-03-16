#include<bits/stdc++.h>
using namespace std;
int main(){
    //list

    list<int> ls;
    //push
    ls.push_back(1);
    ls.emplace_back(2);
    //push at front
    ls.push_front(0);
    //pop back
    ls.pop_back();
    //pop front
    ls.pop_front();

    // stack
    stack<int> st;
    //push
    st.push(1);
    st.emplace(2);
    //show the top
    cout<<st.top();
    // size
    cout<<st.size();
    

}