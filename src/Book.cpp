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

void Book::display()const
{
    std::cout << "Title: "<<title << ", Pages: " << nrPages<< ", Color: " << color << ", Author: " << author << std::endl;
}

// Destructor
Book::~Book() {
    std::cout << "Destructor called for: " << title << std::endl;
}
//se va apela la sfarsitul programului

/*// Constructor de copiere
Book::Book(const Book& other)
    : title(other.title), nrPages(other.nrPages), color(other.color), author(other.author) {
    std::cout << "Copy Constructor called for: " << title << std::endl;
}

// Constructor de mutare
Book::Book(Book&& other) noexcept
    : title(std::move(other.title)), nrPages(other.nrPages), color(std::move(other.color)), author(std::move(other.author)) {
    std::cout << "Move Constructor called for: " << title << std::endl;
}

// Operator de copiere
Book& Book::operator=(const Book& other) {
    if (this != &other) {  // Evităm auto-assignarea
        title = other.title;
        nrPages = other.nrPages;
        color = other.color;
        author = other.author;
        std::cout << "Copy Assignment Operator called for: " << title << std::endl;
    }
    return *this;
}

// Operator de mutare
Book& Book::operator=(Book&& other) noexcept {
    if (this != &other) {  // Evităm auto-assignarea
        title = std::move(other.title);
        nrPages = other.nrPages;
        color = std::move(other.color);
        author = std::move(other.author);
        std::cout << "Move Assignment Operator called for: " << title << std::endl;
    }
    return *this;
}*/

//indiferent daca sunt construite functiile sau nu ele exista in momentul in care construim o clasa