export module cxp.core:match;

namespace cxp {

export template <typename... Callable>
struct Overloaded : Callable... {
    using Callable::operator()...;
};

template <typename... Callable>
Overloaded(Callable...) -> Overloaded<Callable...>;

} // namespace cxp
