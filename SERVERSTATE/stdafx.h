#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN
#endif

#ifndef WINVER
#define WINVER 0x0A00
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0A00
#endif						

#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0A00
#endif

#ifndef _WIN32_IE
#define _WIN32_IE 0x0A00
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS


#define _AFX_ALL_WARNINGS

#include <afxwin.h>
#include <afxext.h>
#include <afxdisp.h>
#include < afxsock.h >

#include <afxdtctl.h>
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>

#include "ServerStateSock.h"

#include <map>
using namespace std;

#endif // _AFX_NO_AFXCMN_SUPPORT

typedef map<int, CSocket *>			 MAPSOCK;
typedef map<int, CServerStateSock *>			 MAPASYSOCK;