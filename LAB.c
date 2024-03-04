#include <stdio.h>
#include <string.h>

// Function prototypes
void displayMainMenu();
void displayCustomerMenu();
void openFruitList();
void buyFruit();
void returnToMainMenu();

int fruitInventory = 100;

int main() {
    int choice;

    do {
        // Hiển thị menu chính
        displayMainMenu();

        // Nhận lựa chọn từ người dùng
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Hiển thị menu khách hàng
                displayCustomerMenu();
                break;
            case 2:
                // Thoát khỏi chương trình
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 2);

    return 0;
}


// Hiển thị menu chính
void displayMainMenu() {
    printf("===== MAIN MENU =====\n");
    printf("1. ENTER ROLE\n");
    printf("2. Exit\n");
    printf("=====================\n");
}

// Hiển thị menu khách hàng
void displayCustomerMenu() {
    int choice;

    do {
        printf("\n\t\t\t--------------------------------------------\n\t\t\t");
	    printf("|              MENU CUSTOMER               |");
	    printf("\n\t\t\t--------------------------------------------\n\t\t\t");
        printf("\n\t\t\t1. Display all Food\n\t\t\t");
        printf("\n\t\t\t2. Buy Food\n\t\t\t");
        printf("\n\t\t\t3. Back To Role Menu\n\t\t\t");
        printf("\n\t\t\t4. EXIT\n\t\t\t");
        printf("\n\t\t\t--------------------------------------------\n\t\t\t");
        

        // Nhận lựa chọn từ người dùng
        printf("\n\t\t\tEnter your choice: \t\t\t");
        scanf(" %d", &choice);

        switch (choice) {
            case 1:
                openFruitList();
                break;
            case 2:
                buyFruit();
                break;
            case 3:
                returnToMainMenu();
                break;
            case 4:
                printf("\n\t\t\tThank you for visiting!\n\t\t\t");
                return;
            default:
                printf("\n\t\t\tInvalid choice, please try again.\n\t\t\t");
        }
    } while (choice != 3);
}

// Mở danh sách trái cây
void openFruitList() {
    printf("Fruit List:\n");
    // Hiển thị danh sách trái cây ở đây
}

// Mua trái cây
void buyFruit() {
    printf("You are buying fruits.\n");
    // Thêm chức năng mua ở đây
    int choice;
    int quantity;

    printf("Enter the fruit type you want to buy: ");
    scanf("%d", &choice);

    printf("Enter the quantity (in kg) you want to buy: ");
    scanf("%d", &quantity);

    // Assume each fruit type costs $1 per kg
    int totalPrice = quantity; // in real world this could be calculated based on actual price

    // Check if the quantity exceeds the inventory
    if (quantity > fruitInventory) {
        printf("Error: Not enough inventory available.\n");
    } else {
        printf("Total Price: $%d\n", totalPrice);
        printf("Quantity purchased: %d kg\n", quantity);
    }
}

// Quay trở lại menu chính
void returnToMainMenu() {
    printf("Returning to Main Menu.\n");
}



