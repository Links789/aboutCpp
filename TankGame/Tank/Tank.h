
// Tank.h : main header file for the Tank application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CTankApp:
// See Tank.cpp for the implementation of this class
//

class CTankApp : public CWinApp
{
public:
	CTankApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CTankApp theApp;
