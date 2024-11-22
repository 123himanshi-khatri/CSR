#include<iostream>
using namespace std;
int main(){
    int arr[]={4, 2, 2, 2, 4};
    int Profit=0;
     int max;
     for(int i=1;i<5;i++){
         if(arr[i]>arr[i-1]){
           Profit= Profit +arr[i]-arr[i-1];
                  }
    
     
}
cout<<"max profit is : \n"<<Profit;
}