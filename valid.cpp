#include <iostream>


int main()

{

int n;

std::cout <<"Please enter an integer: " ;

std::cin>>n;

while(n>=100||n<=0)

{

std::cout<<"Please re-enter: ";

std::cin>>n;

}
int answer = n*n;
std::cout<<"Number squared is "<<answer<<std::endl;
return 0;

}
