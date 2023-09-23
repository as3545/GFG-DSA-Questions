//Code

#include<bits/stdc++.h>
using namespace std;
int checkpassword(char str[]){
    int len=strlen(str);
    if(len<4){
        return 0;
    }
    
    bool isd=false, isc=false, isS=false, isN=false;
    for(int i=0;i<len;i++){
    if(str[i]>='0' and str[i]<='9'){
        isd=true;
    }
    else if(str[i]>='A' and str[i]<='Z'){
        isc=true;
    }
    else if(str[i]==' ' or str[i]=='/'){
        isS=true;
    } }
    isN=(str[0]>='0' and str[0]<='9');
    return isd and isc and !isS and !isN;
} 

int main(){
    char password[100];
    cin>>password;
    cout<<checkpassword(password);
    return 0;
}
