// AnyHook.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "hook/safehook.h"

void hk_TestFunction(safehook::HookContext* ctx)
{
    MessageBoxA(NULL, "hook", "hook", NULL);
}

void TestFunction()
{

    MessageBoxA(NULL, "TestFunction", "TestFunction", NULL);
}

int main()
{
    safehook hook;


    hook.add_hook((uint64_t)TestFunction, (uint64_t)hk_TestFunction);
    hook.hook();

    TestFunction();

    std::cout << "Hello World!\n";
}

