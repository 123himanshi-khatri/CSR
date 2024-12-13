#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num=3;
    int bit=0,ans=0;
    int i=0;
    bit=num&1;
    while(num!=0){
     bit=num&1;
     ans=(bit*pow(10,i))+ans;
    num=num>>1;
    i++;
    }
    cout<<ans;

}