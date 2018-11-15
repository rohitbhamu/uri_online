#include <iostream>
#include<iomanip>
using namespace std;
class number{
  float quantity,code;
  double price;


public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void number :: getdata(void){
  cin>>code;
  cin>>quantity;
}
void number:: setdata(void){
  if(code==1)price=4.00*quantity;
  else if(code==2)price =4.50*quantity;
  else if(code==3)price=5.00*quantity;
  else if(code==4)price=2.00*quantity;
  else if(code==5)price=1.50*quantity;
}

  void number :: display(void){
    std::cout << std::setprecision(2) << std::fixed;
    std::cout << "Total: R$ "<<price << '\n';
  }
   int main(int argc, char const *argv[]) {
    number a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
