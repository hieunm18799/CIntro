#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER 255
#define VAT 4

typedef struct
{
    char ISBN[BUFFER], title[BUFFER];
    int quantity, price;
    long total;
} Book;

int main()
{
    int n;
    long allTotal = 0;
    Book *books = (Book *)malloc(sizeof(Book) * n);
    int tmp_int;
    char tmp_string[BUFFER];
    printf("Number of books's types: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Book's quantity: ");
        scanf("%d", &tmp_int);
        books[i].quantity = tmp_int;
        printf("Book's ISBN: ");

        scanf("%*c%[^\n]", tmp_string);
        strcpy(books[i].ISBN, tmp_string);
        printf("Book's title: ");
        scanf("%*c%[^\n]", tmp_string);
        strcpy(books[i].title, tmp_string);
        printf("Book's price: ");
        scanf("%d", &tmp_int);
        books[i].price = tmp_int;
        books[i].total = tmp_int * books[i].quantity;
    }
    printf("|");
    for (int i = 0; i < 70; i++)
    {
        printf("-");
    }
    printf("|\n");
    printf("|%-70s|\n|%-10s%-20s%-20s%-10s%-10s|\n", "BK Bookseller", "Qty", "ISBN", "Title", "Price", "Total");
    printf("|");
    for (int i = 0; i < 70; i++)
    {
        printf("-");
    }
    printf("|\n");
    for (int i = 0; i < n; i++)
    {
        printf("|%-10d%-20s%-20s%-10d%-10ld|\n", books[i].quantity, books[i].ISBN, books[i].title, books[i].price, books[i].total);
        allTotal += books[i].total;
    }
    printf("|%-60s%-10d|\n|%-60s%-10ld|\n", "VAT(%):", VAT, "You pay:", allTotal * (100 + VAT) / 100);
    printf("|");
    for (int i = 0; i < 70; i++)
    {
        printf("-");
    }
    printf("|\n");

    return 0;
}