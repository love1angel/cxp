#pragma once

namespace cxp::core::pattern {

template <typename... Callable>
struct Overloaded : Callable... {
    using Callable::operator()...;
};

template <typename... Callable>
Overloaded(Callable...) -> Overloaded<Callable...>;

// using vars = std::variant<std::pair<int, int>, std::string, int, std::monostate>;
// void visit(vars& v)
// {
//     std::visit(Overloaded {
//                    [](std::pair<int, int> pair) { std::cout << pair.first << " " << pair.second << std::endl; },
//                    [](int i) { std::cout << i << std::endl; },
//                    [](std::string s) { std::cout << s << std::endl; },
//                    [](std::monostate null) { std::cout << "there are no value" << std::endl; } },
//         v);
// }

} // namespace cxp::core::pattern
