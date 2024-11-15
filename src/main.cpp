#include <iostream>
#include "../inc/Book.hpp"
#include <string>
#include <vector>
using namespace std;
int main()
{
   std::vector<std::string> info{"Harry Potter and The Philosopher's Stone", "Red", "J.K.Rowling"};
   std::vector<std::string> info2{"Harry Potter and the Goblet of Fire", "Blue", "J.K. Rowling"};


   Book book1(info[0], 223, info[1], info[2]);
   book1.display();
   // Demonstrarea Item 5: Funcții implicit generate
    std::cout << "\nCopying book1 to book2..." << std::endl;
    Book book2 = book1;  // Apelul constructorului de copiere

    std::cout << "\nMoving book2 to book3..." << std::endl;
    Book book3 = std::move(book2);  // Apelul constructorului de mutare
    //std::cout<<"COMPILES!"<<std::endl;

    std::cout<<"\nUsing copy assignment operator functionality.."<<std::endl;
    Book book4(info2[0], 223, info2[1], info2[2]);
    book4.display();
    book3=book4;

    std::cout<<"\nUsing move assignment operator functionality.."<<std::endl;
    book3=move(book2);
    //arata gol ca book 2 e empty
    
    return 0;
}