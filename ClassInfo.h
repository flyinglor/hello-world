/****************************************************\
作者信息：
     姓名：林友芳
版权声明：
     版权由北京交通大学计算机与信息技术学院高级程序设计训练课程组拥有
模块名称: 
    ClassInfo.h
摘要:
    用于实验3教学
其它说明:
　　无
模块历史:
　　林友芳于2010年11月29日创建本模块，email: yflin@bjtu.edu.cn
	林友芳于2011年12月5日修改
	林友芳于2012年12月6日修改
	韩升于2017年2月15日修改，email：shhan@bjtu.edu.cn

**********************************************************/
//此处防止因重复包含头文件引的类型重复定义
#ifndef CLASSINFO_H_  


#define CLASSINFO_H_

//班级信息结构体类型
typedef struct ClassInfo{
	int nClassNO;//班级代码
	char szClassName[20];//班级名称
	int nStudentNumber;//学生人数
}CLASSINFO;

//班级信息二进制文件（学号_姓名_Lab9.dat）的文件头结构
typedef struct ClassInfoInFile{
	CLASSINFO Class;//班级信息
	int nStudentInfoOffset;//学生信息存储位置相对于文件起始位置的偏移量 >0
	char carrPreserved[512];//预留512字节，用于扩展
}CLASSINFOINFILE;

//学生信息结构体类型
typedef struct StudentInfo{
	char szID[9]; //以\0结尾的学号
	char szName[21];//以\0结尾的姓名
	double darrScores[3];//某三门课的成绩
}STUDENTINFO;

//请从此往后添加新的类型说明，或新建头文件声明类型




#endif
