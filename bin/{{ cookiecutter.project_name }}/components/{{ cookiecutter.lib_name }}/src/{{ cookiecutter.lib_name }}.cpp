#include <{{ cookiecutter.lib_name }}/{{ cookiecutter.lib_name }}.hpp>

#include <iostream>

namespace {{ cookiecutter.namespace }}::{{ cookiecutter.lib_name }} {

int {{ cookiecutter.lib_name }}::run() noexcept
{
    std::cout << "hello, world" << std::endl;
    return 0;
}

} // namespace {{ cookiecutter.namespace }}::{{ cookiecutter.lib_name }}
