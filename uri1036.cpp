#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;
class number{
  int flag;
  float A,B,C,R1,R2,D;

public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void number :: getdata(void){
  cin>>A;cin>>B;cin>>C;
}
void number:: setdata(void){
  D=B*B-4*A*C;
  if(A==0) {
    flag=0;
    return;
  }
  else if(D<0){
    flag=0;
    return;
  }
  else{
    R1=(-B+sqrt(D))/(2*A);
    R2=(-B-sqrt(D))/(2*A);
    flag=1;

  }


}

  void number :: display(void){
    if(flag==0){
      std::cout << "Impossivel calcular" << '\n';
    }
    else{
      std::cout << std::setprecision(5) << std::fixed;
      std::cout << "R1 = "<<R1 << '\n';
      std::cout << "R2 = "<<R2 << '\n';
    }


  }
   int main(int argc, char const *argv[]) {
    number a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
