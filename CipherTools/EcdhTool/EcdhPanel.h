#pragma once
#include"stdafx.h"


// CEcdhPanel �Ի���

class CEcdhPanel : public CDialogEx
{
	DECLARE_DYNAMIC(CEcdhPanel)

public:
	CEcdhPanel(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CEcdhPanel();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
public:
	CWnd *pHexControl1;
	CWnd *pHexControl2;
	CWnd *pHexControl3;
	CWnd *pHexControl4;
	CWnd *pHexControl5;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
