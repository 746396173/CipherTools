
// ChildView.h : CChildView ��Ľӿ�
//


#pragma once
#include"xmlPanel.h"


// CChildView ����

class CChildView : public CWnd
{
// ����
public:
	CChildView();
	xmlPanel mPanel;

// ����
public:

// ����
public:

// ��д
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ʵ��
public:
	virtual ~CChildView();

	// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
