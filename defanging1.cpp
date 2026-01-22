#include<iostream>
using namespace std;

void defanging(string name){
    string ans = "";
    for(int i = 0 ; i<name.size() ; i++){
        
        if(name[i]=='.'){
            ans = ans +"[.]";
        }
        else{
            ans.push_back(name[i]);
        }
        
    }
    cout<<ans;
}

int main(){
    string name = "1.1.1.1";
    defanging(name);
}