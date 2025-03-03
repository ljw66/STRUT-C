void test_kfree_up(void);
void test_kfree_down(void);


void test_kfree_up(void){

	aunit_printf("\n##FUNCTION_START_kfree\n");
 }

void test_kfree_down(void){
	aunit_printf("\n##FUNCTION_END_kfree\n");
 }



void abnormal_kfree_case(int index);

void abnormal_kfree_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kfree_11(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *_km;
	void *ap;


	//ֵ�������
	void *valueList_0[]={(void *)0x2000};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x1000};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=11;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kfree_11,false,0\n");
	aunit_printf("#CASE_START_test_kfree_11\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_km=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ap=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		kfree(_km,ap);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_kfree_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_kfree_up();

	switch(caseIndex){
	case 11:
		test_kfree_11();
		break;
	default:
		abnormal_kfree_case(caseIndex);
		break;
	}

	test_kfree_down();
}

