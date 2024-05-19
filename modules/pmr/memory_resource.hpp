#pragma once

#include <cstddef>

namespace cxp::pmr {

template <typename Derived>
class memory_resource {
    static constexpr std::size_t max_alignment = alignof(std::max_align_t);

public:
    [[nodiscard]] void* allocate(size_t bytes, size_t alignment = max_alignment)
    {
        return (static_cast<Derived*>(this))->allocate(bytes, alignment);
    }

    void deallocate(void* p, size_t bytes, size_t alignment = max_alignment)
    {
        return (static_cast<Derived*>(this))->deallocate(p, bytes, alignment);
    }

    bool is_equal(const memory_resource& other) const noexcept
    {
        return (static_cast<Derived*>(this))->is_equal(other);
    }
};

} // namespace cxp::pmr
