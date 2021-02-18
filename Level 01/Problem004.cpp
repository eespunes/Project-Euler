#include <iostream>

int main()
{
    std::cout << "####### ###" << std::endl;
    std::cout << "Problem 004" << std::endl;
    std::cout << "####### ###" << std::endl;
    std::cout << std::endl;
    std::cout << "\t------- ---------- -------" << std::endl;
    std::cout << "\tLargest palindrome product" << std::endl;
    std::cout << "\t------- ---------- -------" << std::endl;
    std::cout << std::endl;
    std::cout << "\t\tA palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99." << std::endl;
    std::cout << "\t\tFind the largest palindrome made from the product of two 3-digit numbers." << std::endl;
    std::cout << std::endl;

    float answer{0};

    //YOUR CODE HERE
    bool isPalindromic = true;

    for (int i = 1; i < 1000; i++)
    {
        for (int j = 1; j < 1000; j++)
        {
            int possiblePalindromic = i * j;
            std::string possiblePalindromicString = std::to_string(possiblePalindromic);
            isPalindromic = true;
            for (int k = 0; k < possiblePalindromicString.length(); k++)
            {
                if (possiblePalindromicString[k] != possiblePalindromicString[possiblePalindromicString.length() - 1 - k])
                {
                    isPalindromic = false;
                    break;
                }
            }
            if (isPalindromic)
            {
                if (possiblePalindromic > answer)
                    answer = possiblePalindromic;
            }
        }
    }

    std::cout << "ANSWER: " << answer << std::endl;

    return 0;
}