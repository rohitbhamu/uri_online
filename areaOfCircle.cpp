#include <iostream>
#include <iomanip>

using namespace std;
class area{

  double R;

public:
  void getdata(void);
  void display(void);

};

void area :: getdata(void){
  cin>>R;
}

  void area :: display(void){
    double n=3.14159;
    double A;
    A=n*R*R;
    std::cout << std::setprecision(4) << std::fixed;
    cout<<"A="<<A<<'\n';


  }
   int main(int argc, char const *argv[]) {
    area p;
    p.getdata();
    p.display();

    return 0;
  }
