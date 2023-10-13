#include <iostream>

int main() {
    float num1, num2, num3, num4;//float is the data type. Float returns decimal points.

    std::cout << "Enter the first number: ";//cout stands for console out. It is asking the user to enter the first number
    std::cin >> num1;//cin stands for console in. It takes in the first number that is entered by the user. 
    std::cout << "Enter the second number: ";//asking the user to enter the second number.
    std::cin >> num2;//takes in the second number that is entered by the user. 
    std::cout << "Enter the third number: ";//asking the user for the third number.
    std::cin >> num3;//takes in the third number input by the user.
    std::cout << "Enter the fourth number: ";//asking the user for the fourth number.
    std::cin >> num4;//takes in the forth number entered by the user. 

    float average = (num1 + num2 + num3 + num4) / 4;//this is the formula for the average. it is adding all the 4 numbers that is entered by the user and dividing it by 4. 

    std::cout << "The average of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is: " << std::fixed << std::setprecision(2) << average << std::endl;
    //line 17 is just outputing the average of the 4 numbers that is entered by the user. 

    return 0;
}
