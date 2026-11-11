
#include <stdio.h>

int main()
{
    int add, choice;
    int book = 5;
    int bow, ret;
    int borrowed = 0;

    while (1)
    {
        printf("\n===== LIBRARY MENU =====\n");
        printf("1. Add a book\n");
        printf("2. View available books\n");
        printf("3. Borrow a book\n");
        printf("4. Return a book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of books to add: ");
            scanf("%d", &add);

            if (add > 0) {
                book += add;
                printf("Books added successfully!\n");
                printf("Available books: %d\n", book);
            }
            else {
                printf("Invalid number!\n");
            }
            break;

        case 2:
            printf("Available books: %d\n", book);
            printf("Borrowed books: %d\n", borrowed);
            break;

        case 3:
            printf("Enter books to borrow: ");
            scanf("%d", &bow);

            if (bow > 0 && bow <= book) {
                book -= bow;
                borrowed += bow;

                printf("Books borrowed successfully!\n");
                printf("Available books: %d\n", book);
            }
            else {
                printf("Not enough books or invalid amount!\n");
            }
            break;

        case 4:
            printf("Enter books to return: ");
            scanf("%d", &ret);

            if (ret > 0 && ret <= borrowed) {
                book += ret;
                borrowed -= ret;

                printf("Books returned successfully!\n");
                printf("Available books: %d\n", book);
            }
            else {
                printf("Invalid return amount!\n");
            }
            break;

        case 5:
            printf("Thank you for using Library System!\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
