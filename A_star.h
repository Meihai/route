#pragma once

//A*�㷨��Dijkstra�����Ƶ�Ҳ�����𣬶���Dijkstra������Ҫ��Ӧ�����ڶ���ͼ�������ݽṹ��·��Ѱ��
//����һ��ƽ���ͼ��˵��ʵ�������ǿ��Խ��俴��դ�����ݶ�����ʸ������
//�ڴ������ʹ��Dijkstra�㷨�㷨�Ƚϸ��ӣ����ڴ濪��̫�󣬲���̫����

//���ȶ���һЩ����
#define blocked -1		//����ͨ���ڵ�
#define unblocked 0		//��ͨ���ڵ�

#define movestraight 1	//ˮƽ����ֱ�ƶ�
#define movetilt 1.414	//б���ƶ�

typedef struct IPOINT
{
	int x;
	int y;
}A_Point;

//A*�㷨 ����pntStΪ��ʼĿ��� pntDstΪ��ֹĿ���
//xsize ,ysize Ϊͼ�Ĵ�С
//distΪѡ�񵽵ĵ㵽��ʼ��ľ���
//prevΪ��ǰ��ĸ��ڵ�
//graphΪͼ�ṹ
void A_Star(A_Point pntSt,A_Point pntDst,int xsize,int ysize,float** dist,int **prev,int **graph);

void PathRecall(A_Point pntSt,A_Point pntDst,int xsize,int ysize,int **prev);