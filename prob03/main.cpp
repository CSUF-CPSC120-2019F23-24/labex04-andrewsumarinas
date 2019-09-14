// Sales prediction


#include <iostream>

int main()

{
  const double SALES_RATE = 0.18;
  const int MY_SALES = 2103419277;
  long nextYear;

  nextYear = (SALES_RATE * MY_SALES) + MY_SALES;

  std::cout << "Last year's sales was " << MY_SALES << std::endl;

  std::cout << "This year's sales prediction will be " << nextYear << std::endl;

  return 0;



}
