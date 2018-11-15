#include <iostream>
#include<iomanip>
using namespace std;
class number{
  float a[3],area,perimeter;
int flag;


public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void number :: getdata(void){
  cin>>a[0];cin>>a[1];cin>>a[2];
}
void number:: setdata(void){
  int n=3;
  int temp,max=a[0];
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(a[j]>a[j+1]){
        temp =a[j];a[j]=a[j+1];a[j+1]=temp;
      }
    }

  }
  if(a[2]<a[1]+a[0]){
    perimeter=a[0]+a[1]+a[2];
    flag=1;
  }
  else {
    area=(a[2]+a[1])*(a[0]/2.0);
    flag=0;
  }


}

  void number :: display(void){
    std::cout << std::setprecision(1) << std::fixed;
    if(flag==0)std::cout << "Area = "<<area << '\n';
    else std::cout << "Perimetro = "<<perimeter << '\n';
  }
   int main(int argc, char const *argv[]) {
    number a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
