#include <iostream>

int addNumbers (int first_number,int second_number) {
    int sum =  first_number + second_number;
    return sum;
}   


int main () {
    int result = 20 ;
    std::cout << result << std::endl;

    std::cout << "Number1" << std::endl;
    std::cout << "Number2" << std::endl;
    
    //Statements and functions
    int first_number = 90; 
    int second_number = 87;

    std::cout << "First number" << first_number << std::endl;
    std::cout << "Second number" << second_number << std::endl;


    int sum = addNumbers(14,89);
    std::cout << "The sum of the two numbers is" << sum << std::endl;
    //or 
    std::cout << "The sum of the two numbers is" << addNumbers(34,23) << std::endl;

    // Reading data form the input stream using std::cin 

    int age;
    std::string name;

    std::cout << "Please type in your Last Name : " << std::endl;
    std::cin >> name;


    std::cout << "Please type in your Age : " << std::endl;
    std::cin >> age;

    std::cout << "Hello" << name << " You are " <<age << " years old " <<std::endl;
    // we can also used std::cin to cangeinput , grab data in one statement 

    
    return 0;
}

