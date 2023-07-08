/*
  Next Greator Element
*/

//Code
#include<iostream>
#include<stack>
using namespace std;
int ng(int arr[],int n){
    stack<int> st;
    for(int i=0;i<n;i++){
        if(!st.empty() and st.top()<arr[i]){
            cout<<"("<<st.top()<<","<<arr[i]<<")"<<endl;
            
        } st.push(arr[i]);
    }
    if(!st.empty()){
        cout<<"("<<st.top()<<","<<-1<<")"<<endl;
    }
}
int main(){
    int arr[] = {11,12,13,14,15,21,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    ng(arr,n);
    return 0;
}
