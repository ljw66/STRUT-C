void test_binit_up(void);
void test_binit_down(void);


void test_binit_up(void){

	aunit_printf("\n##FUNCTION_START_binit\n");
 }

void test_binit_down(void){
	aunit_printf("\n##FUNCTION_END_binit\n");
 }



void abnormal_binit_case(int index);

void abnormal_binit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_binit_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	initsleeplock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_binit_1,false,0\n");
	aunit_printf("#CASE_START_test_binit_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		binit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("initsleeplock","initsleeplock_call_counter",initsleeplock_call_counter)

	aunit_printf("#CASE_END_test_binit_1\n");
}

void test_binit_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	initsleeplock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_binit_2,false,0\n");
	aunit_printf("#CASE_START_test_binit_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		binit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("initsleeplock","initsleeplock_call_counter",initsleeplock_call_counter)

	aunit_printf("#CASE_END_test_binit_2\n");
}

void test_binit_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	initsleeplock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_binit_3,false,0\n");
	aunit_printf("#CASE_START_test_binit_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		binit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("initsleeplock","initsleeplock_call_counter",initsleeplock_call_counter)

	aunit_printf("#CASE_END_test_binit_3\n");
}

void test_binit_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	initsleeplock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_binit_4,false,0\n");
	aunit_printf("#CASE_START_test_binit_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		binit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("initsleeplock","initsleeplock_call_counter",initsleeplock_call_counter)

	aunit_printf("#CASE_END_test_binit_4\n");
}

void test_binit_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	initsleeplock_call_counter = 0;

	aunit_printf("###TEST_TREE_test_binit_5,false,0\n");
	aunit_printf("#CASE_START_test_binit_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		binit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("initsleeplock","initsleeplock_call_counter",initsleeplock_call_counter)

	aunit_printf("#CASE_END_test_binit_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_binit_up();

	switch(caseIndex){
	case 1:
		test_binit_1();
		break;
	case 2:
		test_binit_2();
		break;
	case 3:
		test_binit_3();
		break;
	case 4:
		test_binit_4();
		break;
	case 5:
		test_binit_5();
		break;
	default:
		abnormal_binit_case(caseIndex);
		break;
	}

	test_binit_down();
}

