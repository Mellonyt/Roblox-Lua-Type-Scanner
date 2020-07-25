

/*

--- Just copy and paste this somewhere in ur exploit--

Roblox function you need 

m_rL - Roblox Lua State
GetGlobal
r_lua_pop
r_lua_pushstring
r_lua_type
r_lua_newthread
r_lua_getfield
r_lua_pushboolean
r_lua_pushlightuserdata
*/

int R_LUA_TUSERDATA = 0;
int R_LUA_TFUNCTION = 0;
int R_LUA_TSTRING = 0;
int R_LUA_TBOOLEAN = 0;
int R_LUA_TNUMBER = 0;
int R_LUA_TTABLE = 0;
int R_LUA_TNIL = 0;
int R_LUA_TTHREAD = 0;
int R_LUA_TLIGHTUSERDATA = 0;




void GetLuaTypes() {

    GetGlobal(m_rL, "print");
    R_LUA_TFUNCTION = r_lua_type(m_rL, -1);
    r_lua_pop(m_rL, 1);

    r_lua_pushstring(m_rL, "Lmao");
    R_LUA_TSTRING = r_lua_type(m_rL, -1);
    r_lua_pop(m_rL, 1);

    r_lua_pushboolean(m_rL, true);
    R_LUA_TBOOLEAN = r_lua_type(m_rL, -1);
    r_lua_pop(m_rL, 1);

    GetGlobal(m_rL, "game");
    R_LUA_TUSERDATA = r_lua_type(m_rL, -1);
    r_lua_pop(m_rL, 1);

    GetGlobal(m_rL, "jfddjdsjfdo.......sdijo");
    R_LUA_TNIL = r_lua_type(m_rL, -1);
    r_lua_pop(m_rL, 1);

    GetGlobal(m_rL, "table"); // lmao
    R_LUA_TTABLE = r_lua_type(m_rL, -1);
    r_lua_pop(m_rL, 1);

    GetGlobal(m_rL, "workspace");
    r_lua_getfield(m_rL, -1, "Gravity");
    R_LUA_TNUMBER = r_lua_type(m_rL, -1);
    r_lua_pop(m_rL, 1);


    r_lua_newthread(m_rL);
    R_LUA_TTHREAD = r_lua_type(m_rL, -1);
    r_lua_pop(m_rL, 1);

    r_lua_pushlightuserdata(m_rL, nullptr);
    R_LUA_TLIGHTUSERDATA = r_lua_type(m_rL, -1);
    r_lua_pop(m_rL, 1);


    
}
