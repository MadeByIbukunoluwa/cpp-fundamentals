#include <iostream>
#include <string>

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
    std::string full_name;

    std::cout << "Please type in your Last Name : " << std::endl;
    std::cin >> name;


    std::cout << "Please type in your Age : " << std::endl;
    std::cin >> age;

    std::cout << "Hello" << name << " You are " <<age << " years old " <<std::endl;
    // we can also used std::cin to changeinput , grab data in one statement , you can chain input stream operators 
    std::cout << "Please type in your last name and age separated by spaces " << std::endl;
    
    std::cin >> name >> age;

    std::cout << "Hello" << name << "! You are " << age << "years old" << std::endl;

    //Reading data from spaces 
    std::getline(std::cin,full_name);
    std::cin >> age;

    std::cout << "Type in your age" << std::endl;

    //Get data into our program 
    std::cin >> age;

    std::cout << "Hello " << full_name << "! You are " << age << "years old." << std::endl;

    // std::cerr << "Error message : Something is wrong" << std::endl;
    // std::clog << "Log message : something happened" << std::endl;

    //representing numbers in diofferent number systems
    int number1 = 15;
    int number2 = 017;
    int number3 =  0x0F;
    int number4 = 0b00001111;

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;

    // ways to initialize integers in memeory 
    // variable braced initialization 
    int elephant_count ; // varible may contain random garbage value 
    int lion_count {} ; // initializes to zero
    int dog_count ; {10}  //initializes to 10
    int cat_count {15} ; //initializes to 10

    int domesticated_animals {dog_count + cat_count};// cannot use expression as initializer
    // int domesticated_animals {x_count + y_count};// cannot use undeclared variables in initializer 

    // 2.9 is of type double with a wider range than int.Error or WARNING ,if will be dispalyed as an integer
    int narrowing_conversion1 {2.9};
    std::cout << elephant_count << std::endl;
    std::cout << lion_count << std::endl;
    
    // we can also use parentheses , and it is referred to as functional variable initialization
    // Here, the fractional part will get chipped off and be implicitly converted to 2.0 this is what you should look out for 
    int narrowing_conversion (2.9); 

    //Assignment initialization 
    int bike_count = 9;
    int truck_count = 5;
    int keke_count = 2898;
    int danfo_count = 9;

    //size of a type in memory 
    // it will tell us the size a type or variable occupies in memory 

    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count" << sizeof(truck_count) << std::endl;
    
    // Integer modifiers 
    // How can we store posiitve and negative numbers 
    int value {10};
    int value {-300};
    // it is signed by default 
    // when we add a signed modifier to the int type, we signal that it is possible to store varibles that can store positive and negative integers
    signed int value{10};
    signed int value{-300};

    //short / long integer modifiers
    short short_var {-32678}; // 2 bytes
    short int short_int {455}; //
    signed short signed_short {122}; //
    signed short int signed_short_int {-456}; //
    unsigned short int unsigned_short_int {456}; //

    int int_var {55}; // 4 bytes 
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {77};

    long int int_var {525}; // 4 or 8 bytes 
    signed long signed_var {346};
    signed long int signed_int {45};
    unsigned long int unsigned_int {77};
    

    return 0;   
}   

