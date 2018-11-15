#include <iostream>
#include<iomanip>

using namespace std;
class car{
  int distance;
  double fuel,milage;

public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void car :: getdata(void){
  cin>>distance;cin>>fuel;
}
void car:: setdata(void){
    milage=distance/fuel;

}

  void car :: display(void){
    std::cout << std::setprecision(3) << std::fixed;
    cout<<milage<<" km/l"<<'\n';


  }
   int main(int argc, char const *argv[]) {
    car a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
