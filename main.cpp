#include <iostream>

bool order = true;
int opt;
int large;
int medium;
int small;
int toppings;
void calc(int a);
void checkout();

int main() {
    std::cout << "Welcome to the Rizztorante Pizzeria!" << std::endl;
    std::cout << "Large Pizza: $18.00" << std::endl;
    std::cout << "Medium Pizza: $12.00" << std::endl;
    std::cout << "Small Pizza: $9.00" << std::endl;
    std::cout << "Toppings: $1.00" << std::endl;
    std::cout << std::endl;
    while (order) {
        std::cout << "What would you like to order?" << std::endl;
        std::cout << "1. Large Pizza" << std::endl;
        std::cout << "2. Medium Pizza" << std::endl;
        std::cout << "3. Small Pizza" << std::endl;
        std::cout << "4. Toppings" << std::endl;
        std::cout << "0. Checkout" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> opt;
        calc(opt);
    }
    return 0;
}

void calc(int a) {
    switch (a) {
        case 1:
            large++;
            break;
        case 2:
            medium++;
            break;
        case 3:
            small++;
            break;
        case 4:
            toppings++;
            break;
        case 0:
            order = false;
            checkout();
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }
}

void checkout() {
    std::cout << std::endl;
    std::cout << "You have ordered: " << std::endl;
    std::cout << large << " Large Pizzas - $" << large * 18 << std::endl;
    std::cout << medium << " Medium Pizzas - $" << medium * 12 << std::endl;
    std::cout << small << " Small Pizzas - $" << small * 9 << std::endl;
    std::cout << toppings << " Toppings - $" << toppings << std::endl;
    std::cout << "Total: $" << (large * 18) + (medium * 12) + (small * 9) + toppings << std::endl;
}