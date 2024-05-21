#pragma once

#include <algorithm>
#include <cstddef>

#include <chrono>
#include <concepts>
#include <memory>

#include <boost/asio/steady_timer.hpp>
#include <boost/core/noncopyable.hpp>

namespace cxp {

template <typename F>
concept TimerTask = requires(F f) {
    {
        f()
    } -> std::same_as<bool>;
};

template <TimerTask Task>
class Timer : private boost::noncopyable {
public:
    using Interval = std::chrono::milliseconds;

public:
    explicit Timer(Task&& t)
        : m_task { std::move(t) }
    {
    }

protected:
    Task m_task;
    Interval m_interval;
};

template <TimerTask Task>
std::unique_ptr<Timer<Task>> construct(Task&& task) noexcept;

} // namespace cxp
