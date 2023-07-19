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


//
//	Log Server	UDP Send Define
//

#define	DEF_UDPLOG


#include "resource.h"
#include <TNetLib.h>

#include <NetCode.h>
#include <TLoginType.h>
#include <SSProtocol.h>
#include <CSProtocol.h>
#include <CTProtocol.h>
#include <DBAccess.h>

#ifdef DEF_UDPLOG
	#include "UdpSocket.h"
#endif
