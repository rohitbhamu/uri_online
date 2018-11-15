#include <iostream>
#include<iomanip>
using namespace std;
class number{
  int a,b,flag;


public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void number :: getdata(void)
{
  cin>>a;cin>>b;
}
void number:: setdata(void){
  if((b%a)==0 ||(a%b)==0)
  {

    flag=1;
  }else flag=0;


}

  void number :: display(void){
    if(flag==0)
    cout << "Nao sao Multiplos" << '\n';
    else
    cout << "Sao Multiplos" << '\n';
  }
   int main(int argc, char const *argv[]) {
    number a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
