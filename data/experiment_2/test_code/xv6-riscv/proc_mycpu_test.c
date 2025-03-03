void test_mycpu_up(void);
void test_mycpu_down(void);


void test_mycpu_up(void){

	aunit_printf("\n##FUNCTION_START_mycpu\n");
 }

void test_mycpu_down(void){
	aunit_printf("\n##FUNCTION_END_mycpu\n");
 }



void abnormal_mycpu_case(int index);

void abnormal_mycpu_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_mycpu_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cpu *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_1,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_1\n");
}

void test_mycpu_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cpu *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_2,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_2\n");
}

void test_mycpu_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cpu *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_3,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_3\n");
}

void test_mycpu_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cpu *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_4,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_4\n");
}

void test_mycpu_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cpu *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_5,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_5\n");
}

void test_mycpu_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cpu *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_6,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_6\n");
}

void test_mycpu_7(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cpu *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=7;
	//��ʼ����׮�������ü�����
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_7,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_7\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_7\n");
}

void test_mycpu_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct cpu *returnValue = 0;

	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	cpuid_call_counter = 0;

	aunit_printf("###TEST_TREE_test_mycpu_8,false,0\n");
	aunit_printf("#CASE_START_test_mycpu_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = mycpu();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("mycpu","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cpuid","cpuid_call_counter",cpuid_call_counter)

	aunit_printf("#CASE_END_test_mycpu_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_mycpu_up();

	switch(caseIndex){
	case 1:
		test_mycpu_1();
		break;
	case 2:
		test_mycpu_2();
		break;
	case 3:
		test_mycpu_3();
		break;
	case 4:
		test_mycpu_4();
		break;
	case 5:
		test_mycpu_5();
		break;
	case 6:
		test_mycpu_6();
		break;
	case 7:
		test_mycpu_7();
		break;
	case 8:
		test_mycpu_8();
		break;
	default:
		abnormal_mycpu_case(caseIndex);
		break;
	}

	test_mycpu_down();
}

