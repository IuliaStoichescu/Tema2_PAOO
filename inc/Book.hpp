#ifndef BOOK_HPP
#define BOOK_HPP
#include <string>

class Book
{
    private:
        std::string title;
        int nrPages;
        std::string color;
        std::string author;
    
    public: 
        Book(const std::string& title,int nrPages,const std::string& color,const std::string& author);
        Book(const Book& other);//copy constructor
        Book(Book&& other) noexcept;//move constructor
        ~Book();
        Book& operator=(const Book& other);//copy assign operator
        Book& operator=(Book&& other) noexcept;//move assign operator
        void display()const;
};

#endif