#pragma comment(lib,"lua54.lib")
#include <stdio.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

static int l_sin(lua_State* L)
{
    //your code
    return 1;
}

static int l_cos(lua_State* L)
{
    //your code
    return 1;
}


static const struct luaL_Reg mylib[] = {
    {"mysin", l_sin},
    {"mycos",l_cos},
    {NULL, NULL}
};


__declspec(dllexport) int luaopen_mylib(lua_State* L)
{
    lua_register(L,"mysin",l_sin);
    lua_register(L, "mycos", l_cos);
    return 0;
}