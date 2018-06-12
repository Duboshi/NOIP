/*	@author �Ų�ʶDubos

NOIP 03.4 C++�ַ���string 
	��http://www.cplusplus.com/reference/string/string/Ϊ����
	��C++ Primer��3�¡���CCF����ƪ����2�¡����±�׼C++������ƽ̡̳���19.13��Ϊ����
	�ԡ��㷨�������ž��䡷��5.1.3��Ϊ�ο���
	����Ϣѧ����һ��ͨ��û��������ݡ� 
 */

#include <cstdio>
#include <iostream>
#include <cctype> //���Ǹ��µ�ͷ�ļ����������ص㣬�����������������潲 
#include <cstring>
	/*��һ������֪������C�����У����ַ��� (cstring)���洢���п��ַ�'\0'��Ϊ����
	�ַ����ַ������У����ַ����鲻һ���н����ַ��������ַ��� (cstring)
	һ�����ַ����飬���ַ����鲻һ�����ַ�����Ҫ�洢һ���ַ��� (cstring)ʱ��
	Ҫ����һ���ַ����飺
 	char s1 [100]; //s1���ֻ����100���ַ�
	
	�����ַ��� (cstring)��һ�ַǳ���Ҫ�����飬����C��������һϵ��ר�Ŵ���
	�ַ��� (cstring)�ĺ�������Щ������string.hͷ�ļ��У�����C++��չ֮��
	C���Ե�string.hͷ�ļ���ĸ��ֺ�����Ȼ���ã�����ͷ�ļ������cstring��ֻ
	��Ԥ���������е���cstring�� 
	#include <cstring>
	
	����ֻ����cstring�е�һЩ������ȫ��������C++��վ - 
	http://www.cplusplus.com/reference/cstring/
	
	ע�⣺cstring�⺯��Ӧ����ָ�룬������Ҫ���˽�ָ��ĸ�����ú����㣬
	�Լ�ָ��������Ĺ�ϵ������͸�����cstring�⺯���� */
#include <string>
	/*�ǳ�ֵ��ע����ǣ�������˵�ġ�C�����е��ַ��� (cstring)����C++�����е�
	�ַ��� (string)������ 
				
	��C++�����У�ר����һ��string��(class)�����ǿ���ֱ�ӽ���һ��string��
	���ĳ����ǿɱ�ģ����ǿ��԰�������Ϊ���ȿɱ�ġ��ַ����顱��֮��
	���ǻ�������������ȿɱ�ġ����顱������vector�ȣ���Щ���ǻ���������չ
	�����ģ������ȿɱ�ʹstring������ʹ�ã�Ҳʹstring�������ٶȱ��ַ��������� 
	
	string���кܶຯ�����ܿ���ʹ�ã���Щ������cstring�еĲ�һ�������ǽ���ʱ��
	��ע����Щ��������cstring����Щ����string��Ҫ����string��ʹ��string�⺯���� 
	��Ҫ��Ԥ�����������string��
	#include <string>
	Ȼ����һ��string��
	string s2;
	
	����ֻ����string�е�һЩ������ȫ��������C++��վ - 
	http://www.cplusplus.com/reference/string/string/
	
	���ϣ�C����ֻ����cstring�����ַ�������C++���Լȿ�����cstringҲ������string,
	���߶Աȣ�
		1. string����ѧ����cstring������Ҫ����ָ����⣻ 
		2. string����ȫ��������ʵ���ַ����ĳ��Ⱥ���Ԥ�����߼���׼ȷ������
			�ַ����鲻����ʹ�ã�һ��ʵ���ַ���������cstring�ַ������趨��
			���ȣ������ɴ���
		3. ��stringҲ������string���ȿ��Ըı䣬���ַ����鳤�ȹ̶�������
			cstring�����ٶȿ�һЩ��
		
	���������Ƚ���string����ѧϰcstring��ָ�롣*/

using namespace std;

int main()
{
	printf("��0��string�ĳ�ʼ������ֵ�����������\n");
		/*1. ��ʼ����ֵ*/ 
		string s1; //default initialization, s1 is an empty string
		string s2 = "0123456789"; //�ַ�������(string literal)��ֵ 
		string s3("0123456789"); //equivalent to s2
		string s4("0123456789", 3); //s4 is "012" (copy the first 3 characters)
		string s5("0123456789", 2, 4); //s5 is "2345" (starting from index 2, copy of 4 characters)
		
		string s6(5, 'a'); //s6 is "aaaaa"
		string s7 = s6; //s7 is also "aaaaa"
		string s8(s6); //s8 is also "aaaaa"
		cout<<"s1: "<<s1
			<<"\ns2: "<<s2
			<<"\ns3: "<<s3
			<<"\ns4: "<<s4
			<<"\ns5: "<<s5
			<<"\ns6: "<<s6
			<<"\ns7: "<<s7
			<<"\ns8: "<<s6<<endl;
		cout<<endl;
		
		/*	���������8�ֳ�ʼ�������˵�1�����ⶼ�и�ֵ����Ҫ����˵�������ַ�������
			��ֵ���ַ�������(string literal)����Ϊstring��ֵ������������string����
			���ַ����顣 
		
		2. ��string& assign������
			���˳�ʼ����ֵ����������assign����Ϊstring��ֵ��assign��������ֵ��
			ԭ�ַ��������������ǿ��԰Ѻ�����������ַ���������*/ 
		
		cout<<"s1: "<<s1.assign("0123456789")<<endl; //s1 is "0123456789"
		cout<<"s1: "<<s1.assign("0123456789", 3)<<endl; //s1 is "012": start from index 0 and length is 3:  
		cout<<"s1: "<<s1.assign("0123456789", 2, 4)<<endl; //s1 is "2345": start from index 2 and length is 4
		cout<<"s1: "<<s1.assign(5, 'a')<<endl; //s1 is "aaaaa"
		s6 = "abcde";		
		cout<<"s1: "<<s1.assign(s6)<<endl<<endl; //s1 is "abcde"	
		
		/*3. ����Ҳ������cin>>Ϊs1��ֵ*/ 
		cin>>s1; //���룺Come on, man! 
		cout<<"s1: "<<s1<<endl; //ȴ���ֽ����s1: Come 
		
		/*4. ��getline(cin, s1)������
			����cin�����ո�tab�����з�����ֹͣ��û��ֱ����cin��һ�仰��ֵ��s1��
			��ʱ������getline(cin, s1)����������������һֱ�������з���ֹͣ��
			���ѻ��з�ǰ����ַ�����ֵ��s1 */
		getline(cin, s1); //��һ����Ϊ�˰ѸղŻ��з�֮ǰ���ַ����Ե� 
		getline(cin, s1); //�ٴ����룺Come on, man! 
		cout<<"s1: "<<s1<<endl; //�����s1: Come on, man!
		
	printf("\n");
	
	printf("��1��string�⺯�� - �ַ�������\n");
		/*1.��size_t size()����size_t length()������
			���������ֱ���size()��length()�����ǵĹ�����ȫһ������������ַ���
			�������ַ���������ֵ��ע����ǣ��������������ص���������(return type)
			����int��������һ����������size_t��������������û�з��ţ����ܴ洢��
			������
			
			�����ֻ��������һ��������ѡ��size()����Ϊ���С�max_size()����
			��resize()������������û��max_length()����relength()������
				
		2.��bool empty()��
		 	�����ж��ַ����Ƿ�Ϊ���ַ�����������Ϊtrue(1)��������Ϊfalse(0)�� 
			 
		3.��size_t max_size()��
			�����Ľ����string���ܰ����ַ����������ޣ����������̻����йأ�
		
		4.��resize�����������֣�
			void resize (size_t n)�ǽ����鳤�ȱ�Ϊn�����ԭ���ȴ���n�ͱ���ǰn��
				�ַ������ԭ����С��n���������ַ��� 
			void resize (size_t n, char c)Ҳ�ǽ����鳤�ȱ�Ϊn�����ԭ���ȴ���n��
				����ǰn���ַ���c��û���ã����ԭ����С��n�����������ɸ��ַ�c��
			ע��resize��������ֵ��void��������string&���������ǲ��ܰѺ����������
				�ַ�����*/
		
		s1 = ""; //s1 is empty
		cout<<"s1: "<<s1<<endl;
		cout<<"s1's size: "<<s1.size()<<endl; //0 
		cout<<"s1's length: "<<s1.length()<<endl; //0 
		cout<<"Is s1 empty?: "<<s1.empty()<<endl; //1 
		cout<<"s1's max size: "<<s1.max_size()<<endl; //4611686018427387897
		s1.resize(5, '0'); //"00000"��s1��Ϊ5λ�������ӵ���'0'��䣬��resize��������Ϊvoid������ֱ����� 
		cout<<"Now s1: "<<s1<<endl<<endl; //����ַ���s1��"00000"
		
		//s2 is 0123456789
		cout<<"s2: "<<s2<<endl;
		cout<<"s2's size: "<<s2.size()<<endl; //10
		cout<<"s2's length: "<<s2.length()<<endl; //10
		cout<<"Is s2 empty?: "<<s2.empty()<<endl; //0
		cout<<"s2's max size: "<<s2.max_size()<<endl; //4611686018427387897
		s2.resize(15, '0'); //s1��Ϊ"012345678900000"��������ֱ������������ 
		cout<<"Now s2: "<<s2<<endl; //����ַ���s2��"012345678900000"
		s2.resize(5, '0'); //"01234"��ֻʣ��ǰ5λ�������ӵ���'0'��䣬��������û��
			//�����ӵ�λ�ã�����Ҳû�����'0'����������s2.resize(5)Ч��һ�� 
		cout<<"Now s2: "<<s2<<endl; //����ַ���s2��"01234"
	printf("\n");
	
	printf("��2��string�⺯�� - �ַ������������ַ���������ַ�\n");
		/*1. ��+������� 
			�������ַ���������Ϊһ���ַ�������򵥵ķ��������üӺţ�����s1 + s2�� 
			ע�⣺�Ӻ�������������һ����string�����˶����ַ�������������"abc"���� 
				���У���Ϊ�ַ����������ַ����顣 */
		s1 = "123";
		s2 = "456";
		cout<<"s1+s2: "<<s1+s2<<endl<<endl; //�����"123456"������s1��s2��ֵ���� 
		//cout<<"\"123\"+\"456\": "<<"123"+"456"<<endl; //��"123"+"456"�Ͳ���
	
		/*2. ��+=������� 
			s1+=s2��s1=s1+s2��һ���ģ����ﲻ�پ����� 
		
		3.��string substr������
			s1.substr(1, 2)���ַ���s1�����Ϊ3��Ԫ�ؿ�ʼ��5��Ԫ�ظ���Ϊ���ַ�����
			������ַ�����s1�����ַ�����*/ 
		cout<<"s1.substr(1,2): "<<s1.substr(1,2)<<endl<<endl; //�����"23" 
		
		/*4.��string& append������
			�������ַ���������s1��������ַ������ַ������������ַ����������ɸ���ͬ��
			�ַ�������s1��ֵ�ᷢ���ı䡣
			���漸��append��������ֵ��string&�����ǿ��԰Ѻ�����������ַ�����*/
		cout<<s1.append(s2)<<endl; //���Ҳ��"123456"������s1���"123456" 
		cout<<s1.append(s2, 0, 2)<<endl; //�����"12345645"������s2�ĵ�0λ��ʼ��������λ
		cout<<s1.append("abc")<<endl; //�����"12345645abc"������ĩβ�����ַ�������"abc" 
		cout<<s1.append("abc", 2)<<endl; //�����"12345645abcab", ����ĩβ�����ַ�������"abc"��ǰ2λ
		cout<<s1.append(3, '.')<<endl<<endl; //�����"12345645abcab..."������ĩβ����3���ַ�'.' 
		
		/*5. ��string& insert������
			���ַ���������s1��ָ��λ�ò����ַ������ַ������������ַ����������ɸ���ͬ���ַ���
			����s1��ֵ�ᷢ���ı䡣
			���漸��insert��������ֵ��string&�����ǿ��԰Ѻ�����������ַ�����*/
		s1 = ".123.";
		s2 = "321";
		cout<<s1.insert(4, s2)<<endl; //s1��Ϊ".123321.",��s1���Ϊ4��Ԫ��ǰ����s2 
		cout<<s1.insert(4, s2, 2, 1)<<endl; //s1��Ϊ".1231321."����s1���Ϊ4��
			//Ԫ��ǰ����s2�����ַ�������s2���Ϊ2��Ԫ�ؿ�ʼ������Ϊ1�� 
		cout<<s1.insert(4, "2")<<endl; //s1��Ϊ".12321321."����s1���Ϊ4��Ԫ��ǰ�����ַ�������"2"
		cout<<s1.insert(6, "22", 1)<<endl; //s1��Ϊ".123212321."����s1���Ϊ4��Ԫ��ǰ�����ַ�������"22"��ǰ1λ
		cout<<s1.insert(0, 3, '?')<<endl<<endl; //s1��Ϊ"???.123212321."�������Ϊ1��Ԫ��ǰ����3���ַ�'?' 
		 
		/*6. ��void push_back������
			s1.push_back(c)��ʾ���ַ���s1��������ַ�c��
			ע��push_back��������������void�����ǲ��ܰѽ�������ַ�����*/
		s1 = "Come on, man";
		s1.push_back('!'); //s1���"Come on, man!", ���ǲ���ֱ������������ 
		cout<<s1<<endl; //����ַ���s1: "Come on, man!" 
	printf("\n"); 
	
	printf("��3��string�⺯�� - �ַ����ĸ���\n");
		/*��size_t copy������
			size_t copy (char* s, size_t len, size_t pos)�����Ĺ����ǽ��ַ�����
			һ���ֿ������ַ���������Ժ����ĵ�һ������char* s��һ���ַ�����
			��ѧ��ָ���֪��Ϊʲôchar*���ַ������ˣ����ڶ�������len�ǳ��ȣ�����
			������pos��ʾ���ַ��������pos��ʼ���ơ����磺 
				s1.copy(s9, 5, 3)�Ĺ����Ǵ��ַ���s1�����Ϊ3���ַ���ʼ����5λ���ַ�
				����s9
			ע��copy�����������ַ�����ĩβ����'\0'; 
			ע��copy��������ֵ��size_t��ֵ�븴�Ƴ���len��ȣ����ǲ��ܰѽ������
			�ַ��������ַ����顣*/
		s1 = "0123456789";
		char s9 [10];
		cout<<s1.copy(s9, 5, 3)<<endl; //���ֵΪ5����Ϊ������5���ַ� 
		cout<<s9<<endl; //����ַ�����s9: "34567"���⻹����C string����Ϊ������'\0'Ϊ��β�� 
	printf("\n"); 
	
	printf("��4��string�⺯�� - ɾ���ַ�\n");	
		/*1.��void clear������
			s1.clear()���ַ���s1��ؿ��ַ��������ں�������������void�����ǲ��ܰ�
			������������ַ�����*/
		s1.clear(); //s1��ɿ��ַ����ˣ����ǲ���ֱ������������
		cout<<"s1: "<<s1<<endl; //������ַ���s1 
		
		/*2.��string& erase������
			erase�������ַ���ָ��λ�õ��ַ�ɾ��������string���Ա仯���ȣ�����
			ɾ���ַ��������ַ����ĳ���Ҳ���Ӧ���١�
			������ܵ�erase��������������string&�����ǿ��԰����Ľ�������ַ�����*/
		s1 = "0123456789";
		cout<<"s1: "<<s1.erase(6, 4)<<endl; //�����"012345", �����6��ʼɾ��4λ 
	printf("\n"); 
	
	printf("��5��string�⺯�� - string�ıȽ�\n");
		/*1. ��int compare(const string& str)������
			��������Ӧ����һ���ַ��������������������������ȽϹ������£�
			
			��ͷ��ʼ������ַ����жԱȣ��ַ����ıȽ�˳��������ߵ�һ����ͬ���ַ�
			Ϊ�ж����ݣ� 
			�ַ�˳����ASCII��׼��A~Z��ASCII����Ϊ65~90��a~z������97~122������
			Сд��ĸ���ڴ�д��ĸ���棻
			��������ַ������Ȳ�һ��������һ������һ����ǰ��λ��ȫһ������ô����
			���Ǹ����ں��档*/
		s1 = "ab";
		s2 = "abc";
		s3 = "Ab";
		s4 = "Zbc";
		
		cout<<s1.compare("ab")<<endl; //0��������ȫһ�����ַ��� 
		cout<<s1.compare(s2)<<endl; //-1��s1��s2���غϵ��ַ�����s1��s2����С����������s2ǰ�� 
		cout<<s1.compare(s3)<<endl; //1��s1��s3��һ����ĸ�Ͳ�һ������д��ĸ����Сд��ĸǰ��
		cout<<s1.compare(s4)<<endl; //1��s1��s3��һ����ĸ��һ������д��ĸZ����Сд��ĸaǰ��
		
		/*2.��relational operators��
		����compare�����������ַ����Ĺ�ϵ������==, !=, <, <=, >, >=����ʾ�� */
		s1 = "a", s2="Z";
		cout<<(s1<s2)<<endl; //0: false����ʾa��Z֮����ȷ
		cout<<(s1.compare(s2))<<endl; //1: ��ʾa��Z���棬��ȷ
		cout<<('a'<'Z')<<endl; //0: false����ʾa��Z֮����ȷ
		cout<<("abc"<"Zbc")<<endl; //0: false����ʾa��Z֮����ȷ 
	printf("\n");
	
	printf("��6��string�⺯�� - λ�á�����\n");
		/*1. []�����
			����������ƣ�stringҲ��������Ŷ�ĳ��Ԫ�ؽ��з��ʺͲ���*/
		s1 = "abcde";
		cout<<"s1[0]: "<<s1[0]<<endl<<endl; //������Ϊ0��Ԫ�أ�'a'
		
		/*2.��char& at������
			s1.at(0)��s1[0]�����ַ���s1�����Ϊ0��Ԫ��*/
		cout<<"s1.at(0): "<<s1.at(0)<<endl<<endl; //�������'a'
		
		/*3.��iterator begin���͡�iterator end������
			��������������������iterator���������������µ��������ͣ�����string��
			�ж���ġ�����������������ʾ�ַ�����Ԫ�ص�λ�ã�����s1.begin()����
			�ַ���s1����ǰ�棨���Ϊ0��Ԫ�ص�λ�á�
			
			��ֵ��ע�����s1.end()ȴ����ָ���ַ���s1��������Ԫ�ص�λ�ã�����
			ָ������Ԫ��֮���λ�ã�Ҳ����һ���������ڵ�λ�á����������Ϊ��
			�������Ǳ����ַ��������е�Ԫ�أ����񳤶�Ϊn���ַ���û�����Ϊn��Ԫ�أ�
			��������Ȼ�����ڱ���ʱ�õ�n��for (int i=0; i<n; ++i) 
			
			���������ڵ��������ڣ�֮�����ǻ������ܶ����ݽṹ����string�����������
			��Ԫ�ؽ��в�������ʱ���ֻ���õ������ˡ�����Щ���ݽṹ��Ӧ�������棬
			���ᶨ����Ӧ�ĵ����������ܸ�������������string�еĵ����������ơ�
			
			���ڣ������õ���string�����涨���iterator�������Ǳ�������涨��ģ�
			����Ҫ�ڴ�����д��string::iterator������ֱ��дiterator��:: */
		s1 = "abcde";
		cout<<"s1: "<<s1<<endl;
		string::iterator iter = s1.begin();
		*iter = 'A'; //*iter��ʾ������iterλ�ö�Ӧ��Ԫ�أ�������ֵΪ'A'
		cout<<"s1: "<<s1<<endl<<endl;
		
		for (iter=s1.begin(); iter!=s1.end(); ++iter)
			*iter = toupper(*iter); 
		cout<<"s1: "<<s1<<endl<<endl; //�����"ABCDE" 
			/*ע��ʹ�õ����������ַ���ʱ�����ڵ�����û��<��������������õ�
			�����ںţ�==��!=��++��--����������ڵ����������á�
			
			toupper(c)��cctype�Ŀ⺯���������ǰ��ַ�c��ɴ�д�����ƻ���cctype�⺯�� 
			tolower(c)���ַ�c���Сд�����û�ñ䣬�Ͳ���ı�c��. 
		
		4. ���Һ�����
			���Ƚ���һ��string::npos��
				���¸������Һ����ķ���ֵ���Ͷ���size_t������Ŀ�����ַ����е�
				��Ӧ�������size_t������ʽ����ģ�����û�ҵ���ʱ�����¸�������
				�����ķ���ֵ����string::npos��npos�Ǹ���string�ж����size_t����
				����������ֵΪ��
					static const size_t npos = -1;
				size_t��û�з��ŵ��������ͣ�-1Ҳ��size_t���ܱ������ֵ��
			���¸���������ֵΪ��������λ�õĶ�Ӧ��ţ�û�ҵ�����Ϊstring::npos��  
			��size_t find�����ַ����в��Ҳ�����һ�γ��ֵ�λ�ã� 
			��size_t rfind�����ַ����в��Ҳ������һ�γ��ֵ�λ�ã�
			��size_t find_first_of�����ַ����в��Ҳ����е���һ�ַ���һ�γ��ֵ�λ�ã� 
			��size_t find_last_of�����ַ����в��Ҳ����е���һ�ַ����һ�γ��ֵ�λ�ã� 
			��size_t find_first_not_of�����ַ����в��Ҳ����ϲ���������һ�ַ����׸��ַ�λ�ã� 
			��size_t find_last_not_of�����ַ����в��Ҳ����ϲ���������һ�ַ������һ���ַ���λ�ã� 
		*/
		//find���� 
		s1 = "0123401234";
		s2 = "012";
		cout<<"s1.find(s2) = "<<s1.find(s2)<<endl; //�����0
		cout<<"s1.find(\"012\") = "<<s1.find("012")<<endl; //�����0
		cout<<"s1.find('0') = "<<s1.find('0')<<endl; //�����0
		cout<<"s1.find(\"abc\") = "<<s1.find("abc")<<endl<<endl;
			//�����string::npos��һ���ܴ��������size_t����ȡ�������ֵ
		
		//rfind���� 
		cout<<"s1.rfind(s2) = "<<s1.rfind(s2)<<endl; //�����5
		cout<<"s1.rfind(\"0123\") = "<<s1.rfind("012")<<endl; //�����5
		cout<<"s1.rfind('0') = "<<s1.rfind('0')<<endl<<endl; //�����5
		
		//find_first_of������find_last_of���ƣ��������ˣ� 
		s1 = "Please, replace the vowels in this sentence by asterisks.";
		s2 = "aeiouAEIOU";
		cout<<"s1: "<<s1<<endl;
		size_t found = s1.find_first_of(s2);
		while (found!=string::npos)
		{
			s1[found] = '*';
			found = s1.find_first_of(s2, found+1); //����һλ�������� 
		}
		cout<<"s1: "<<s1<<endl<<endl; 
		
		//find_first_not_of������find_last_not_of���ƣ��������ˣ� 
		s1 = "The first non-alphabetic character in this string is: ";
		s2 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
		found = s1.find_first_not_of(s2);
		cout<<s1<<s1[found]<<" at position "<<found<<endl; 
	printf("\n"); 
	
	printf("��7��string�⺯�� - �滻"); 
		/*1.��string& replace������*/
		s1 = "0123456789";
		s2 = "abc";
		cout<<"s1:\n"<<s1<<endl<<endl;
		cout<<"s1.replace(7, 3, s2):\n"<<s1.replace(7, 3, s2)<<endl<<endl;
		/*	�����"0123456abc":���ַ���s1�д����7��ʼ��3���ַ��滻Ϊs2�����ݣ�
			s2���ȿ��Բ���3 */ 
		cout<<"s1.replace(7, 3, \"xyz\"):\n"<<s1.replace(7, 3, "xyz")<<endl<<endl;
			//�����"0123456xyz"��ԭ������������
		
		/*2.��void swap������
			ע��swap������������Ϊvoid�����ܵ���һ�����顣*/
		s1 = "This is s1.";
		s2 = "This is s2.";
		s1.swap(s2);
		cout<<"s1: "<<s1<<endl; //"This is s2."
		cout<<"s2: "<<s2<<endl; //"This is s1."
		
	printf("\n"); 
		
	printf("��8��string�⺯�� - ��cstring��ת��\n");
		/*1.��const char* c_str������
			����ֵ����Ϊc string������'\0'��Ϊ�����ַ����ַ�����*/
		s1 = "0123456789";
		cout<<s1.c_str()<<endl; //"0123456789"
	printf("\n");
				
	return 0;
}
