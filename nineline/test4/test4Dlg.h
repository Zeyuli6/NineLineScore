
// test4Dlg.h : ͷ�ļ�
//

#pragma once


#define   UM_MYMESSAGE     WM_USER+1
// Ctest4Dlg �Ի���
class Ctest4Dlg : public CDialogEx
{
// ����
public:
	Ctest4Dlg(CWnd* pParent = NULL);	// ��׼���캯��
	BOOL PreTranslateMessage(MSG * msg);
	
// �Ի�������
	enum { IDD = IDD_TEST4_DIALOG };
	CComboBox	m_comboDevOut;
	CComboBox	m_comboDevIn;
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
		
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//��������   .hͷ�ļ�
	afx_msg LRESULT OnMyMessage(LPARAM, WPARAM);
	DECLARE_MESSAGE_MAP()
public:
	void Draw(char score, long begin_time, long end_time);
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	
};
