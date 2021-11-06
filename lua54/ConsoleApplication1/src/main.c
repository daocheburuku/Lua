#pragma comment(lib,"lua54.lib")
#include<stdio.h>
#include<stdlib.h>
#include<lua.h>
#include<lualib.h>
#include<lauxlib.h>

int main(int argc, char* argv[])
{
    lua_State* L = luaL_newstate();// 创建 Lua 状态. 其实就是一个数据结构.
    luaL_openlibs(L);// 加载所有标准库, math,table,os,debug,...
    lua_newtable(L);
    //lua_pushnumber(L, 11);
    //lua_gettable(L, -2);

    //lua_setglobal(L, "wo");
    //luaL_dostring(L, "print(wo[11])");
    //lua_geti(L, -1, 1);
    //lua_setglobal(L, "wo");
    //luaL_dostring(L, "print(wo)");
    lua_pushstring(L, "abc");
    //lua_setfield(L, -2, "name");
    lua_seti(L, -2, 3);

    /*
    lua_pushinteger(L, 2);
    lua_pushstring(L, "ABC");
    lua_settable(L, -3);
    /*
    lua_pushstring(L, "A");
    lua_pushstring(L, "ABC");
    lua_settable(L, -3);

    lua_getfield(L, -1, "A");
    lua_setglobal(L, "wo");
    luaL_dostring(L, "print(wo)");
    */
    /*lua_pushnumber(L, 1);
    lua_pushnumber(L, 2);
    lua_pushnumber(L, 3);
    lua_pushnumber(L, 4);
    */

    //lua_copy(L, -2, -1);


    //lua_concat(L, -1);
    //printf("%d\n", lua_absindex(L, - 1));
    /*lua_geti(L, -1, 1);
    lua_setglobal(L, "wo");
    luaL_dostring(L, "print(wo)");
    */
    //printf("%d\n",lua_gettable(L, -2));
    lua_setglobal(L, "wo");
    luaL_dostring(L, "print(wo[3])");
    system("pause");
    return 0;
}