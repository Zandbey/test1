
// 10.1����ʵ��View.h : CMy101����ʵ��View ��Ľӿ�
//

#pragma once


class CMy101����ʵ��View : public CView
{
protected: // �������л�����
	CMy101����ʵ��View();
	DECLARE_DYNCREATE(CMy101����ʵ��View)

// ����
public:
	CMy101����ʵ��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy101����ʵ��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 10.1����ʵ��View.cpp �еĵ��԰汾
inline CMy101����ʵ��Doc* CMy101����ʵ��View::GetDocument() const
   { return reinterpret_cast<CMy101����ʵ��Doc*>(m_pDocument); }
#endif

