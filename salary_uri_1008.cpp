#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

        double R,n,pi;
        n=4.0/3;pi=3.14159;

        cin>>R;

   std::cout << std::setprecision(3) << std::fixed;
   cout<<"VOLUME = "<<n*pi*(R)*(R)*(R) <<"\n";

  return 0;

}
