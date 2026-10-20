#pragma once

#include <cstdint>

namespace Offsets {
    namespace LuaFunctions {
        inline constexpr uintptr_t RunError = 0x289756b;
        inline constexpr uintptr_t ResumeStart = 0x68704bc;
        inline constexpr uintptr_t LuaHNext = 0x276ac0c;
        inline constexpr uintptr_t LuaHHash = 0x68784a2;
        inline constexpr uintptr_t LuauPrecall = 0x27558a6;
        inline constexpr uintptr_t ReallocStack = 0x275912c;
        inline constexpr uintptr_t NewStr = 0x26f63f8;
        inline constexpr uintptr_t ResumeError = 0x6870b6e;
        inline constexpr uintptr_t Resume = 0x687053e;
        inline constexpr uintptr_t SetTable = 0x26f729d;
    }

    namespace lua_State {
        inline constexpr uintptr_t Tt = 0x1;
        inline constexpr uintptr_t Marked = 0x2;
        inline constexpr uintptr_t Memcat = 0x0;
        inline constexpr uintptr_t Status = 0x3;
        inline constexpr uintptr_t IsActive = 0x6;
        inline constexpr uintptr_t Singlestep = 0x5;
        inline constexpr uintptr_t NCcalls = 0x38;
        inline constexpr uintptr_t BaseCcalls = 0x3a;
        inline constexpr uintptr_t Stacksize = 0x18;
        inline constexpr uintptr_t EndCi = 0x48;
        inline constexpr uintptr_t BaseCi = 0x50;
        inline constexpr uintptr_t Ci = 0x58;
        inline constexpr uintptr_t Base = 0x60;
        inline constexpr uintptr_t Stack = 0x78;
        inline constexpr uintptr_t StackLast = 0x80;
        inline constexpr uintptr_t OpenUpval = 0x20;
        inline constexpr uintptr_t Gclist = 0x10;
        inline constexpr uintptr_t GlobalState = 0x68;
        inline constexpr uintptr_t Top = 0x70;
        inline constexpr uintptr_t Activememcat = 0x4;
    }

    namespace global_State {
        inline constexpr uintptr_t Currentwhite = 0x20;
    }

    namespace TValue {
        inline constexpr uintptr_t Value = 0x0;
        inline constexpr uintptr_t Extra = 0x8;
        inline constexpr uintptr_t Tt = 0xc;
    }

    namespace CallInfo {
        inline constexpr uintptr_t Base = 0x0;
        inline constexpr uintptr_t Top = 0x10;
        inline constexpr uintptr_t Func = 0x8;
        inline constexpr uintptr_t P = 0x18;
        inline constexpr uintptr_t Savedpc = 0x20;
        inline constexpr uintptr_t Nresults = 0x28;
        inline constexpr uintptr_t Flags = 0x2c;
        inline constexpr uintptr_t Size = 0x30;
    }

    namespace Closure {
        inline constexpr uintptr_t IsC = 0x6;
        inline constexpr uintptr_t Stacksize = 0x5;
        inline constexpr uintptr_t C_f = 0x28;
        inline constexpr uintptr_t L_proto = 0x18;
        inline constexpr uintptr_t C_cont = 0x20;
        inline constexpr uintptr_t Gclist = 0x8;
        inline constexpr uintptr_t Env = 0x10;
        inline constexpr uintptr_t L_uprefs = 0x20;
        inline constexpr uintptr_t C_debugname = 0x28;
        inline constexpr uintptr_t C_upvals = 0x30;
    }

    namespace Table {
        inline constexpr uintptr_t Sizearray = 0x8;
        inline constexpr uintptr_t Metatable = 0x28;
        inline constexpr uintptr_t Node = 0x18;
        inline constexpr uintptr_t Array = 0x20;
        inline constexpr uintptr_t Lastfree = 0xc;
    }

    namespace Proto {
        inline constexpr uintptr_t Tt = 0x1;
        inline constexpr uintptr_t Memcat = 0x0;
        inline constexpr uintptr_t Marked = 0x2;
        inline constexpr uintptr_t Maxstacksize = 0x3;
        inline constexpr uintptr_t K = 0x8;
        inline constexpr uintptr_t Code = 0x10;
        inline constexpr uintptr_t P = 0x18;
        inline constexpr uintptr_t Codeentry = 0x20;
        inline constexpr uintptr_t Execdata = 0x28;
        inline constexpr uintptr_t Exectarget = 0x30;
        inline constexpr uintptr_t Lineinfo = 0x38;
        inline constexpr uintptr_t Locvars = 0x48;
        inline constexpr uintptr_t Upvalues = 0x50;
        inline constexpr uintptr_t Source = 0x58;
        inline constexpr uintptr_t Debugname = 0x60;
        inline constexpr uintptr_t Sizecode = 0x88;
        inline constexpr uintptr_t Sizep = 0x8c;
        inline constexpr uintptr_t Sizek = 0x98;
    }
}
