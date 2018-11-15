#include <iostream>
#include<iomanip>

using namespace std;
class point{
  int number,year,month,day;

public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void point :: getdata(void){
  cin>>number;
}
void point:: setdata(void){

    year=number/365;
    month=(number%365)/30;
    day=number%365;
    day=(day%30);

}

  void point :: display(void){
    cout<<year << " ano(s)\n";
    cout<<month<<" mes(es)\n";
    cout<<day<<" dia(s)\n";

  }
   int main(int argc, char const *argv[]) {
    point a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
