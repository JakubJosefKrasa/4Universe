// stdafx.h : 자주 사용하지만 자주 변경되지는 않는
// 표준 시스템 포함 파일 및 프로젝트 관련 포함 파일이 
// 들어 있는 포함 파일입니다.

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
#define _USE_MATH_DEFINES

#include <atltime.h>
#include "resource.h"
#include <TNetLib.h>

#include "TControlType.h"
#include "SSProtocol.h"
#include "CTProtocol.h"
#include "MWProtocol.h"
#include "NetCode.h"
#include "DBAccess.h"
#include "PlatformUsage.h"