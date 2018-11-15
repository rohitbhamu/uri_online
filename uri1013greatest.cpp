#include <iostream>

using namespace std;
class number{
  int A,B,C,max;

public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void number :: getdata(void){
  cin>> A;cin>>B;cin>>C;
}
void number:: setdata(void){
  max=A;
  if(B>max){
    max=B;
  }
  if(C>max)
  {
    max=C;
  }

}

  void number :: display(void){
    std::cout << max<<" eh o maior" << '\n';



  }
   int main(int argc, char const *argv[]) {
    number a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
