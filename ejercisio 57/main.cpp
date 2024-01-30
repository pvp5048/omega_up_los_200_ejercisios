//1965. pb Password
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::string s;
    std::cin.ignore();
    std::getline(std::cin, s);

    if (n < 12)
    {
        cout << "INSEGURO" << std::endl;
    }
    else
    {
        std::string answer = "INSEGURO";
        bool vocal = false;
        bool consec = false;
        bool numero = false;

        std::string vocales = "aeiouAEIOU";
        std::string numeros = "0123456789";

        for (int i = 0; i + 1 < n; i++)
        {
            if (vocales.find(s[i]) != std::string::npos)
            {
                vocal = true;
            }
            if (numeros.find(s[i]) != std::string::npos)
            {
                numero = true;
            }
            if (s[i] == s[i + 1])
            {
                consec = true;
            }
        }

        if (vocales.find(s.back()) != std::string::npos)
        {
            vocal = true;
        }
        if (numeros.find(s.back()) != std::string::npos)
        {
            numero = true;
        }

        if (vocal && numero && !consec)
        {
            answer = "SEGURO";
        }

        cout << answer << std::endl;
    }

    return 0;
}
