//Code

#include<bits/stdc++.h>
using namespace std;
int chec(char* str){
    int len=strlen(str);
    int ans=str[0]-'0';
    for(int i=0;i<len-1;i+=2){
        int j=i+1;
        if(str[i]=='A'){
            ans=ans & (str[0]-'0');
        } else if(str[i]=='B'){
            ans=ans | (str[0]-'0');
        }
        else if(str[i]=='C'){
            ans=ans ^ (str[0]-'0');
        }
    }
    return ans;
}
int main(){
    char pass[100];
    cin>>pass;
    cout<<chec(pass);
}
