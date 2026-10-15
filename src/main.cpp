
#include "Book.h"
#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<Book> books;

    books.emplace_back("Metro 2033", "Dmitry Glukhovsky", 2005, 544);
    books.emplace_back("The Witcher", "Andrzej Sapkowski", 1993, 320);
    books.emplace_back("It", "Stephen King", 1986, 1138);
    books.emplace_back("Kobzar", "Taras Shevchenko", 1840, 115);

    int choice = 0;

    while (choice != 4) {
        std::cout << "\n=== Library Catalog ===\n";
        std::cout << "1. Show all books\n";
        std::cout << "2. Add a book\n";
        std::cout << "3. Search for a book\n";
        std::cout << "4. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;


        if (choice == 1) {
            for (const Book& book : books) {
                book.printInfo();

                if (book.isOlderThan(2000)) {
                    std::cout << "Published before 2000: Yes\n";
                }
                else {
                    std::cout << "Published before 2000: No\n";
                }

                std::cout << "-------------------\n";
            }
        }

        else if (choice == 2) {
            std::string title, author;
            int year, pages;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Enter book title: ";
            std::getline(std::cin, title);

            std::cout << "Enter author: ";
            std::getline(std::cin, author);

            std::cout << "Enter year: ";
            std::cin >> year;

            std::cout << "Enter pages: ";
            std::cin >> pages;

            books.emplace_back(title, author, year, pages);
            std::cout << "Book added successfully!\n";
        }
        else if (choice == 3) {
            std::string searchTitle;
            bool found = false;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Enter book title: ";
            std::getline(std::cin, searchTitle);

            for (const Book& book : books) {
                if (book.getTitle() == searchTitle) {
                    book.printInfo();
                    found = true;
                }
            }

            if (!found) {
                std::cout << "Book not found!\n";
            }
        }
        else if (choice == 4) {
            std::cout << "Goodbye!\n";
        }
        else {
            std::cout << "Invalid option!\n";
        }
    }

    return 0;
}
