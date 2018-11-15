#include <iostream>
using namespace std;

class convert{
  float farenhite;
  float celcius;
public:
  void getdata(void);
  void display(void);

};

void convert :: getdata(void){
  cout<< "Enter temperature in farenhite"<<'\n';
  cin>>farenhite;
}
void convert :: display(void){
  celcius=(farenhite-32)*(5.0/9);
  cout<<"Temperature in Celcius :"<<celcius<<'\n';
}
int main(){
  convert f;
  f.getdata();
  f.display();
  return 0;
}
