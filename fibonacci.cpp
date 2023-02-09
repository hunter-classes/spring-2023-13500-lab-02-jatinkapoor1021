#include <iostream>

int main() {
int n = 59;
int arr[n+1],i;

arr[0] = 0;
arr[1] = 1;

for(i=2;i<=n;i++){
  
    arr[i] = arr[i-1] + arr[i-2];
    }

    for(i = 0; i<=n;i++){
    std::cout<< arr[i] << "\n";
}
    return 0;
}
