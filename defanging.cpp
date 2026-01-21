#include<iostream>
using namespace std;

int main(){
    string address = "1.1.1.1";
    int start = 0;
    string ans = "";
    for(int i = start ;i<address.size() ; i++){
        if(address[i] =='.'){
            ans= ans+"[.]";
        }
        else{
            ans.push_back(address[i]);
        }
    }
    cout<<ans;
   
    
}