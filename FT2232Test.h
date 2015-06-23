// FT2232Test.h : PROJECT_NAME 應用程式的主要標頭檔
//

#pragma once

#ifndef __AFXWIN_H__
	#error "對 PCH 包含此檔案前先包含 'stdafx.h'"
#endif

#include "resource.h"		// 主要符號


// CFT2232TestApp:
// 請參閱實作此類別的 FT2232Test.cpp
//

class CFT2232TestApp : public CWinApp
{
public:
	CFT2232TestApp();
    int x;
// 覆寫
	public:
	virtual BOOL InitInstance();

// 程式碼實作

	DECLARE_MESSAGE_MAP()
};

extern CFT2232TestApp theApp;