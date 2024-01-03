#include<iostream>
#include<string>
using namespace std;

struct record{
    int oht1 = 0;
    int oht2 = 0;
};
void tabish( record num);

int main(){
    record student = {};
    
    
    cout<<"Enter the marks : ";
    cin>>student.oht1;
    cout<<"Enter the marks : ";
    cin>>student.oht2;
    
    
    cout<<"==========================================="<<endl;
    
    tabish(student);
    
    
    
    

    
}
void tabish(record num){
    float avg = (num.oht1 + num.oht2)/2;
    cout<<avg;

    
    

}
