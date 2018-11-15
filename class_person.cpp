#include <iostream>
using namespace std;
class person{
  char name[30];
  int age;

public:
  void getdata(void);
  void display(void);

};

void person :: getdata(void){
  cout<<"Enter name of person : ";
  cin>> name;
  cout<<"Enter age of person : ";
  cin>>age;
}

  void person :: display(void){

    cout<<"\n Name: "<<name;
    cout<<"\n Age : "<<age <<"\n";

  }
   int main(int argc, char const *argv[]) {
    person p;
    p.getdata();
    p.display();

    return 0;
  }
