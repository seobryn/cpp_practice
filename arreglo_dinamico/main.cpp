#include <iostream>
#include <stdio.h>
#include "string.h"

int main(int argc, char *argv[])
{
    std::string *titles = nullptr;
    std::string *authors = nullptr;

    int length;

    printf("Enter the number of books: ");

    std::string input;

    getline(std::cin, input);
    length = std::stoi(input);

    titles = new std::string[length];
    authors = new std::string[length];

    printf("Enter the following information about the books: \n");
    for (int idx = 0; idx < length; idx++)
    {
        printf("\nBook %d\n", idx + 1);
        printf("Title: ");
        getline(std::cin, titles[idx]);
        printf("Author: ");
        getline(std::cin, authors[idx]);
    }

    delete[] titles;
    delete[] authors;

    titles = nullptr;
    authors = nullptr;

    return 0;
}