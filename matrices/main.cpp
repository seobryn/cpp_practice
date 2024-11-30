#include <iostream>
#include <stdio.h>
#include "string.h"

using namespace std;

int main(int argc, char *argv[])
{
    int columns = 2;
    int length;
    // Reserve memory for the array
    string **books;

    printf("How many books do you want to add?: ");
    string input;
    getline(cin, input);

    length = stoi(input);

    // Create the array with the desired size
    books = new string *[length];

    for (int idx = 0; idx < length; idx++)
    {
        // Create each row of the array with the desired column size
        // and fillout each row with the data
        books[idx] = new string[columns];
        printf("\nBook %d\n", idx + 1);
        printf("Title: ");
        getline(cin, books[idx][0]);
        printf("Author: ");
        getline(cin, books[idx][1]);
    }

    // Do some things...

    // Always remember to free memory for because is a dynamic array
    for (int idx = 0; idx < length; idx++)
    {
        delete[] books[idx];
    }

    // Finally free the array memory
    delete[] books;

    return 0;
}