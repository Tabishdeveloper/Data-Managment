#include<iostream>
#include<fstream>
using namespace std;

  void validation(){
     int first,last;

    int sum_11=0;

int long a_11[16]; // 4  9  0  4  7  1  0  0  1  5  8  6  2  3  1  4
int long  mul_11[16];
int long a_23[16]={2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1};
    cout<<endl<<"PLease Enter your Master-card / Visa-card Number : ";
for(int i=0;i<16;i++){
    cin>>a_11[i];
}


for(int i=0;i<16;i++){
    mul_11[i]=a_11[i]*a_23[i];
    if(mul_11[i]>9){
        first = mul_11[i]/10;
        last = mul_11[i]%10;
        sum_11= sum_11 + first + last ;

    }
    else{
        sum_11+= mul_11[i];
       
}
}

if(sum_11 % 10 == 0){
    cout<<"\nConguratulation Your Payment Successfully Transferred\n";
}
else{
    cout<<"Sorry Sir,Your Card is not Working\n";
    //goto card3;
    


}

                            }
                            int main(){
                                validation();
                            }
  