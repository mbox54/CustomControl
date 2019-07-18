// CustomControlDemoDlg.h : header file
//

#if !defined(AFX_CUSTOMCONTROLDEMODLG_H__BF97F40A_279F_11D4_A2F6_0048543D92F7__INCLUDED_)
#define AFX_CUSTOMCONTROLDEMODLG_H__BF97F40A_279F_11D4_A2F6_0048543D92F7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "BitmapViewer.h"

/////////////////////////////////////////////////////////////////////////////
// CCustomControlDemoDlg dialog

class CCustomControlDemoDlg : public CDialog
{
// Construction
public:
	CCustomControlDemoDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCustomControlDemoDlg)
	enum { IDD = IDD_CUSTOMCONTROLDEMO_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCustomControlDemoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

    CBitmapViewer m_BitmapViewer;

	// Generated message map functions
	//{{AFX_MSG(CCustomControlDemoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CUSTOMCONTROLDEMODLG_H__BF97F40A_279F_11D4_A2F6_0048543D92F7__INCLUDED_)
