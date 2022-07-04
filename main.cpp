#include <iostream>

using namespace std;

bool isPrime(int num){
  int test = 0;
  if(num <= 1){
    return false;
  }

  if(num == 2)
    return true;
  for(int i = num - 1; i > 1; i--){
    test = num % i;
    if (test == 0)
      return false;
  }
  return true;
}

int main() {
  for(int i = 0; i <= 21; i++)
  if(isPrime(i))
    cout << i << " ";
 cout << endl;
 return 0;
} 