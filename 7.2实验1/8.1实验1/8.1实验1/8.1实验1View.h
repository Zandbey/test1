
// 8.1ʵ��1View.h : CMy81ʵ��1View ��Ľӿ�
//

#pragma once


class CMy81ʵ��1View : public CView
{
protected: // �������л�����
	CMy81ʵ��1View();
	DECLARE_DYNCREATE(CMy81ʵ��1View)

// ����
public:
	CRect cr;
	CPoint p;
	int flag = 1;  //1��ʾ��δ�����Σ�2��ʾ�ƶ����̣�3��ʾ����
	int h_height;
	int h_width;
	CMy81ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy81ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 8.1ʵ��1View.cpp �еĵ��԰汾
inline CMy81ʵ��1Doc* CMy81ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy81ʵ��1Doc*>(m_pDocument); }
#endif

