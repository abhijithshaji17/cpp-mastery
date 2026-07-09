// matrix
/*Calculator using Switch-case*/

#include <iostream>

int main()
{
    int op;
    double n1, n2, ans;
    
    std::cout << "----Menu Driven Calculator----\n";
    std::cout << "Enter the first number:\n";
    std::cin >> n1;
    std::cout << "Enter the second number:\n";
    std::cin >> n2;
    
    std::cout << "Select the desired operation below:\n";
    std::cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    std::cin >> op;
    
    switch(op) {
        case 1: 
            ans = n1 + n2;
            std::cout << "Sum = " << ans << "\n";
            break;
        case 2: 
            ans = n1 - n2;
            std::cout << "Difference = " << ans << "\n";
            break;
        case 3: 
            ans = n1 * n2;
            std::cout << "Product = " << ans << "\n";
            break;
        case 4:
            if (n2 != 0) {
                ans = n1 / n2;
                std::cout << "Quotient = " << ans << "\n";
            } else {
                std::cout << "Error: Division by zero not possible!\n";
            }
            break;
        default:
            std::cout << "Invalid choice.\n";
    }
    
    return 0;
}