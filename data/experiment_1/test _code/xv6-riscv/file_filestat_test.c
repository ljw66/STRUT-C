void test_filestat_up(void);
void test_filestat_down(void);


void test_filestat_up(void){

	aunit_printf("\n##FUNCTION_START_filestat\n");
 }

void test_filestat_down(void){
	aunit_printf("\n##FUNCTION_END_filestat\n");
 }



void abnormal_filestat_case(int index);

void abnormal_filestat_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_filestat_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *f;
	unsigned long int addr;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_1,false,0\n");
	aunit_printf("#CASE_START_test_filestat_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_1\n");
}

void test_filestat_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *f;
	unsigned long int addr;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_2,false,0\n");
	aunit_printf("#CASE_START_test_filestat_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_2\n");
}

void test_filestat_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *f;
	unsigned long int addr;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0x1000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_3,false,0\n");
	aunit_printf("#CASE_START_test_filestat_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_3\n");
}

void test_filestat_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *f;
	unsigned long int addr;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0x2000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_4,false,0\n");
	aunit_printf("#CASE_START_test_filestat_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_4\n");
}

void test_filestat_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct file *f;
	unsigned long int addr;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={0x3000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	iunlock_call_counter = 0;
	copyout_call_counter = 0;
	ilock_call_counter = 0;
	stati_call_counter = 0;
	myproc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filestat_5,false,0\n");
	aunit_printf("#CASE_START_test_filestat_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = filestat(f,addr);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("filestat","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("copyout","copyout_call_counter",copyout_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("stati","stati_call_counter",stati_call_counter)
	OB_INT_EXPR("myproc","myproc_call_counter",myproc_call_counter)

	aunit_printf("#CASE_END_test_filestat_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_filestat_up();

	switch(caseIndex){
	case 1:
		test_filestat_1();
		break;
	case 2:
		test_filestat_2();
		break;
	case 3:
		test_filestat_3();
		break;
	case 4:
		test_filestat_4();
		break;
	case 5:
		test_filestat_5();
		break;
	default:
		abnormal_filestat_case(caseIndex);
		break;
	}

	test_filestat_down();
}

