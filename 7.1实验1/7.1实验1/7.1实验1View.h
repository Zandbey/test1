
// 7.1ʵ��1View.h : CMy71ʵ��1View ��Ľӿ�
//

#pragma once


class CMy71ʵ��1View : public CView
{
protected: // �������л�����
	CMy71ʵ��1View();
	DECLARE_DYNCREATE(CMy71ʵ��1View)

// ����
public:
	CMy71ʵ��1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy71ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 7.1ʵ��1View.cpp �еĵ��԰汾
inline CMy71ʵ��1Doc* CMy71ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy71ʵ��1Doc*>(m_pDocument); }
#endif

