/*

����ʽ

     B      DEF
A + --- + ------- = 10
     C      GHI
     
�������ʾ�����⣬���Բμ���ͼ1.jpg����
	 
	 
�����ʽ��A~I����1~9�����֣���ͬ����ĸ����ͬ�����֡�

���磺
6+8/3+952/714 ����һ�ֽⷨ��
5+3/1+972/486 ����һ�ֽⷨ��

�����ʽһ���ж����ֽⷨ��

ע�⣺���ύӦ���Ǹ���������Ҫ��д�κζ�������ݻ�˵�������֡�

*/

#include<iostream>
#include<cstring>
using namespace std;

//baoli
bool used[9];

int main(){
	int count = 0;
	memset(used,false,sizeof(used));
	for(int i = 1; i < 10; i++){ //A
		used[i]=true;
		for(int j = 1; j < 10; j++){ //B
			if(used[j])
				continue;
			used[j] = true;
			for(int k = 1; k < 10; k++){ //C
				if(used[k])
					continue;
				used[k] = true;
				int ac = i * k;
				for(int m = 123; m < 1000; m++){ //DEF
					int x = m / 100;
					int y = (m % 100)/10;
					int z = m % 10;
					if ((used[x] || used[y]) || used[z])
						continue;
					if((x==y || x==z) || y==z || x== 0 || y==0 ||z==0)
						continue;
					if (m % 10 == 0)
						continue;
					used[x] = true;
					used[y] = true;
					used[z] = true;
					int cd = k * m;
					for(int n = 123; n <1000; n++){ //GHI
					int q = n / 100;
					int w = (n % 100)/10;
					int e = n % 10;
					if ((used[q] || used[w]) || used[e])
						continue;
					if((q==w || q==e) || w==e ||q==0 || w==0 || e==0)
						continue;
					if (n % 10 == 0)
						continue;
						if(((ac+j)*n+cd) == ((k*n)*10)){
							count++;
						}
					}
					used[x] = false;
					used[y] = false;
					used[z] = false;
				}
				used[k] = false;
			}
			used[j] = false;
		}
		used[i] = false;
	}
	cout<<count<<endl;
	return 0;
}
//29
