#include <stdio.h>

int main() {
  int balance = 10000;
  int choice;
  int amount;

  while (1) {
    // ATM Menu
    printf("\n===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

    case 1:
      printf("Your current balance is: %d\n", balance);
      break;

    case 2:
      printf("Enter amount to deposit: ");
      scanf("%d", &amount);

      if (amount > 0) {
        balance = balance + amount;
        printf("Deposit successful!\n");
        printf("Updated balance: %d\n", balance);
      } else {
        printf("Invalid deposit amount!\n");
      }
      break;

    case 3:
      printf("Enter amount to withdraw: ");
      scanf("%d", &amount);

      if (amount > 0) {
        if (amount <= balance) {
          balance = balance - amount;
          printf("Withdrawal successful!\n");
          printf("Updated balance: %d\n", balance);
        } else {
          printf("Insufficient balance!\n");
        }
      } else {
        printf("Invalid withdrawal amount!\n");
      }
      break;

    case 4:
      printf("Thank you for using ATM. Goodbye!\n");
      return 0;

    default:
      printf("Invalid choice! Please try again.\n");
    }
  }

  return 0;
}
