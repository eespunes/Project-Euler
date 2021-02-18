#include <iostream>

int main()
{
    std::cout << "####### ###" << std::endl;
    std::cout << "Problem 001" << std::endl;
    std::cout << "####### ###" << std::endl;
    std::cout << std::endl;
    std::cout << "\t--------- -- - --- -" << std::endl;
    std::cout << "\tMultiples of 3 and 5" << std::endl;
    std::cout << "\t--------- -- - --- -" << std::endl;
    std::cout << std::endl;
    std::cout << "\t\tIf we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23." << std::endl;
    std::cout << "\t\tFind the sum of all the multiples of 3 or 5 below 1000." << std::endl;
    std::cout << std::endl;

    int answer{0};

    //YOUR CODE HERE

    int input{0};
    
    for (int i = 1; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            answer += i;
    }

    std::cout << "ANSWER: " << answer << std::endl;

    return 0;
}