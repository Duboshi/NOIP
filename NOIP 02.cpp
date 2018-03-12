/*	@author �Ų�ʶDubos

NOIP 02. ����Ŀ��ƽṹ Flow control 
	�ԡ�һ��ͨ����3��4��Ϊ����
	�ԡ����ž��䡷��1��2��Ϊ����������д�ļ��ԡ���C���ԡ�û��OJ��Ŀ����
	�ԡ�CCF����ƪ����3��4��Ϊ�ο���
	
	����Ŀ��ƽṹ���Էֳ�3�֣���һ��ͨ��p43����
	1. ��˳��ṹ����Ĭ������¼�������ǰ���˳����������ִ�д��룬��һ����
		�Ѿ������� �� 
	2. ��ѡ��ṹ�������Ϊ����֧�ṹ��������Բ�ͬ���Ҫִ�в�ͬ����ʱ����
		��if��䡢if-else����switch���ʵ�֣�
	3. ��ѭ���ṹ�����еĴ�����Ҫ�ظ�ִ�ж�Σ�������Ҫ�ظ�д��Σ�����for
		��䡢while����do-while���ʵ�֣�
 */

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	printf("NOIP 02. ����Ŀ��ƽṹ\n\n");
	
	printf("��1��ѡ��ṹ - if��䣨����һ�������ж��Ƿ����1��С��100��\n");
		//����һ��ͨ��p44��3.2������һ���������������1��С��100�������yes�� 
		int a;
		scanf("%d", &a);
		if (a>1 && a<100)
			printf("yes\n");
		/*��if��䡿��д���ǣ�
			
			if(�������ʽ)
			{
				���1;
				���2;
				... 
			} 
			
		�书��������������ʽ��ֵΪ�棬��{}�������佫��ִ�У�����{}�����
		��䶼�������ԡ�{}����ֻ��һ����䣬��{}����ʡ�ԡ� 
		 */
		printf("\n"); 
	
	printf("��2��ѡ��ṹ - if����Ӧ�ã����������ɴ�С����\n");
		/*����һ��ͨ��p45��3.3�������������������Ӵ�С˳��������м��Կո�ָ���
		�����кܶ��ֽⷨ��������������Ϊ��Ӧ��if��䣬˼·�ǣ�
		�Ƚ�a��b��ȣ�����Խϴ�ֵ����a����Сֵ����b��
		�ٽ���a��c��ȣ�����Խϴ�ֵ����a����Сֵ����c����ʱa�Ѿ��������ˣ�
		�����b����c��ȣ�����Խϴ�ֵ����b����Сֵ����c��������ɡ�
		*/
		int b, c, temp;
		scanf("%d%d%d", &a, &b, &c);
		if (a<b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		if (a<c)
		{
			temp = a;
			a = c;
			c = temp;
		}
		if (b<c)
		{
			temp = b;
			b = c;
			c = temp;
		}
		printf("%d %d %d\n", a, b, c);
		printf("\n");
		
	printf("��3��ѡ��ṹ - if-else��䣨����һ�������ж��Ƿ����1��С��100��\n");
		//(��1�����Ķ�������һ���������������1��С��100�����yes���������no)
		cin>>a;
		if (a>1 && a<100)
			printf("yes\n");
		else
			printf("no\n");
		/*��if-else��䡿��д���ǣ�
			
			if(�������ʽ)
			{
				���a1;
				���a2;
				... 
			}
			else
			{
				���b1;
				���b2;
				... 
			}
			
		�书��������������ʽ��ֵΪ�棬�����a1��a2...����ִ�У��������b1��
		b2...����ִ�С�{}����ֻ��һ����䣬��{}����ʡ�ԡ�
		 */
		printf("\n");
	
	printf("��4��ѡ��ṹ - if-else����Ƕ�ף���������������ģ�\n");
		//����һ��ͨ��p47��3.5�����������������������������
		cin >> a >> b >> c;
		if (a>b && a>c)
			temp = a;
		else
			if (b>a && b>c)
				temp = b;
			else
				temp = c;
		printf("%d\n", temp);
		//�����ǽ̲ĵĽ�𣬵����д��󣨱�������5 5 1�����1����Ӧ����ô������
		//��if-else���Ƕ��ʱ��else��������ǰ�������һ��if��ԡ�
		printf("\n");
	
	printf("��5��ѡ��ṹ - ��Ŀ���������������������ģ�\n");
		 /*����һ��ͨ��p49������Ŀ���������д���ǣ� 
		 	x = condition? a:b
		 	
		�书�ܵ�ͬ�ڣ�
			if (condition)
				x = a;
			else
				x = b;
		������Ŀ���������ϸ����⡣ 
		*/
		a = a>b? a:b;
		b = b>c? b:c;
		temp = a>b? a:b;
		printf("%d\n", temp); 
		printf("\n");
		
	printf("��6��ѡ��ṹ - switch��䣬break��䣨���ڼ���\n");
		//����һ��ͨ��p52��3.9������1-7��һ�����������Ǽ���������ڼ�����һ��
		//����֮����ʾweekday������������ʾweekend��
		int n;
		scanf("%d", &n);
		switch(n)
		{
			case 1:
				printf("Monday");
				break;
			case 2:
				printf("Tuesday");
				break;
			case 3:
				printf("Wednesday");
				break;
			case 4:
				printf("Thursday");
				break;
			case 5:
				printf("Friday");
				break;
			case 6:
				printf("Saturday");
				break;
			case 7:
				printf("Sunday");
				break;
			default:
				printf("Input error\n");
		}
		switch(n)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				printf(" weekday\n");
				break;
			case 6:
			case 7:
				printf(" weekend\n");
				break;
		}
		/* The typical syntax of��switch statment�� is:
		 
			switch (expression)
			{
				case constant1:
			    	group-of-statements-1;
			    	break;
				case constant2:
			    	group-of-statements-2;
				break;
				...
			  	default:
			    	default-group-of-statements
			}
		     
		switch evaluates expression and checks if it is equivalent to constant1;
		if it is, it executes group-of-statements-1 until it finds the ��break
		statement�� and then jumps to the end of the entire switch statement. 

		If expression was not equal to constant1, it is then checked against
		constant2. If it is equal to this, it executes group-of-statements-2
		until a break is found, when it jumps to the end of the switch.

		Finally, if the value of expression did not match any of the previously
		specified constants (there may be any number of these), the program
		executes the statements included after the default.
		
		ע�⣺
		1. expression�͸���constant���������������������Ƚϣ��������ǿ�����
			���͡��ַ�����ʵ�ͣ�
		2. switch�������ж��case�����һ��default
		3. ��case�е�constantֵ������ͬ������case��������Ⱥ���ݿ�����ͬ����ʱ
			�ɽ�����case�������Ⱥ֮ǰ����ʾ��Щcaseִ�е����Ⱥ����ͬ�ģ� 
		4. default����û�У�����еĻ������һ����default����䲻��Ҫbreak����Ϊ
			default�Ѿ���switch���ĩβ�ˣ� 
		5. case��default��������Ⱥ�������Բ�ʹ��{}�� 
		*/
		printf("\n");
	
	printf("��7��ѡ��ṹ - switch����Ӧ�ã��������ļӼ��˳���\n"); 
		//����һ��ͨ��p53��3.10�������������ļӼ��˳����м��ÿո�ָ�������
		//100 / 25����������
		
		double x, y;
		char op;
		cin >> x >> op >> y;
		switch(op)
		{
			case '+':
				printf("%f\n", x + y);
				break; 
			case '-':
				printf("%f\n", x - y);
				break;
			case '*':
				printf("%f\n", x * y);
				break;
			case '/':
				if (y == 0)
					printf("The divisor cannot be zero.\n");
				else
					printf("%f\n", x / y);
				break;
			default:
				printf("Invalid operator!\n");
		}
		printf("\n"); 
	
	printf("��8��ѭ���ṹ - for��䣨��ͣ�1 + 2 + ... + 100 =��\n");
		//����һ��ͨ��p57��4.1��
		int sum = 0;
		for(int i = 1; i <= 100; i++)
			sum += i;
		printf("%d\n", sum);
		printf("\n");
		/*
		The syntax of ��for loop�� is:

		for (initialization; condition; update)
		{
		group-of-statements;
		}
		
		1. Step 1: initialization executed. Generally, this declares a counter
			variable, and sets it to some initial value. This is executed a
			single time, at the beginning of the loop.
		2. Step 2: condition checked: If it is true, the loop continues;
			otherwise, the loop ends, and statement is skipped, going directly
			to step 5.
		3. Step 3: statement executed: As usual, it can be either a singl
			statement or a block enclosed in curly braces { }.
		4. Step 4: update executed and the loop gets back to step 2.
		5. Step 5: the loop ends.
		6. The three fields in a for-loop are optional. They can be left empty,
			but in all cases the semicolon signs between them are required.
		*/ 
	
	printf("��9��ѭ���ṹ - for����Ӧ�ã���ͣ���1��n���������͡�ż���ͣ�\n");
		//����һ��ͨ��p57��4.3��
		int sumOdd = 0, sumEven = 0;
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			if(i%2 == 1)
				sumOdd += i;
			else
				sumEven += i;
		}
		printf("%d %d\n", sumOdd, sumEven);
		printf("\n");
		
	printf("��10��ѭ���ṹ - for����Ӧ�ã��׳ˣ�\n");
		//����һ��ͨ��p59��4.4������int����n�����long long����n!��
		int m;
		int fac1 = 1;
		long long fac2 = 1;
		scanf("%d", &m);
		for(int i = 1; i <= m; i++)
			{
				fac1 *= i;
				fac2 *= i;
			}
		printf("%lld\n%lld\n", fac1, fac2);
		//fac1�ܹ����㵽12!����fac2�ܹ����㵽20!
		printf("\n");
			
	printf("��11��ѭ���ṹ - while��䣨ǰ���ٸ��������ĺ͸պò�����1000����\n");
		//����һ��ͨ��p61��4.5��
		n = 0, sum = 0;
		while(sum <= 1000)
		{
			n++;
			sum += n;	
		}
		printf("%d\n", n-1);
		/*The typical syntax of��while loop�� is:
			
			while(condition)
			{
				group-of-statements
			}
		
		1. The while-loop simply repeats statement while expression is true.
		2. If there are more than one statements in expression, only the last
			statement will be checked.
		3. If, after any execution of statement, expression is no longer true,
			the loop ends, and the program continues right after the loop.
		*/
		printf("\n");
		
	printf("��12��ѭ���ṹ - while����Ӧ�ã�ŷ������㷨��\n");	
		/*����һ��ͨ��p62��4.6����������������������Լ����
		The Euclidean algorithm��շת�������relies on the following theorem:
			for any nonnegative integer a and any positive integer b,
			gcd(a, b) = gcd(b, a mod b)
		
		To prove this theorem, we need to show that:
			gcd(a, b) | gcd(b, a mod b) and
			gcd(b, a mod b) | gcd(a, b)
		Two positive integers dividing each other must be equal.
			
		The detailed proof of the theorem can be found in:
			CLRS 2009, Introduction to Algorithms 3rd ed. p934
			K. Rosen 2012, Discrete Mathematics and Its Applications, 7th ed. p268
		
		Calculate gcd(300, 12) and gcd(300, 72) by hand to practice.
		*/
		cin >> a >> b;
		int r = a % b;
		while(r)
		{
			a = b;
			b = r;
			r = a % b;
		}
		printf("%d\n", b);
		printf("\n");
	
	printf("��13��ѭ���ṹ - do-while��䣨ŷ������㷨��\n");
		//����һ��ͨ��p67��4.9����do-while���ʵ��ŷ������㷨��
		cin >> a >> b;
		do
		{
			r = a % b;
			a = b;
			b = r;
		}
		while(r != 0);
		printf("%d\n", a);
		/*The typical snytax of ��do-while lopp�� is:
		
			do
			{
				group-of-statements
			}
			while(condition);
			
		It behaves like a while-loop, except that condition is evaluated after
		the execution of statement instead of before, guaranteeing at least one
		execution of statement, even if condition is never fulfilled. 
		*/
		printf("\n");
	
	printf("��14��ѭ��Ƕ�ף����1��10�Ľ׳�֮�ͣ�\n");
		//����һ��ͨ��p70��4.12��
		
		//��ֱ�ӵ������ǣ� 
		sum = 0; 
		for(int i = 1; i <= 10; i++)
		{	
			int fac = 1;
			for(int j = 1; j <= i; j++)
				fac *= j;
			sum += fac;
		}
		printf("%d\n", sum);
		
		//���������Ҫ����65��ѭ�������ǿ��ԸĽ����£���Ҫ10��ѭ���� 
		sum = 0;
		int fac = 1;
		for(int i = 1; i <=10; i++)
		{
			fac *= i;
			sum += fac;
		}
		printf("%d\n", sum);
	printf("\n");
	
	printf("��15��ѭ��Ƕ�ף�ˮ�ɻ�����\n");
		//����һ��ͨ��p73��4.15������λ��abc = a^3 + b^3 + c^3��ABCΪˮ�ɻ�����
		//���ȫ��ˮ�ɻ������м��ÿո�ָ���
		for(int a = 1; a <= 9; a++)
			for(int b = 0; b <=9; b++)
				for(int c = 0; c <=9; c++)
				{
					if(a*a*a + b*b*b + c*c*c == a*100 + b*10 + c)
					printf("%d ", a*100 + b*10 + c);
				}
				printf("\n");
	printf("\n");
	

	printf("��16��ѭ��Ƕ�ף�continue��䣨aabb��ȫƽ������\n"); 
		//����һ��ͨ��p74��4.17��������������aabb����λ��ȫƽ������ 
		for(int i = 1; ; i++)
		{
			int n = i*i;
			if(n<1000)
				continue;
				/*The ��continue statement�� causes the program to skip the rest
				of the loop in the current iteration, as if the end of the
				statement block had been reached, causing it to jump to the
				start of the following iteration.
				*/ 
			if(n>9999)
				break; //break��ʾ�˳�ѭ�� 
			int aa = n/100, bb = n%100;
			if(aa/10 == aa%10 && bb/10 == bb%10)
				printf("%d ", n);
		}
		printf("\n");
		
		//����Ĵ�����Ըĳ����������ӣ�
		for(int i=32; i*i<10000; i++)
		{
			int aa = i*i/100, bb = i*i%100;
			if(aa/10 == aa%10 && bb/10 == bb%10)
				printf("%d ", i*i);
		}
		printf("\n");
		//for(int i=1; i*i>999 && i*i<10000; i++)�ǲ��еģ���Ϊ��ʼֵ������ì�� 	
	printf("\n");

	printf("��17��ѭ��Ƕ�ף��ֽ���������\n"); 
		//����һ��ͨ��p75��4.18������һ���������������ֽ������������
		//��������36������2 * 2 * 3 * 3��
		int i = 2; 
		scanf("%d", &n);
		do
		{
			while(n%i == 0)
			{
				printf("%d", i);
				n /= i;
				if(n != 1)
					printf(" * ");
			}
			i++;
		}
		while(n != 1);
		printf("\n");
	printf("\n");
	
	return 0;
}

/*	
	��ҵ��
		1.4��̻���֮�߼����ʽ��������֧��21�⣩ http://noi.openjudge.cn/ch0104/
			ѡ����10�⼴�ɣ�������� 
				04:��żASCIIֵ�жϣ� 
				20:��һԪ���η��̵ĸ��� 
				
		1.5��̻���֮ѭ�����ƣ�45�⣩ http://noi.openjudge.cn/ch0105/
			ѡ����20�⼴�ɣ��������
				 
*/
