
// 8.1ʵ��View.h : CMy81ʵ��View ��Ľӿ�
//

#pragma once


class CMy81ʵ��View : public CView
{
protected: // �������л�����
	CMy81ʵ��View();
	DECLARE_DYNCREATE(CMy81ʵ��View)

// ����
public:
	CMy81ʵ��Doc* GetDocument() const;

// ����
public:
	CString strFile = _T("");

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy81ʵ��View();
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
};

#ifndef _DEBUG  // 8.1ʵ��View.cpp �еĵ��԰汾
inline CMy81ʵ��Doc* CMy81ʵ��View::GetDocument() const
   { return reinterpret_cast<CMy81ʵ��Doc*>(m_pDocument); }
#endif

