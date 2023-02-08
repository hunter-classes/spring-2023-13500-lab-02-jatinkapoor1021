#include<iostream>
using namespace std;

int main(){

    
    int myData[10];
    int index;
    int NewValue;

    
    for(int i = 0; i < 10; i++){
        myData[i] = 1;
    }

    do
    {
        cout << "\n";
        for(int i = 0; i < 10; i++){
            cout << myData[i] << " ";
        }
        
        cout << "\n";
        cout << "Input Index : ";
        cin >> index;
        cout << endl;
        cout << "Input Value : ";
        cin >> NewValue;

        if (index >= 0 && index < 10){
            myData[index] = NewValue;
        }
        
        else{
            cout << "\n";
            cout << "Index out of Range. Exit." << endl;
               
        }

    } while (index >= 0 && index < 10);
 
    return 0;
}