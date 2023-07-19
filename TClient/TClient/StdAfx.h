// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#endif

#ifndef WINVER
#define WINVER 0x0A00
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0A00
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

// turns off MFC's hiding of some common and often safely ignored warning messages
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes

#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#include <afxsock.h>
#include <direct.h>
#include <dbghelp.h>

#include <assert.h>
#include <fstream>
#include <iostream>
#include <tlhelp32.h>
#include <dxdiag.h>
#include <strsafe.h>
#include <winsvc.h>

#ifdef USE_XTRAP
#include <XTrap4Client.h>
#endif

#if defined _DEBUG || TEST_MODE
#define NO_GAMEGUARD
#endif

#ifdef USE_GG
#include "NPGameLib.h"
#endif

#include <T3D.h>
#include <CSProtocol.h>
#include <NetCode.h>
#include <TClientID.h>

#include <TChartType.h>
#include "TClientType.h"

#endif // _AFX_NO_AFXCMN_SUPPORT
