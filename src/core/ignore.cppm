export module cxp.core:ignore;

namespace cxp {

struct Ignore {
    template <typename T>
    constexpr const Ignore& operator=(T&&) const
    {
        return *this;
    }
};

export constexpr Ignore ignore {};

} // namespace cxp
