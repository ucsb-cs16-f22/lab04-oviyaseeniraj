// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool isOdd(int x) { 
  return (x % 2 != 0);
}
bool isEven(int x) { 
  return (x % 2 == 0);
}
bool isPrime(int x) { 
  bool prime = true;

  if (x == 0 || x == 1 || x < 0)
  {
    prime = false;
  }
  
  for (int i = 2; i < x; i++)
  {
    if (x % i == 0)
    {
      prime = false;
    }

  }

  return prime;

}
