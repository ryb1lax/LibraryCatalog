
#include "LibraryCatalog.h"
#include <iostream>

Book::Book(std::string bookTitle, std::string bookAuthor, int bookYear, int bookPages)
    : title(bookTitle), author(bookAuthor), year(bookYear), pages(bookPages) {
}

void Book::printInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Pages: " << pages << std::endl;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}

int Book::getPages() const {
    return pages;
}
bool Book::isOlderThan(int checkYear) const {
    return year < checkYear;
}