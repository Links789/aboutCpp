#pragma onece

class CMainFrame : public CFrameWnd {

public:
	CMainFrame();
protected:
	DECLARE_DYNAMIC(CMainFrame)

//features
public:

//operate
public:

//overwrite
public:

//implement
public:
	virtual ~CMainFrame();

//Generate a message map method
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()

	int m_iWidth{ 800 };	//width
	int m_iHeight{ 600 };	//height
};