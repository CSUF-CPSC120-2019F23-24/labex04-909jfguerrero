// Sales prediction

#include <iostream>

int main()
{
  unsigned lastSales, thisSales;

  //get the last years total Sales
  std::cout << "What was the last year's sales?";
  std::cin >> lastSales;

  //calculate the years sales prediction
  thisSales = (lastSales * .18) + lastSales;

  //display this years sales prodiction
  std::cout << "this years sales is " << thisSales << '\n';


  return 0;
}
