#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class area{
  double A,B,C,triangle,circle,trapezido,quadardo,rectangle;

public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void area :: getdata(void){
  cin>> A;cin>>B;cin>>C;
}
void area:: setdata(void){
  triangle=(1.0/2)*A*C;
  circle=3.14159*C*C;
  trapezido=(A+B)*(C/2);
  quadardo=B*B;
  rectangle=A*B;
}

  void area :: display(void){
    std::cout << std::setprecision(3) << std::fixed;
    std::cout << "TRIANGULO: "<< triangle << '\n';
    std::cout << "CIRCULO: "<< circle << '\n';
    std::cout << "TRAPEZIO: "<< trapezido << '\n';
    std::cout << "QUADRADO: "<< quadardo << '\n';
    std::cout << "RETANGULO: "<< rectangle << '\n';


  }
   int main(int argc, char const *argv[]) {
    area a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
