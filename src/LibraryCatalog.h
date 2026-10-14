
#pragma once

#include <string>

class Book {
private:
    std::string title_;
    std::string author_;
    int year_;
    int pages_;

public:
    Book(std::string bookTitle, std::string bookAuthor, int bookYear, int bookPages);

    void printInfo() const;

    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    int getPages() const;
    bool isOlderThan(int year) const;
};
