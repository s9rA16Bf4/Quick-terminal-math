#include <iostream>
#include "math.hpp"
#include "helpers.hpp"

int main(int argc, char** argv){
  std::string result = "";

  if (argc == 2 && isDigit(argv[1])){
    std::string a = argv[1];
    if (isSqrt(a)){
      a.erase(0, 4); // Removes sqrt from the input
      result = sqrtL(a);
    }
    else if (isLg(a)){
      a.erase(0,2);
      result = lg(a);
    }
    else if (isLn(a)){
      a.erase(0,2);
      result = ln(a);
    }

    else{ result = a; }

  }else if (argc == 4 && isDigit(argv[1]) && isDigit(argv[3])){
    std::string a = argv[1], b = argv[3], mOP = argv[2];

    if (isSqrt(a)){
      a.erase(0, 4); // Removes sqrt from the input
      a = sqrtL(a);
    }
    else if (isLg(a)){
      a.erase(0, 2); // Removes lg from the input
      a = lg(a);
    }
    else if (isLn(a)){
      a.erase(0, 2); // Removes ln from the input
      a = lg(a);
    }

    if (isSqrt(b)){
      b.erase(0, 4); // Removes sqrt from the input
      b = sqrtL(b);
    }
    else if (isLg(b)){
      b.erase(0, 2); // Removes lg from the input
      b = lg(b);
    }
    else if (isLn(b)){
      b.erase(0, 2); // Removes ln from the input
      b = lg(b);
    }

    if (mOP == "+"){ result = add(a, b); }
    else if (mOP == "-" ){ result = sub(a, b); }
    else if (mOP == "/" ){ result = divL(a, b); }
    else if (mOP == "x" ){ result = mult(a, b); }
    else if (mOP == "%" ){ result = mod(a, b); }
    else if (mOP == "^" ){ result = sqrtL(a); }
    else{ std::cout << "Unknown operator " << mOP << std::endl; return 1; }


  }else{ std::cout << argv[0] << " <mathematical-operation>" << std::endl; return 1;  }
  std::cout << ">> " << result << std::endl;

  return 0;
}
