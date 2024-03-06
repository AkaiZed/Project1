#include <stdio.h>

int n, t;

void menuchinh() {
    int n;
    printf("SHOP CUA MANH\n");
    printf("1. SHOP CENTER\n");
    printf("2. CUSTOMER\n");
    printf("3. EXIT\n");
}

void Center() {
    int manh; 
    if (n == 1) {
        printf("1. DISPLAY ALL fruits\n");
        printf("2. Add New fruits\n");
        printf("3. Sort all fruits\n");
        printf("4. Looking for fruits\n");
        printf("5. Delete fruits\n");
        printf("6. Delete all fruits\n");
        printf("7. Update price off fruits\n");
        printf("8. Update Quantity of fruits\n");
        printf("9. Write to text file\n"); 
        printf("10. Back to Shop \n"); 
        printf("11. Exit\n");
        printf("------------------------------------------------------------------\n");
        printf("Enter your choice :");
        scanf("%lld", &manh); 
        system("cls");
    }
    switch (manh) {
    case 1:
        printf("1. Apple\t\t\t2. Banana\t\t\t3. Orange\t\t\t4. Coconut\t\t\t5. DauTay\n");
        printf("6. Grapes\t\t\t7. Melon\t\t\t8. Mango\t\t\t9. Cherry\t\t\t10. Kiwi\n"); 
        printf("Enter your choice : ");
        break;
    case 2:
        printf("Add your favorite fruits :");
        scanf("%lld", &n);
        printf(" hmm I'll put this on the shop menu soon\n");
        break;
    default:
        break;
    }
}
void Customer() {
    if (n == 2) {
        printf("Add temp if you need");
    }
}
void Exit() {
    if (n == 3)
        return;
}
int main() {
    menuchinh();
    printf("-----------------------------------------\n");
    printf("ENTER YOUR CHOICE : ");
    scanf("%lld", &n);
    system("cls");
    Center();
    
    return 0;
}

