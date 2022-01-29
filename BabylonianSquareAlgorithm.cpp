// Noah Miller


#include <iostream>

int main()
{
    // declare variables 
    double guess = 0;
    double input = 0;
    double r = 0;
    double previosGuess = 0;
    double check = 0 ;
    
 

    //opening instructions
    std::cout << "Enter a number and I will apply the babylonian square algorithm until I am withering within .001 of the number\n";
    std::cin >> input;
    //show that I got correct input 

    std::cout << " Your,input is ";
    std::cout << input;
    std::cout << "\n";
   
    guess = input / 2;
  
    // run loop 
    while (guess != previosGuess){

        r = input / guess;
        previosGuess = guess;
        guess = (guess + r) / 2;
        std::cout << "\nguessing... \n";
        std::cout << guess;


    } 
    // prints guess
    std::cout << "\nthe babylon's algorithm gives \n";
    std::cout << guess;
    std::cout << "\nChecking: ";
    // makes check variable which should be close to the input 
    check = guess * guess;
    // prints everthing out 
    std::cout << guess << " x " << guess << " = " << check;
   std::cout << "\n";
    system("pause");
}
