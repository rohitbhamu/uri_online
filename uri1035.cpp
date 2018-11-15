#include <iostream>
#include<iomanip>

using namespace std;
class point{
  int A,B,C,D,flag;

public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void point :: getdata(void){
  cin>>A;cin>>B;cin>>C;cin>>D;
}
void point:: setdata(void){
  if(B>C&&D>A&&(C+D)>(A+B)&&C>0&&D>0&&(A%2)==0){
    flag=1;
  }
  else flag=0;


}

  void point :: display(void){
    if(flag==1) std::cout << "Valores aceitos" << '\n';

    else std::cout << "Valores nao aceitos" << '\n';

  }
   int main(int argc, char const *argv[]) {
    point a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
