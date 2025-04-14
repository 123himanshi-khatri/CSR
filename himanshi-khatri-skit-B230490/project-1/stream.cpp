#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{int n;
  fstream of1("number.txt",ios::out);
    fstream of2("odd.txt",ios::out);
      fstream of3("even.txt",ios::out);


  cout<<"enter number of data required: \n";
  cin>>n;
  int i=1;
  cout<<"enter numbers \n";
int num;
  while(i<=n){
    cin>>num;
    of1<<num<<endl;
    i++;
    
  }
  of1.close();
  of1.open("number.txt",ios::in);
  int k=1;

 while(k<=n){
    if(k%2==0){
        of3<<k<<endl;

    }
    else{
        of2<<k<<endl;
    }
    k++;
 }
   of1.close();
     of2.close();
       of1.close();






}