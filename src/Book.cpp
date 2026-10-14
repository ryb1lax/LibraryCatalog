
#include "Book.h"
#include <iostream>

Book::Book(std::string bookTitle, std::string bookAuthor, int bookYear, int bookPages)
    : title_(bookTitle), author_(bookAuthor), year_(bookYear), pages_(bookPages) {
}

void Book::printInfo() const {
    std::cout << "Title: " << title_ << std::endl;
    std::cout << "Author: " << author_ << std::endl;
    std::cout << "Year: " << year_ << std::endl;
    std::cout << "Pages: " << pages_ << std::endl;
}

std::string Book::getTitle() const {
    return title_;
}

std::string Book::getAuthor() const {
    return author_;
}

int Book::getYear() const {
    return year_;
}

int Book::getPages() const {
    return pages_;
}

bool Book::isOlderThan(int checkYear) const {
    return year_ < checkYear;
}
