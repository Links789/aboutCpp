#include "stdafx.h"
#include "Tank.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
/**************************/
#define GAME_WIN_W (800)		//Global: width
#define GAME_WIN_H (600)		//Global: height

// CmainFrame

IMPLEMENT_DYNAMIC (CMainFrame, CFrameWnd)	//Automatic generated

BEGIN_MESSAGE_MAP (CMainFrame, CFrameWnd)	//Automatic generated
		ON_WM_CREATE()
END_MESSAGE_MAP()

//CMainFrame Constructor/Destructor

CMainFrame::CMainFrame() {
#define MY_STYLE (WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | \
		WS_MINIMIZEBOX | FWS_ADDTOTITLE)
	//Create window
	Create(NULL, _T("Tank Game"), MY_STYLE, CRect(0, 0, GAME_WIN_W, GAME_WIN_H);
		//Set the customer area
		{
			CRect rcCli;
			GetClientRect(rcCli);	//Get the size of the customer area

			RECT rcFram = { 0,0,	//Calculate the size of the border
						   m_iWidth + m_iWidth - rcCli.right,
						   m_iHeight + m_iHeight - rcCli.bottom };
			MoveWindow(&rcFrame, TRUE);	//Call WindowsAPI setting window location, size

		}
}

//Destructor
CMainFrame::~CMainFrame() {

}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct) {
	if (CFrameWnd::OnCreate(lpCtreateStruct) == -1) {
		return -1;
	}

	return 0;
}