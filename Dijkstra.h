#pragma once
#include <limits.h> 

//Dijkstra�㷨����һ����ά�����ʾһ������ͼ�ṹ��������������֮��ߵ�Ȩ��Ϊ�����ֵ�������߲��ɵ����ֵΪ0
//vΪ��ʼ�ڵ㣬graphsizeΪ�ڵ����
//distΪ��v������Ŀ������С����
//prevΪ����Ŀ��㵽��v�Ļ��ݹ���
//graphΪ����ͼ����
void Dijkstra(int v, int graphsize, float *dist ,int *prev ,float **graph);

//���·������
//vΪ��ʼ�㣬uΪĿ���
void PathRecall(int *prev,int v,int u,int graphsize);
