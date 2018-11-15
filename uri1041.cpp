#include <iostream>
#include<iomanip>
using namespace std;
class number{
  float x,y;int flag;



public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void number :: getdata(void){
  cin>>x;
  std::cin >> y;
}
void number:: setdata(void){
  if(x==0&&y==0) flag=0;
  else if(x==0)flag=6;
  else if(y==0)flag =5;
  else if(x>0&&y>0)flag=1;
  else if(x<0&&y>0)flag=2;
  else if(x<0&&y<0)flag=3;
  else if(x>0&&y<0)flag=4;

}

  void number :: display(void){
    if(flag==0)std::cout << "Origem" << '\n';
    if(flag==1)std::cout << "Q1" << '\n';
    if(flag==2)std::cout << "Q2" << '\n';
    if(flag==3)std::cout << "Q3" << '\n';
    if(flag==4)std::cout << "Q4" << '\n';
    if(flag==5)std::cout << "Eixo X" << '\n';
    if(flag==6)std::cout << "Eixo Y" << '\n';
  }
   int main(int argc, char const *argv[]) {
    number a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
