#include <iostream>
#include <string>

int main()
{
    std::string expression;

    std::cout << "Input  : ";
    getline(std::cin, expression);

    char currentChar;
    std::string operatorLabel;

    std::cout << "Output : ";

    for (size_t i = 0; i < expression.length(); i++)
    {
        currentChar = expression[i];

        if (currentChar == '=')
        {
            if (i < expression.length() - 1 && expression[i + 1] == '=')
            {
                operatorLabel = "== Equal to";
                i++;
            }
            else
            {
                operatorLabel = "!= Not Equal to";
            }
        }

        else if (currentChar == '>')
        {
            if (i < expression.length() - 1 && expression[i + 1] == '=')
            {
                operatorLabel = ">= Greater than or equal to";
                i++;
            }
            else
            {
                operatorLabel = "> Greater than";
            }
        }

        else if (currentChar == '<')
        {
            if (i < expression.length() - 1 && expression[i + 1] == '=')
            {
                operatorLabel = "<= Less than or equal to";
                i++;
            }
            else
            {
                operatorLabel = "< Less than";
            }
        }

        else
        {
            continue;
        }

        std::cout << operatorLabel << std::endl;
    }

return 0;
}

