import std;

import cxp;

using vars = std::variant<std::pair<int, int>, std::string, int, std::monostate>;

int main()
{
    std::vector<int> vec { 2, 2, 1 };
    cxp::ignore = std::next(vec.cbegin(), 1);

    vars x = "hello";
    std::visit(cxp::Overloaded {
                   [](std::pair<int, int> pair) { std::cout << pair.first << " " << pair.second << std::endl; },
                   [](int i) { std::cout << i << std::endl; },
                   [](std::string s) { std::cout << s << std::endl; },
                   [](std::monostate null) { std::cout << "there are no value" << std::endl; } },
        x);

    return 0;
}
