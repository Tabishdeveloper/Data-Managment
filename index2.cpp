#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    if(name == "Tabish Almas"){
        cout<<"Welcome\n";
    }
    return  0;
}