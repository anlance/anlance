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

#include <iostream>
using namespace std;

//baoli

int main(){
	int count = 0;
	for(int i = 1; i < 10; i++){ //A
		for(int j = 1; j < 10; j++){ //B
			for(int k = 1; k < 10; k++){ //C
			int ac = i*k;
				for(int m = 111; m < 1000; m++){ //DEF
				if(m%10==0)
					continue;
				int cd = k*m;
					for(int n = 111; n <1000; n++){ //GHI
					if(n%10==0)
						continue;
						if(((ac+j)*n+cd) == ((k*n)*10)){
							count++;
						}
					}
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
//53422
