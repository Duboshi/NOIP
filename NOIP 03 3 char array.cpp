/*	@author �Ų�ʶDubos

NOIP 03.3 �ַ�����Character Array 
	�ԡ�CCF����ƪ����5��5.4�ڡ���CCF����ƪ����2��Ϊ����
	�ԡ�һ��ͨ����һ���ֵ�5�µ�����Ϊ���� 
	�ԡ����ž��䡷��3��Ϊ�ο��� 
 */
 
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{ 

	printf("��1���ַ�����\n");
		/*����һ��ͨ��p97����CCF����ƪ��p221��
		1. ���ַ����顿��ָԪ��Ϊ�ַ������飬Ҳ��һά����ά֮�֣���Ԫ��Ϊ������
			ʵ���������ԭ����ͬ���������ַ������ڼ��������ֵ����������Ҫ���ã�
			���Ե������� 
		2. �ַ�����ĳ�ʼ����ֵ������
			int a [2] = {'a', 'b'};
			����
			int b [2] = {};
			��ʾ��ֵΪ'\0'�����ַ�null character�������ǲ�����
			b = a;
			��ֵ������ֱ��������֮ǰ���ܹ���������һ���ģ� 
		3. �ַ��������ַ����Ĺ�ϵ����C�����У����ַ�������ĩβ�п��ַ���Ϊ����
			�ַ����ַ����飬���ַ����鲻һ���н����ַ������ԣ��ַ���һ�����ַ�
			���飬���ַ����鲻һ�����ַ����������Ƚ��ַ����飬Ȼ���ٽ��ַ�����
		4. ����������charArr1��charArr2�����ַ��������ǵ�ֵ����ȫ��ͬ�ģ� 
			�Ҷ���charArr3��һ���ַ���charArr3��ֻ��һ���ַ���������ַ�����
			����ע��charArr2���������ַ������ַ����鸳ֵʱ�������Խ�磻 
		*/
		char charArr1 [5] = {'a','b','c','d','\0'};
		char charArr2 [5] = "abcd";
			//ע��charArray2��charArray1��ͬ����charArray3��һ���ַ� 
		char charArr3 [4] = {'a','b','c','d'};
			//charArray3�����ַ��� 
		char charMat [3][4] = {"abc","def","ghi"};
			//�����ά��������3���ַ�����ÿ���ַ�������4���ַ��������ǳ���Щ�ַ�
			//���ĳ���Ϊ3��
		printf("%s\n", charArr1);
		printf("%s\n", charArr2);
		printf("%s\n", charArr3);
		/*
		4. �ַ���������룺
				scanf("%s", charArr3)��ע���������ǰ����&������scanfֻ����
				����������scanf�����м��������ַ��ż����һ���ַ����͵ý������
				�ַ����顣 
				������Ҫ�ü��������"Hello, world!"������Ҫ�����ַ�����;
				
				cinҲ�������ո񡢻س�����tab���ַ��žͻ�ֹͣ���룬����ҲҪ����
				����ַ����飻
				
				�����Ҫ�ѴӼ���������м��пո��һ���ַ�������һ�仰���洢��
				һ���ַ��������棬����Ҫ��getchar()������NOIP 01 Introdution��
				�������ܹ���
				
					getchar()ֻ�ܽ���һ���ַ���һ����ĸҲ���ַ�����������
						һ���ַ�ʱֻ���ܵ�һ���� 
					getchar()��ѻس�����һ���ַ����룬�����������getchar()
						֮ǰ����س�������Ҫ��һ��getchar()����֮ǰ�Ļس���
						������������������getchar()��Ӧһ��������ȫ�������ַ���
						�ٰ��س���
					putchar()��������������ַ����ݣ�
		*/
		char charArr4 [10];
		char charArr5 [10]; 
		scanf("%s %s", charArr4, charArr5);
		printf("%s %s\n", charArr4, charArr5);
		
		cin>>charArr4>>charArr5;
		cout<<charArr4<<" "<<charArr5<<endl;
		
		/*
		5. ����char��int���໥ת����������NOIP 01���潲�� 
		*/
		char c = 97;
			//��ֵ��������ת������ASCII����תΪ�ַ�����һ��ͨ��p26-27����
		char d = 'a';
		cout<<c<<endl;
		cout<<d<<endl;
			//�������н����һ���ģ���������ַ�a��
		c = 97 - 32;
		d = 'a' - 32;
		cout<<c<<endl;
		cout<<d<<endl;
		 	//�������н��Ҳ��һ���ģ���������ַ�A��
	printf("\n");
		
	printf("��3���ַ������Ӧ�� - Palindrome�����Ĵʣ�\n");
		/*��CCF����ƪ��p220��5.18����һ��ͨ��p94��5.12�������ž��䡷p48 (UVa401)
			һ���ʣ�����������Ҷ��ʹ����������ȫ��ͬ�����ǻ��Ĵʡ�
			���룺һ���ַ���������10λ�� 
			������LEVEL
			������������YES���������NO
			������YES
		*/
		char charArr [100] = {};		
		int i, length=0;
		bool check=true;
		
		//�ȶ���һ���� 
		scanf("%s", charArr);
		
		//�������ʵĳ���
		for (i=0; i<100; i++)
			if (charArr[i] != '\0')
				length++;
		
		//���������з���� 
		//cout<<length<<endl;
		
		//��ʼ���
		for (i=0; i<length/2; i++)
			if (charArr[i] != charArr[length-1-i])
			{
				check=false;
				break;
			}
		
		//������ 
		if (check)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	printf("\n");
	getchar();//�µ�����getchar()�����������Ȱ�֮ǰ����Ļس��Ե� 

	printf("��4���ַ������Ӧ�� - �滻����\n");
		/*��CCF����ƪ��p223��5.21����һ��ͨ��p100��5.15
			���룺	���У���һ��Ϊһ�仰��������100�ַ������ڶ���Ϊ�����ַ�����
					���ַ��滻Ϊβ�ַ� 
			������	Oh baby, you know I love U so much.
					I U 
			�����	һ�У�Ϊ�滻��Ľ��
			������	Oh baby, you know U love U so much. 
			
		������Ĵ�ֻ������һ���ʣ������Ҫ������δ�����仰��������洢�� 
		*/
		char a, b;
		length=0;
		
		//�����һ�е�һ�仰 
		while ( (charArr[length++]=getchar() ) != '\n');
		length--; //��Ϊ��������length����ʱ���������Ļس� 
		
		//���������з����
		//printf("%d\n", length);
		 
		a = getchar();
		getchar();
		b = getchar(); 
		getchar();
		
		//�滻����� 
		for (i=0; i<length; i++)
		{
			if (charArr[i] == a)
				printf("%c", b);
			else
				printf("%c", charArr[i]);
		}
		printf("\n");
	printf("\n");
	
	printf("��4���ַ������Ӧ�� - ���������\n");
		/*����CCF����ƪ��p225��5.22�� 
			���룺һ�仰�����������ţ�������100���ַ���
			������I love you
			������Ͼ仰����Ĵʣ��ո񣬸ôʵĳ���
			������love 4
		*/
		
		int sizeOfWord=0, max=0, index=0;
		length=0; 
			//�ֱ����ǰ����ʵĳ��ȣ���ʵĳ��ȣ���ε���ʼλ����� 
		
		//����һ�仰����������仰�������ַ������� 
		while ( (charArr[length++]=getchar() ) != '\n');
		length--;
		
		//���������з����
		//printf("%d\n", length);
		
		//������Ĵʣ�����¼�䳤�� 
		for (i=0; i<length+1; i++)
			//+1��Ϊ�˰������Ļس������������Ĵ������Ļ���û������ 
		{
			if (charArr[i]!=' ' && charArr[i]!='\n')
				sizeOfWord++;
			else
			{
				if (sizeOfWord>max)
				{
					max = sizeOfWord;
					index = i - sizeOfWord;
				}
				sizeOfWord=0;
			}
		}
			
		//���
		for (i=index; i<index+max; i++)
			printf("%c", charArr[i]);
		printf(" ");
		printf("%d\n", max);	
	printf("\n");
	
	printf("��5���ַ������Ӧ�� - �ӷ�������\n");
		/*(��CCF����ƪ��p226��5.23��
			���룺���������������������Ǿ�λ�������ļӷ����ʽ���м��мӺţ�
				�����ո�
			������11+23 
			�������� 
			������34
		
		�������������ַ����������ȴ�����������⣬����ֻ�ܴ���intȡֵ��Χ��
		(-2^31=-2,147,483,648, 2^31-1=2,147,483,647)
		�������ӷ������������Χ�Ļ�����Ҫ�õ�������ܵĸ߾��ȼ��㡣 
		*/
		int size1=0, size2=0, power=1;
		length=0; a=0; b=0;
		
		//����ӷ����ʽ����������ʽ�����ַ������� 
		while ( (charArr[length++]=getchar() ) != '\n');
		length--; //���������Ļس� 
		
		//���������з����
		//printf("%d\n", length);
		
		//�жϵ�1��������λ��size1�����������2��������λ��size2 
		for (i=0; i<length; i++)
		{
			if (charArr[i]!='+')
				size1++;
			else
				break;
				
		}
		size2 = length-1-size1;
		
		//����size1�з����
		//printf("%d\n", size1); 
		
		//�����1��������ֵ����ֵ��a
		for (i=size1-1; i>=0; i--)
		{
			a += (charArr[i]-'0') * power;
			power *= 10;
		}
		power = 1;
		
		//�����2��������ֵ����ֵ��b
		for (i=length-1; i>=length-size2; i--)
		{
			b += (charArr[i]-'0') * power;
			power *= 10;
		}
		
		//���
		printf("%d\n", a+b);	
	printf("\n");
	
	return 0;
}

//
