#include"stdafx.h"
#include"Dijkstra.h"
#include <float.h>  
#include<iostream>

//Dijkstra���·���㷨ʵ��
void Dijkstra(int v, int graphsize, float *dist ,int *prev ,float **graph)
{
	//������߼����̺�����˼
	bool *s=new bool[graphsize];//�ж��Ƿ񽫸õ���뵽s������
	int narray=graphsize-1,varray=v-1;	//ת��Ϊ����ı���Ǵ�0��ʼ
	for(int i = 0;i <= narray;++i)
	{
		dist[i]=graph[v][i];
		s[i] = false;

		//�����ܹ��ɳ�ʼ��ֱ�ӵ���ĵ㶼���
		if(dist[i] == FLT_MAX)
			prev[i] = 0;
		else
			prev[i] = v;
	}
	dist[v] = 0;
	s[v] = true;
 
    // ���ν�δ����S���ϵĽ���У�ȡdist[]��Сֵ�Ľ�㣬������S��
    // һ��S����������V�ж��㣬dist�ͼ�¼�˴�Դ�㵽������������֮������·������
	for(int i=1;i<=narray;++i)
	{
		float tmp = FLT_MAX;
		int u = v; //v����һ�������Сֵ
		
		//ȡ��С��dist
		for(int j=0;j < narray; ++j)
		{
			if(!s[j]&&dist[j]<tmp)
			{
				u = j;
				tmp = dist[j];
			}
		}
		s[u] = true;

		//����dist
		for(int j=0;j<=narray;++j)
		{
			if(!s[j] && graph[u][j] < FLT_MAX)
			{
				float newdist = dist[u] + graph[u][j];
				if(newdist < dist[j])
				{
					dist[j] = newdist;
					prev[j] = u;
				}
			}
		}
	}
}

//·�����ݹ���
void PathRecall(int *prev,int v,int u,int graphsize)
{
	int *que=new int[graphsize+1];
	int tot = 0;
	int tmp = prev[u];
	while(tmp != v&&tot<graphsize)
	{
		que[tot] = tmp;
		tot++;
		tmp = prev[tmp];
	}
	que[tot] = v;
	for(int i=tot; i>=0; --i)
        if(i != 1)
           std::cout << que[i] << " -> ";
        else
           std::cout << que[i] << std::endl;
}