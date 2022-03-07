
// TankView.h : interface of the CTankView class
//

#pragma once


class CTankView : public CView
{
protected: // create from serialization only
	CTankView() noexcept;
	DECLARE_DYNCREATE(CTankView)

// Attributes
public:
	CTankDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CTankView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TankView.cpp
inline CTankDoc* CTankView::GetDocument() const
   { return reinterpret_cast<CTankDoc*>(m_pDocument); }
#endif

