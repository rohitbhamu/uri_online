#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;
class point{
  double x1,y1,x2,y2,square,distance;

public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void point :: getdata(void){
  cin>>x1;cin>>y1;cin>>x2;cin>>y2;
}
void point:: setdata(void){
  square=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
  distance=sqrt(square);

}

  void point :: display(void){
    std::cout << std::setprecision(4) << std::fixed;
    cout<<distance<<'\n';


  }
   int main(int argc, char const *argv[]) {
    point a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
