// FT2232Test.h : PROJECT_NAME ���ε{�����D�n���Y��
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�� PCH �]�t���ɮ׫e���]�t 'stdafx.h'"
#endif

#include "resource.h"		// �D�n�Ÿ�


// CFT2232TestApp:
// �аѾ\��@�����O�� FT2232Test.cpp
//

class CFT2232TestApp : public CWinApp
{
public:
	CFT2232TestApp();
    int x;
// �мg
	public:
	virtual BOOL InitInstance();

// �{���X��@

	DECLARE_MESSAGE_MAP()
};

extern CFT2232TestApp theApp;