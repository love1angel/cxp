#pragma once

namespace {{ cookiecutter.namespace }}::{{ cookiecutter.lib_name }} {

class {{ cookiecutter.lib_name }} {
public:
    [[nodiscard]] int run() noexcept;

private:
};

} // namespace {{ cookiecutter.namespace }}::{{ cookiecutter.lib_name }}
