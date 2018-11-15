#include <iostream>

using namespace std;
class number{
  float A;int flag;

public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void number :: getdata(void){
  cin>>A;
}
void number:: setdata(void){
  if(A>=0&&A<=25)flag=1;
  else if(A>25&&A<=50)flag=2;
  else if(A>50&& A<=75)flag=3;
  else if(A>75&&A<=100)flag=4;
  else flag=0;

}

  void number :: display(void){
    if(flag==0)printf("Fora de intervalo\n" );
    if (flag==1) {
      std::cout << "Intervalo [0,25]" << '\n';
    }
    if(flag==2)std::cout << "Intervalo (25,50]" << '\n';
    if(flag==3)std::cout << "Intervalo (50,75]" << '\n';
    if(flag==4)std::cout << "Intervalo (75,100]" << '\n';


  }
   int main(int argc, char const *argv[]) {
    number a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
