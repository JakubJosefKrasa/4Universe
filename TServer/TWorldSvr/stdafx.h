#pragma once

#ifndef STRICT
#define STRICT
#endif


#ifndef WINVER
#define WINVER 0x0A00
#endif
	
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0A00
#endif

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
#define _ATL_NO_COM_SUPPORT
#define _ATL_ALL_WARNINGS

#include "resource.h"
#include <TNetLib.h>

#include <NetCode.h>
#include <TWorldType.h>
#include <SSProtocol.h>
#include <MWProtocol.h>
#include <DMProtocol.h>
#include <CTProtocol.h>
#include <DBAccess.h>
