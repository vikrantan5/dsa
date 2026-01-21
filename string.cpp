#include<iostream>

using namespace std;
int main(){
    // string s = "vikranmt singh dnkbddlk ljm";
    // cout<<s;

    // string s;
    // getline(cin , s);
    // cout<<s;
    // cout<<s.size();
    // cout<<endl;
    // string name="vikrant is a good \"good\" boy";
    // cout<<name;
    

    // string s1 ="vikrant";
    // string s2= "singh";
    // s1.push_back('d');

    // string s3 = s1 + s2;
    // string s4 = s1.append(s2);
    // cout<<s3;
    // cout<<s4;


    string name = "vikrant singh";
    // int start = 0;
    // int end = name.size()-1 ;
    // while(start <= end){
    //     swap(name[start] , name[end]);
    //     start++;
    //     end--;
    // }
    // cout<<name;

    // int size = 0;
    // while(name[size] != '\0'){
    //     size+=1;

    // }
    // cout<<size;
    string chacha = "naman";
    int start = 0;
    int end =chacha.size()-1;
    while(start<end){
        if(chacha[start] != chacha[end]){
           cout<<"not a palinderome";
           return 0;
        }
        start++;
        end--;
    }

    cout<<"this is a plindrome";
}