

#include <iostream>

int main() {
int n = 59;
int fib[n+1],i;

fib[0] = 0;
fib[1] = 1;

for(i=2;i<=n;i++){
  
    fib[i] = fib[i-1] + fib[i-2];
    }

    for(i = 0; i<=n;i++){
    std::cout<< fib[i] << "\n";
}
    return 0;
}




