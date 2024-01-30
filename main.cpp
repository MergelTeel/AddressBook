#include <iostream>

int main() {

    std::string tenant [11];
    tenant [0] = "Technikal room";

    for (int i=1; i<=10; ++i){
        std::cout << "Enter The Last Name Of The Tenant" << std::endl;
         std::cin >> tenant[i] ;
    }
    int numberFlat;
    do {
       std::cout << "Enter the apartment number. 111 - exit"<< std::endl ;
       std::cin >> numberFlat;
       std::cout << tenant[numberFlat]<<std::endl;
    } while( numberFlat != 111);
    return 0;
}
