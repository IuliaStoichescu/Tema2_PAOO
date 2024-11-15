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
};

#endif