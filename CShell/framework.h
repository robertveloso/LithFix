#pragma once

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

#ifdef LITH_SHOGO
#include <de_client.h>

// Some stuff is named differently or not defined in the older lithtech games
// Just typedef them!
typedef ClientShellDE IClientShell;
typedef ClientDE ILTClient;

typedef float LTFLOAT;
// This is bad. 
typedef unsigned long uint32;
typedef DRESULT LTRESULT;
#else
#include <iltclient.h>
#endif