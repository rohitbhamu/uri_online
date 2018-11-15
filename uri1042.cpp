#include <iostream>
#include<iomanip>
using namespace std;
class number{
  int a[3],d,e,f;



public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void number :: getdata(void){
  cin>>a[0];cin>>a[1];cin>>a[2];
}
void number:: setdata(void){
  d=a[0];e=a[1];f=a[2];int n=3;
  int temp,max=a[0];
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(a[j]>a[j+1]){
        temp =a[j];a[j]=a[j+1];a[j+1]=temp;
      }
    }

  }


}

  void number :: display(void){
    std::cout << a[0]<<'\n'<<a[1]<<'\n'<<a[2]<<'\n' << '\n';
    std::cout << d<<'\n'<<e<<'\n'<<f << '\n';
  }
   int main(int argc, char const *argv[]) {
    number a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
