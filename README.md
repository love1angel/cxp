# CXP

Tools for generate Cpp project. modern use and good practice.

## Prerequisite

1. Python binary: cookiecutter

``` shell
# Ubuntu
sudo apt-get install cookiecutter

# Python
pip install cookiecutter
```

## Usage

``` shell
cookiecutter https://github.com/love1angel/cxp/bin
```

## todo

- [x] clang-format
- [] clang-tidy
- [] cookie cutter generate repository

## modern use

### Cpp language server

please use clangd

``` shell
# ubuntu
$ sudo apt update
$ sudo apt upgrade
$ sudo apt install clangd

# arch
$ sudo pacman -Syy
$ sudo pacman -S clangd
```

### auto format

#### format tools

please use clang-format

``` shell
$ clang-format -style=WebKit -dump-config > .clang-format
```

vscode auto format: Clang-Format provided by Xaver Hellauer

