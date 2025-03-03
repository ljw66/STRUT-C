void test_freerange_up(void);
void test_freerange_down(void);


void test_freerange_up(void){

	aunit_printf("\n##FUNCTION_START_freerange\n");
 }

void test_freerange_down(void){
	aunit_printf("\n##FUNCTION_END_freerange\n");
 }



void abnormal_freerange_case(int index);

void abnormal_freerange_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_freerange_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *pa_start;
	void *pa_end;


	//ֵ�������
	void *valueList_0[]={(void *)5000};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)15000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	kfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_freerange_2,false,0\n");
	aunit_printf("#CASE_START_test_freerange_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			pa_start=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pa_end=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		freerange(pa_start,pa_end);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)

	aunit_printf("#CASE_END_test_freerange_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_freerange_up();

	switch(caseIndex){
	case 2:
		test_freerange_2();
		break;
	default:
		abnormal_freerange_case(caseIndex);
		break;
	}

	test_freerange_down();
}

