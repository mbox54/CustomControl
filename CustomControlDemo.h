// CustomControlDemo.h : main header file for the CUSTOMCONTROLDEMO application
//

#if !defined(AFX_CUSTOMCONTROLDEMO_H__BF97F408_279F_11D4_A2F6_0048543D92F7__INCLUDED_)
#define AFX_CUSTOMCONTROLDEMO_H__BF97F408_279F_11D4_A2F6_0048543D92F7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCustomControlDemoApp:
// See CustomControlDemo.cpp for the implementation of this class
//

class CCustomControlDemoApp : public CWinApp
{
public:
	CCustomControlDemoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCustomControlDemoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCustomControlDemoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CUSTOMCONTROLDEMO_H__BF97F408_279F_11D4_A2F6_0048543D92F7__INCLUDED_)
