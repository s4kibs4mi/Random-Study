#include <iostream>

using namespace std;

int GCD(int a, int b){
    return b == 0 ? a : GCD(b, a % b);
}

int LCM(int a, int b) {
  return (a / GCD(a, b)) * b;
}

int main(){

    return 0;
}
