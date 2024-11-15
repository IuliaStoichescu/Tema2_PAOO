#include <iostream>
#include "../inc/Book.hpp"
#include <string>
#include <vector>
using namespace std;
int main()
{
   std::vector<std::string> info{"Harry Potter and The Philosopher's Stone", "Red", "J.K.Rowling"};
   Book book1(info[0], 223, info[1], info[2]);

    //std::cout<<"COMPILES!"<<std::endl;
    return 0;
}