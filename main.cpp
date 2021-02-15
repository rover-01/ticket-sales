#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
  // assingning values
  const double rateA = 15.00;
  const double rateB = 12.00;
  const double rateC = 9.00;
  int xxseats, yyseats, zzseats;
  double total = 0;

  // user input data
  cout << " Enter number of (A) seats filled: \n ";
  cin >> xxseats;
  cout << " Enter number of (B) seats filled: \n ";
  cin >> yyseats;
  cout << "Enter number of (C) seats filled: \n ";
  cin >> zzseats;

  total = (rateA*xxseats)+(rateB*yyseats)+(rateC*zzseats);

  std::cout <<std::fixed <<std::setprecision(2) << "Calculating \n" << " Net gain generated: $" << total; 








}