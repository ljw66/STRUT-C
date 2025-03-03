void test_kinit_up(void);
void test_kinit_down(void);


void test_kinit_up(void){

	aunit_printf("\n##FUNCTION_START_kinit\n");
 }

void test_kinit_down(void){
	aunit_printf("\n##FUNCTION_END_kinit\n");
 }



void abnormal_kinit_case(int index);

void abnormal_kinit_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kinit_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct run *valueList_0[]={(struct run *)0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	freerange_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kinit_1,false,0\n");
	aunit_printf("#CASE_START_test_kinit_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			kmem.freelist=(struct run *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		kinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("freerange","freerange_call_counter",freerange_call_counter)

	aunit_printf("#CASE_END_test_kinit_1\n");
}

void test_kinit_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct run *valueList_0[]={(struct run *)0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	freerange_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kinit_2,false,0\n");
	aunit_printf("#CASE_START_test_kinit_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			kmem.freelist=(struct run *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		kinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("freerange","freerange_call_counter",freerange_call_counter)

	aunit_printf("#CASE_END_test_kinit_2\n");
}

void test_kinit_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct run *valueList_0[]={(struct run *)0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	freerange_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kinit_3,false,0\n");
	aunit_printf("#CASE_START_test_kinit_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			kmem.freelist=(struct run *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		kinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("freerange","freerange_call_counter",freerange_call_counter)

	aunit_printf("#CASE_END_test_kinit_3\n");
}

void test_kinit_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct run *valueList_0[]={(struct run *)(struct run *)0x1000};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	freerange_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kinit_4,false,0\n");
	aunit_printf("#CASE_START_test_kinit_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			kmem.freelist=(struct run *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		kinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("freerange","freerange_call_counter",freerange_call_counter)

	aunit_printf("#CASE_END_test_kinit_4\n");
}

void test_kinit_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;

	//ֵ�������
	struct run *valueList_0[]={(struct run *)0};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	initlock_call_counter = 0;
	freerange_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kinit_5,false,0\n");
	aunit_printf("#CASE_START_test_kinit_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			kmem.freelist=(struct run *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		kinit();
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("initlock","initlock_call_counter",initlock_call_counter)
	OB_INT_EXPR("freerange","freerange_call_counter",freerange_call_counter)

	aunit_printf("#CASE_END_test_kinit_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_kinit_up();

	switch(caseIndex){
	case 1:
		test_kinit_1();
		break;
	case 2:
		test_kinit_2();
		break;
	case 3:
		test_kinit_3();
		break;
	case 4:
		test_kinit_4();
		break;
	case 5:
		test_kinit_5();
		break;
	default:
		abnormal_kinit_case(caseIndex);
		break;
	}

	test_kinit_down();
}

