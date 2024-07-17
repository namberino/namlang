#ifndef BUILTINS_HPP
#define BUILTINS_HPP

#pragma once
#include <chrono>
#include <iostream>
#include <sstream>
#include <ctime>
#include <cstring>
#include <cmath>

#include "nbl_callable.hpp"

class NativeClock : public NblCallable
{
    public:
        int arity() override;
        std::any call(Interpreter& interpreter, std::vector<std::any> args) override;
        std::string to_string() override;
};

class NativeTime : public NblCallable
{
    public:
        int arity() override;
        std::any call(Interpreter& interpreter, std::vector<std::any> args) override;
        std::string to_string() override;
};

class NativeInput : public NblCallable
{
    public:
        int arity() override;
        std::any call(Interpreter& interpreter, std::vector<std::any> args) override;
        std::string to_string() override;
};

class NativeExit : public NblCallable
{
    public:
        int param_count;
        
        int arity() override;
        std::any call(Interpreter& interpreter, std::vector<std::any> args) override;
        std::string to_string() override;
};

class NativeFloorDiv : public NblCallable
{
    public:
        int arity() override;
        std::any call(Interpreter& interpreter, std::vector<std::any> args) override;
        std::string to_string() override;
};

#endif
