
// 7.1���ӣ�2��View.h : CMy71���ӣ�2��View ��Ľӿ�
//

#pragma once


class CMy71���ӣ�2��View : public CView
{
protected: // �������л�����
	CMy71���ӣ�2��View();
	DECLARE_DYNCREATE(CMy71���ӣ�2��View)

// ����
public:
	CMy71���ӣ�2��Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy71���ӣ�2��View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 7.1���ӣ�2��View.cpp �еĵ��԰汾
inline CMy71���ӣ�2��Doc* CMy71���ӣ�2��View::GetDocument() const
   { return reinterpret_cast<CMy71���ӣ�2��Doc*>(m_pDocument); }
#endif

