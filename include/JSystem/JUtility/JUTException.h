#pragma once

#include "syati.h"

class JUTException
{
public:
    static void panic_f(const char *, s32, const char *, ...);
};
