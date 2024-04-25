#include <{{ cookiecutter.lib_name }}/{{ cookiecutter.lib_name }}.hpp>

int main(void)
{
    {{ cookiecutter.namespace }}::{{ cookiecutter.lib_name }}::{{ cookiecutter.lib_name }} app;
    return app.run();
}
