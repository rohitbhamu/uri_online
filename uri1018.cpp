#include <iostream>
#include<iomanip>

using namespace std;
class money{
  int number,decinumber,hundred,fifty,twenty,ten,five,two,one;
  double originalnumber,decioriginalnumber,deci50,deci25,deci10,deci05,deci01;
public:
  void getdata(void);
  void setdata(void);
  void display(void);

};

void money :: getdata(void){
  cin>>originalnumber;
}
void money:: setdata(void){
  number=originalnumber/1;
  decioriginalnumber=originalnumber;
  decioriginalnumber=decioriginalnumber-number;

decioriginalnumber=decioriginalnumber*100;
decinumber=(int)decioriginalnumber;
    hundred=number/100;number=number%100;
    fifty=number/50;number=number%50;
    twenty=number/20;number=number%20;
    ten=number/10;number=number%10;
    five=number/5; number=number%5;
    two=number/2;number=number%2;
    one=number/1;
    deci50=decinumber/50;decinumber=decinumber%50;
    deci25=decinumber/25;decinumber=decinumber%25;
    deci10=decinumber/10;decinumber=decinumber%10;
    deci05=decinumber/5;decinumber=decinumber%5;
    deci01=decinumber/1;


}

  void money :: display(void){
    std::cout << "NOTAS:" << '\n';
    std::cout <<hundred<< " nota(s) de R$ 100.00" << '\n';
    std::cout << fifty<<" nota(s) de R$ 50.00" << '\n';
    std::cout <<twenty<< " nota(s) de R$ 20.00" << '\n';
    std::cout <<ten << " nota(s) de R$ 10.00" << '\n';
    std::cout <<five<< " nota(s) de R$ 5.00" << '\n';
    std::cout <<two<< " nota(s) de R$ 2.00" << '\n';
    std::cout << "MOEDAS:" << '\n';
    std::cout <<one<< " moeda(s) de R$ 1.00" << '\n';
    std::cout <<deci50<< " moeda(s) de R$ 0.50" << '\n';
    std::cout <<deci25<< " moeda(s) de R$ 0.25" << '\n';
    std::cout <<deci10<< " moeda(s) de R$ 0.10" << '\n';
    std::cout <<deci05<< " moeda(s) de R$ 0.05" << '\n';
    std::cout <<deci01<< " moeda(s) de R$ 0.01" << '\n';

  }
   int main(int argc, char const *argv[]) {
    money a;
    a.getdata();
    a.setdata();
    a.display();

    return 0;
  }
