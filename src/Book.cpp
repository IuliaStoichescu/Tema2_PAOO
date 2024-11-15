#include <iostream>
#include "../inc/Book.hpp"
#include <string>
using namespace std;

//Item 4: Make sure that objects are initialized before they’re used.
Book::Book(const std::string & title, int nrPages, const std::string & color, const std::string & author)
: title(title), nrPages(nrPages), color(color), author(author) 
{

}
//acuma valorile din constructor sunt initializate
//daca faceam de ex this.title=title noi asignam valori nu era initializare 
//de asemenea oridinea parametriilor trebuie sa fie aceeasi ca in student.hpp