//5308. ()[]{}<>
#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

std::string EvaluarParentesis(const std::string& s)
{
    std::string apertura = "<({[";
    std::string cierre = ">)}]";
    std::unordered_map<char, char> dic;

    for (std::size_t i = 0; i < apertura.length(); ++i)
    {
        dic[apertura[i]] = cierre[i];
    }

    std::stack<char> stack;
    int cambios = 0;

    for (char c : s)
    {
        if (apertura.find(c) != std::string::npos)
        {
            stack.push(c);
        } else if (cierre.find(c) != std::string::npos)
        {
            if (stack.empty())
            {
                return "imposible";
            }
            char abierto = stack.top();
            stack.pop();
            if (dic[abierto] != c)
            {
                ++cambios;
            }
        }
    }

    if (!stack.empty())
    {
        return "imposible";
    }

    return std::to_string(cambios);
}

int main()
{
    std::string s;
    std::getline(std::cin, s);
    cout << EvaluarParentesis(s) <<endl;
    return 0;
}
