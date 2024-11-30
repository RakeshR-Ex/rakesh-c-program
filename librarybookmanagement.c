#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
typedef struct {
    char title[100];
    char author[100];
    int year;
    int isbn;
} Book;
Book books[MAX_BOOKS];
int bookCount = 0;
void addBook() {
    if (bookCount == MAX_BOOKS) {
        printf("Error: Maximum number of books reached.\n");
        return;
    }

    Book newBook;
    printf("Enter book title: ");
    scanf("%s", newBook.title);
    printf("Enter author: ");
    scanf("%s", newBook.author);
    printf("Enter year: ");
    scanf("%d", &newBook.year);
    printf("Enter ISBN: ");
    scanf("%d", &newBook.isbn);
    books[bookCount++] = newBook;
    printf("Book added successfully!\n");
}
void searchBook() {
    int isbn;
    printf("Enter ISBN to search: ");
    scanf("%d", &isbn);

    int i;
    for (i = 0; i < bookCount; i++) {
        if (books[i].isbn == isbn) {
            printf("Book found:\n");
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            printf("ISBN: %d\n", books[i].isbn);
            return;
        }
    }

    printf("Book not found.\n");
}
void deleteBook() {
    int isbn;
    printf("Enter ISBN to delete: ");
    scanf("%d", &isbn);

    int i;
    for (i = 0; i < bookCount; i++) {
        if (books[i].isbn == isbn) { 
            memmove(&books[i], &books[i + 1], (bookCount - i - 1) * sizeof(Book));
            bookCount--;
            printf("Book deleted successfully!\n");
            return;
        }
    }

    printf("Book not found.\n");
}
void displayBooks() {
    if (bookCount == 0) {
        printf("No books available.\n");
        return;
    }
    int i;
    for (i = 0; i < bookCount; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
        printf("ISBN: %d\n", books[i].isbn);
        printf("\n");
    }
}
int main() {
    int choice;
    do {
        printf("\nBook Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Delete Book\n");
        printf("4. Display Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                deleteBook();
                break;
            case 4:
                displayBooks();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
