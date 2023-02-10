#include<iostream>

int main(){

    
    int myData[10];
    int index;
    int NewValue;

    
    for(int i = 0; i < 10; i++){
        myData[i] = 1;
    }

    do
    {
        std::cout << "\n";
        for(int i = 0; i < 10; i++){
            std::cout << myData[i] << " ";
        }
        
        std::cout << "\n";
        std::cout << "Input Index : ";
        std::cin >> index;
        std::cout << std::endl;
        std::cout << "Input Value : ";
        std::cin >> NewValue;

        if (index >= 0 && index < 10){
            myData[index] = NewValue;
        }
        
        else{
            std::cout << "\n";
            std::cout << "Index out of Range. Exit." << std::endl;
               
        }

    } while (index >= 0 && index < 10);
 
    return 0;
}
