/*

��������

ĳ����ĳ�꿪ʼÿ�궼��һ������party������ÿ�ζ�Ҫ��Ϩ��������ͬ����������

��������������һ����Ϩ��236������

���ʣ����Ӷ����꿪ʼ������party�ģ�

����д����ʼ������party����������
ע�⣺���ύ��Ӧ����һ����������Ҫ��д�κζ�������ݻ�˵�������֡�
*/

#include <iostream>
using namespace std;

int main(){
	int x;
	int result = 0;
	bool flag = false;
	for(int i = 1; i < 100; i++){
		result = 0; 
		for(int j = i; j < 100; j++){
			result += j;
			if(result>236){
				break;
			}
			if(result == 236){
				x = i;
				flag = true;
				break;
			}
		}
		if(flag == true)
			break; 
	} 
	cout<<x<<endl;
	return 0;
} 

//26

