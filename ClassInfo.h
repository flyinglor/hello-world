/****************************************************\
������Ϣ��
     ���������ѷ�
��Ȩ������
     ��Ȩ�ɱ�����ͨ��ѧ���������Ϣ����ѧԺ�߼��������ѵ���γ���ӵ��
ģ������: 
    ClassInfo.h
ժҪ:
    ����ʵ��3��ѧ
����˵��:
������
ģ����ʷ:
�������ѷ���2010��11��29�մ�����ģ�飬email: yflin@bjtu.edu.cn
	���ѷ���2011��12��5���޸�
	���ѷ���2012��12��6���޸�
	������2017��2��15���޸ģ�email��shhan@bjtu.edu.cn

**********************************************************/
//�˴���ֹ���ظ�����ͷ�ļ����������ظ�����
#ifndef CLASSINFO_H_  


#define CLASSINFO_H_

//�༶��Ϣ�ṹ������
typedef struct ClassInfo{
	int nClassNO;//�༶����
	char szClassName[20];//�༶����
	int nStudentNumber;//ѧ������
}CLASSINFO;

//�༶��Ϣ�������ļ���ѧ��_����_Lab9.dat�����ļ�ͷ�ṹ
typedef struct ClassInfoInFile{
	CLASSINFO Class;//�༶��Ϣ
	int nStudentInfoOffset;//ѧ����Ϣ�洢λ��������ļ���ʼλ�õ�ƫ���� >0
	char carrPreserved[512];//Ԥ��512�ֽڣ�������չ
}CLASSINFOINFILE;

//ѧ����Ϣ�ṹ������
typedef struct StudentInfo{
	char szID[9]; //��\0��β��ѧ��
	char szName[21];//��\0��β������
	double darrScores[3];//ĳ���ſεĳɼ�
}STUDENTINFO;

//��Ӵ���������µ�����˵�������½�ͷ�ļ���������




#endif
