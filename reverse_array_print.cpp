// printing reverse array using recursion

#include <iostream>
#include <cstdio>
#include <cstdlib>
#define N 10

using namespace std;

void Reverse_array_Print(int a[],int n){
    if(n>=0){
        cout << a[n] << " ";
        return Reverse_array_Print(a,n-1);
    }
    else return;
}

int main(){
   int a[N],i;
   for(i=0;i<N;i++) cin >> a[i];
   Reverse_array_Print(a,N-1);
   return 0;
}
