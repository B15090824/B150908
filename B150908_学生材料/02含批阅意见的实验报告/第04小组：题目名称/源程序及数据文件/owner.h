/* ��Owner.h�ļ����������� */
#ifndef _OWNER              /*�������룬��ֹ�ظ������Ĵ���*/
#define _OWNER
#include <string.h>
#define NUM 20              /*���峵�������������˴����Ը���ʵ����Ҫ�޸ĳ���ֵ*/
struct Owner                /*������¼��������*/
{
	long num;
	char name[20];
	char sex[10];
	int time[10];
	int total;
};
typedef struct Owner Owner;            
#define sizeOwn sizeof(Owner)          /*һ��������¼����Ҫ���ڴ�ռ��С*/
int readOwn(Owner Own[],int n);        /*���복����¼ֵ�����ƺ�Ϊ0������涨������¼ʱֹͣ*/
void printOwn(Owner *Own,int n);        /*������г�����¼��ֵ*/
void calcuTotal(Owner Own[],int n);         /*�������г������ܷ�*/
void calcuTimetable(double m[1][3],Owner Own[],int n);                /*�����������̡�ƽ��ͣ��ʱ��*/
int searchOwn(Owner Own[],int n,Owner s,int condition,int f[]);        /*������������������s��ȵĸ�Ԫ��*/
                                                /*�±�����f�����У���f��������Ϊ���ҽ�����ܲ�ֹһ����¼*/
int insertOwn(Owner Own[],int n,Owner s);           /*�������в���һ��Ԫ�ذ����ƺ�����*/
int deleteOwn(Owner Own[],int n,Owner s);            /*��������ɾ��һ��ָ�����ƺŵ�Ԫ��*/
#endif