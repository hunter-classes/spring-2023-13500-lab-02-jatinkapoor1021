#include <iostream>

using namespace std;

int main()

{

int n;

cout <<"Please enter an integer: " ;

cin>>n;

while(n>=100||n<=0)

{

cout<<"Please re-enter: ";

cin>>n;

}
int answer = n*n;
cout<<"Number squared is "<<answer<<endl;
return 0;

}