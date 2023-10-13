#include <iostream>

int main() {
    float num1, num2, num3, num4;//the data type for num1, num2, num3, and num4 is float. Float returns decimals. 
    //cout stands for console out and cin stands for console in.
    std::cout << "Enter the first number: ";//asking the user to enter the first number,
    std::cin >> num1;//takes in the first number that is entered by the user. 
    std::cout << "Enter the second number: ";//askes the user for the second number.
    std::cin >> num2;//takes in the second number entered by the user.
    std::cout << "Enter the third number: ";//asks the user for the third number. 
    std::cin >> num3;//takes in the third numbers entered by the user.
    std::cout << "Enter the fourth number: ";//askes the user for the fourth numbers.
    std::cin >> num4;//takes in the forth number that is entered by the user.

    float average = (num1 + num2 + num3 + num4) / 4;//this is the formula for average. It is adding the 4 numbers that is entered by the user.
    //and then it divides it by 4.

    std::cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << std::fixed << std::setprecision(2) << average << std::endl;
    //this will output the average. 
    return 0;
}
