#if !defined(AFX_BITMAPVIEWER_H__BF97F412_279F_11D4_A2F6_0048543D92F7__INCLUDED_)
#define AFX_BITMAPVIEWER_H__BF97F412_279F_11D4_A2F6_0048543D92F7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BitmapViewer.h : header file
//

#define BITMAPVIEWER_CLASSNAME    _T("MFCBitmapViewerCtrl")  // Window class name

/////////////////////////////////////////////////////////////////////////////
// CBitmapViewer window

class CBitmapViewer : public CWnd
{
// Construction
public:
	CBitmapViewer();

// Attributes
public:
    BOOL SetBitmap(UINT nIDResource);

// Operations
public:
	BOOL Create(CWnd* pParentWnd, const RECT& rect, UINT nID, DWORD dwStyle = WS_VISIBLE);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBitmapViewer)
	protected:
	virtual void PreSubclassWindow();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CBitmapViewer();
protected:
    BOOL RegisterWindowClass();

protected:
    CBitmap m_Bitmap;

	// Generated message map functions
protected:
	//{{AFX_MSG(CBitmapViewer)
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BITMAPVIEWER_H__BF97F412_279F_11D4_A2F6_0048543D92F7__INCLUDED_)
