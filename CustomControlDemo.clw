; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CCustomControlDemoDlg
LastTemplate=generic CWnd
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "CustomControlDemo.h"

ClassCount=4
Class1=CCustomControlDemoApp
Class2=CCustomControlDemoDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_CUSTOMCONTROLDEMO_DIALOG
Resource4=IDD_ABOUTBOX (English (U.S.))
Class4=CBitmapViewer
Resource5=IDD_CUSTOMCONTROLDEMO_DIALOG (English (U.S.))

[CLS:CCustomControlDemoApp]
Type=0
HeaderFile=CustomControlDemo.h
ImplementationFile=CustomControlDemo.cpp
Filter=N

[CLS:CCustomControlDemoDlg]
Type=0
HeaderFile=CustomControlDemoDlg.h
ImplementationFile=CustomControlDemoDlg.cpp
Filter=D
LastObject=CCustomControlDemoDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=CustomControlDemoDlg.h
ImplementationFile=CustomControlDemoDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308352
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889
Class=CAboutDlg


[DLG:IDD_CUSTOMCONTROLDEMO_DIALOG]
Type=1
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Class=CCustomControlDemoDlg

[DLG:IDD_CUSTOMCONTROLDEMO_DIALOG (English (U.S.))]
Type=1
Class=CCustomControlDemoDlg
ControlCount=2
Control1=IDOK,button,1342242817
Control2=IDC_CUSTOM1,MFCBitmapViewerCtrl,1342242816

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[CLS:CBitmapViewer]
Type=0
HeaderFile=BitmapViewer.h
ImplementationFile=BitmapViewer.cpp
BaseClass=CWnd
Filter=W
LastObject=CBitmapViewer
VirtualFilter=WC

