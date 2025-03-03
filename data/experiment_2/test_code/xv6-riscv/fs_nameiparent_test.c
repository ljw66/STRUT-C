void test_nameiparent_up(void);
void test_nameiparent_down(void);


void test_nameiparent_up(void){

	aunit_printf("\n##FUNCTION_START_nameiparent\n");
 }

void test_nameiparent_down(void){
	aunit_printf("\n##FUNCTION_END_nameiparent\n");
 }



void abnormal_nameiparent_case(int index);

void abnormal_nameiparent_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_nameiparent_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;
	char *name;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct inode *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"validPath"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"validName"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_1,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = nameiparent(path,name);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("nameiparent","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_1\n");
}

void test_nameiparent_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;
	char *name;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct inode *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"validName"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_2,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			name=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = nameiparent(path,name);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("nameiparent","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_2\n");
}

void test_nameiparent_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;
	char *name;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct inode *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"validPath"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_3,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = nameiparent(path,name);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("nameiparent","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_3\n");
}

void test_nameiparent_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;
	char *name;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct inode *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_4,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = nameiparent(path,name);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("nameiparent","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_4\n");
}

void test_nameiparent_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *path;
	char *name;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct inode *returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"validPath"};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"validName"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	namex_call_counter = 0;

	aunit_printf("###TEST_TREE_test_nameiparent_5,false,0\n");
	aunit_printf("#CASE_START_test_nameiparent_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			path=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			name=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = nameiparent(path,name);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("nameiparent","returnValue","null",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("namex","namex_call_counter",namex_call_counter)

	aunit_printf("#CASE_END_test_nameiparent_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_nameiparent_up();

	switch(caseIndex){
	case 1:
		test_nameiparent_1();
		break;
	case 2:
		test_nameiparent_2();
		break;
	case 3:
		test_nameiparent_3();
		break;
	case 4:
		test_nameiparent_4();
		break;
	case 5:
		test_nameiparent_5();
		break;
	default:
		abnormal_nameiparent_case(caseIndex);
		break;
	}

	test_nameiparent_down();
}

