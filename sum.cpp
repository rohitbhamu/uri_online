#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
   int A,B,C,D,X;
   cin>>A;
   cin>>B;
   cin>>C;
   cin>>D;
   X=(A*B)-(C*D);
   //X=round(X);
  // X=X/100000;
   //std::cout << std::setprecision(1) << std::fixed;
   cout<<"DIFERENCA = "<<X <<"\n";

  return 0;

}
