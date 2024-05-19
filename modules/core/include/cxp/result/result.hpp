#pragma once

#include <utility>

namespace cxp::core::result {

namespace detail {

    struct Unit {
        constexpr bool operator==(Unit const&) const noexcept { return true; }
    };

} // namespace detail

template <typename T, bool isRvalue = false>
struct Ok {
    constexpr explicit Ok(T const& v)
        : value { v }
    {
    }

    T const& value;
};

template <typename T>
struct Ok<T, true> {
    constexpr explicit Ok(T&& v)
        : value { std::move(v) }
    {
    }

    T&& value;
};

template <>
struct Ok<void> {
    constexpr Ok() = default;
    detail::Unit value;
};

template <typename T>
Ok(T&&) -> Ok<T, true>;
template <typename T>
Ok(T&) -> Ok<T, false>;

Ok() -> Ok<void>;

template <typename T>
struct Err {
    constexpr explicit Err(T&& e)
        : err(std::move(e))
    {
    }

    T err;
};

template <>
struct Err<void> {
    constexpr Err() = default;

    detail::Unit unit;
};

Err() -> Err<void>;

template <typename From>
struct ErrImplicitConversionTraits;

template <typename From>
using ErrImplicitConversionTraits_t =
    typename ErrImplicitConversionTraits<From>::type;

template <typename From>
Err(From) -> Err<ErrImplicitConversionTraits_t<From>>;

} // namespace cxp::core::result
