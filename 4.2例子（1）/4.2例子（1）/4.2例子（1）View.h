
// 4.2���ӣ�1��View.h : CMy42���ӣ�1��View ��Ľӿ�
//

#pragma once


class CMy42���ӣ�1��View : public CView
{
protected: // �������л�����
	CMy42���ӣ�1��View();
	DECLARE_DYNCREATE(CMy42���ӣ�1��View)

// ����
public:
	CMy42���ӣ�1��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy42���ӣ�1��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int N;
	CArray <CRect, CRect> cr;
	bool set;
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 4.2���ӣ�1��View.cpp �еĵ��԰汾
inline CMy42���ӣ�1��Doc* CMy42���ӣ�1��View::GetDocument() const
   { return reinterpret_cast<CMy42���ӣ�1��Doc*>(m_pDocument); }
#endif

