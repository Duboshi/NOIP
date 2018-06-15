/*	@author �Ų�ʶDubos

NOIP 03.6 �߾��ȼ��� High Precision Computation
	��Ҳ��Ϊ�����������㡱�� 
	�ԡ�CCF����ƪ����7.2��Ϊ����
	�ԡ�������Ƶ���������ʵ������7��Ϊ����
	�ԡ���Ϣѧ����һ��ͨ���ڶ����ֵ�1��Ϊ�ο��� 
	���⡶�㷨�������ž��䡷��5.3�����ýṹ�彨���˴������࣬�����Ǹ߾����㷨��
	
	��һ����Ҫָ�롢���úͺ�����֪ʶ��������߱���Щ֪ʶ��������ʱ�Թ����ڣ�֮��
	��ͷ�ٿ���
 */

#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <climits> 
#include <algorithm>

using namespace std;
int num1[205], num2[205], temp[205], result[205], len_num1, len_num2, len_result, i;
string s1, s2;

/*	��Ҫ�����￪ʼ��������0��ʼ��������1�ͻ���������assign���������á� 
 
	assign��������������Ĵ���������λ����д�����飬��λ��num1[0]��num2[0]��
	ʮλ��num1[1]��num2[1]...
	
	����������ָ�������������Ϊ�˿��Ըı亯���������ֵ������ֵ�����ֱ��������
	��������������������������������ֵ�����ܵ�Ӱ�졣 */
void assign (int *num, int &len)
{
	int i; //�������
 	string s;
	cin >> s;
	len = s.length();
	for (i=0; i<len; i++)
		num[i] = s[i] - '0';
	reverse(num, num+len); //algorithms�⺯����������ǰlenλԪ������ 
}

int main() {
	printf("��0���߾����㷨���\n"); 
		/*C++���Ե������������ܱ��������������
		2^64 - 1 = 18,446,744,073,709,551,615
		����һ��20λ��������unsigned long long���޷���64λ���ͣ��������͵����ֵ��
		�����ʾ�����ֵ�أ�
			1. ���Խ���һ��unsigned long long��������ֵΪ-1�������޷������ͱ�����
				-1�ͻ�ֱ�ӱ�ת��Ϊ���ֵ��
			2. ����climitsͷ�ļ������ͷ�ļ���ȷ�н���limits.hͷ�ļ����ж�����
				����_UI64_MAXΪunsigned long long�����ֵ����Ȼ���ǲ�̫���ܼǵ�ס
				���ͷ�ļ�����������������ֵ����Сֵ�����֣�����ֻҪ���Ǽǵ����
				ͷ�ļ�climits����Ҫ�õ�ʱ��Ϳ���ȥͷ�ļ����Լ�������Ҫ��ֵ�� 
		*/
		unsigned long long big = -1; 
		cout<<big<<endl;
		cout<<_UI64_MAX<<endl;
		/*��ʱ��20λ���ǲ����õģ�����������Ҫ��������������������������ļ��㡣
		C++��׼ģ���STL��������к���������������Ϣѧ�����ж�����ʹ�ã�������ȴ 
		û��ר�Ŵ���߾��ȼ���Ĺ��ܣ�΢��˾������.NET Framework�����д���
		�߾��ȼ����BigInteger Structure�����������ڱ����ﲻ��ֱ���ã�
		������������Java�ı�׼����Class BigInteger����������ѧ��Ϣѧ������֧��
		Java���ԡ�
		
		������������ʹ��C++������STL����ʵ�ִ������ļӡ������ˡ������㡣 */
	printf("\n");
	
	printf("��1���������ӷ�\n");
		/*����CCF����ƪ��P172��7.1����������Ƶ���������ʵ����P136��7.1��
			����Ϣѧ����һ��ͨ��P181��1.1
			���߲��� - http://noi.openjudge.cn/ch0106/10/��
			
		����������������������200λ�ķǸ�����֮��
		�������ݣ����У�ÿ����һ��������200λ�ķǸ�������������������0��ʼ 
		������ݣ�һ�У��������������������0��ʼ
		����˼·��
			�������ӷ��ǵ��͵�����Ӧ�ã�������Ҫ�ĸ����鴦�������������ļӷ���
				��������int a1 [205]��int b1 [205]���洢�����ͱ�������
				һ������int c1 [205]�洢��λ�����
				һ������int result1 [205]�洢����� 
			����123 + 678 = 801�����Ǹ�ֵa = {3, 2, 1, 0...}, b = {8, 7, 6, 0...},
			ע�⸳ֵ˳���Ǹ�λ��ʮλ����λ...�����ӿ��Ա�֤��λ���룬���Ҽ���
			��λʱ�������������������c = {0, 1, 1, 0...}����ʾ��λ�����λ��
			ʮλ��λ1����λ��λ1��ǧλ�������޽�λ��Ȼ�� 
				result[i] = a[i] + b[i] + c[i];
			����result���κ���λ����Ԫ�ض�ֻ������λ����������������ʱ
			������Ҫע��0+0����������������ע�⣬������������������ 
		�����룺
			https://github.com/Duboshi/OJ-solutions/tree/master/noi.openjudge.cn
			�е�010610����Ŀ�������г����൱�ڽⷨһ������string�����飩������
			�ⷨ��������cstring�����飩������˼����һ���ġ� 
			*/
		//����������Ĵ��������򴢴����������δ����ڴ������������˷���������
		//�滹Ҫ�ã��������ǽ����˺���assign�����������Ͳ����ظ�д�� 
		string s1, s2;
		cin >> s1;
		len_num1 = s1.length();
		for (i=0; i<len_num1; i++) num1[i] = s1[i] - '0';
		reverse(num1, num1+len_num1); //algorithms�⺯����������ǰlen_num1λԪ������ 
	
		cin >> s2;
		len_num2 = s2.length();
		for (i=0; i<len_num2; i++) num2[i] = s2[i] - '0';
		reverse(num2, num2+len_num2);
		
		len_result = max(len_num1, len_num2) + 1; //�͵�λ��Ҫ�㹻�� 
		
		for (i=0; i<len_result; i++) //��result���������λ��ֵ��� 
		{
			result[i] = num1[i] + num2[i] + temp[i];
			if (result[i]>9)
			{
				temp[i+1] = result[i]/10;
				result[i] = result[i]%10;
			}
		}
		while (result[len_result-1]==0 && len_result>1) //����ǰ��0�������ٱ���1λ 
			len_result--;
		
		for (i=len_result-1; i>=0; i--) //������ 
			cout<<result[i]; 
	printf("\n\n"); 
	
	s1.clear(); s2.clear();
	memset(num1, 0, 205); memset(num2, 0, 205); memset(temp, 0, 205); memset(result, 0, 205);

	printf("��2������������\n");
		/*��CCF����ƪ��P174��7.2������Ϣѧ����һ��ͨ��P183��1.2
			���߲��� - http://noi.openjudge.cn/ch0106/11/
		
		����������������������200λ�ķǸ�����֮�� 
		�������ݣ����У�ÿ����һ��������200λ�ķǸ�������������������0��ʼ��
			ǰһ�������ڵ��ڵڶ����� 
		������ݣ�һ�У��������������������0��ʼ
		����˼·�����ӷ��ǳ�����
		������룺https://github.com/Duboshi/OJ-solutions/tree/master/noi.openjudge.cn
			�е�010611����Ŀ�������г����൱�ڽⷨһ������string�����飩������
			�ⷨ��������cstring�����飩�����߱���˼����һ���ġ� */ 
		int i; //�������
		assign(num1, len_num1);
		assign(num2, len_num2);
		
		len_result = max(len_num1, len_num2); //algorithm�⺯�� 
		
		for (i=0; i<len_result; i++) //��result���������λ��ֵ��� 
		{
			result[i] = num1[i] - num2[i] + temp[i];
			if (result[i]<0)
			{
				temp[i+1]--;
				result[i]+=10;
			}
		}
		while (result[len_result-1]==0 && len_result>1) //����ǰ��0�������ٱ���1λ 
			len_result--;
		
		for (i=len_result-1; i>=0; i--) //������ 
			cout<<result[i]; 
	printf("\n\n"); 
	
	s1.clear(); s2.clear();
	memset(num1, 0, 205); memset(num2, 0, 205); memset(temp, 0, 205); memset(result, 0, 205);

	printf("��3���������˷�\n");
		/*����CCF����ƪ��P174��7.3����������Ƶ���������ʵ����P138��7.2��
			����Ϣѧ����һ��ͨ��P184��1.3
			���߲��� - http://noi.openjudge.cn/ch0113/09/�� 
		
		����������������������200λ�ķǸ�����֮�˻� 
		�������ݣ����У�ÿ����һ��������200λ�ķǸ�������������������0��ʼ
		������ݣ�һ�У��������������������0��ʼ
		����˼·�������λ���˷�����ĥ����֮�����ô���ģ�� 
		������룺https://github.com/Duboshi/OJ-solutions/tree/master/noi.openjudge.cn
			�е�011309����Ŀ */ 
		
		int j; //�������, ����i�������潨������ 
		assign(num1, len_num1);
		assign(num2, len_num2); //�������������������������
		
		len_result = len_num1 + len_num2 - 1;
		
		for (i=0; i<len_num1; i++) //����result���������λ��ֵ��������λ 
			for (j=0; j<len_num2; j++)
				result[i+j] += num1[i] * num2[j];
				
		for (i=0; i<len_result; i++) //��λ 
		{
			if (result[i]>9) 
			{
				result[i+1] += result[i]/10;
				result[i] %= 10;
			}
		}
		
		while (result[len_result]) //����ǰ��0�������ٱ���1λ 
			len_result++;
		
		for (i=len_result-1; i>=0; i--) //������ 
			cout<<result[i];
	printf("\n\n");

	printf("��4������������\n");
		/*����CCF����ƪ��P176��7.4����������Ƶ���������ʵ����P141��7.3��
			����Ϣѧ����һ��ͨ��P186��1.5��
			���߲��� - http://noi.openjudge.cn/ch0113/47/��
			
		����������������������200λ�ķǸ�����֮�̣����ù������� 
		�������ݣ����У�ÿ����һ��������200λ�ķǸ�������������������0��ʼ
		������ݣ�һ�У��������������������0��ʼ
		����˼·��������������������Ƚϸ��� 
		������룺https://github.com/Duboshi/OJ-solutions/tree/master/noi.openjudge.cn
			�е�011347��Ŀ */
	printf("\n");
	return 0;
}
