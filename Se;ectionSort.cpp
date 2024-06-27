#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int mini =i;
        for(int j=i+1;j<n;j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;

    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n);
    for(auto it: arr){
        cout<<it<<" ";
    }
}