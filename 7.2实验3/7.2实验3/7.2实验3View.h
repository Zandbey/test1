
// 7.2ʵ��3View.h : CMy72ʵ��3View ��Ľӿ�
//

#pragma once


class CMy72ʵ��3View : public CView
{
protected: // �������л�����
	CMy72ʵ��3View();
	DECLARE_DYNCREATE(CMy72ʵ��3View)

// ����
public:
	CMy72ʵ��3Doc* GetDocument() const;

// ����
public:
	int f = -1; //��¼Բ��һ�ε�״̬��������ͣ
	int flag = -1; // Բ��״̬��-1��ʾֹͣ��1��ʾ��2��ʾ�ң�0��ʾ��ͣ
	CRect cr;
	CPoint p;
	int x = 50;
	CRect CR;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy72ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 7.2ʵ��3View.cpp �еĵ��԰汾
inline CMy72ʵ��3Doc* CMy72ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy72ʵ��3Doc*>(m_pDocument); }
#endif

