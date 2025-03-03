void test_km_stat_up(void);
void test_km_stat_down(void);


void test_km_stat_up(void){

	aunit_printf("\n##FUNCTION_START_km_stat\n");
 }

void test_km_stat_down(void){
	aunit_printf("\n##FUNCTION_END_km_stat\n");
 }



void abnormal_km_stat_case(int index);

void abnormal_km_stat_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_km_stat_8(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *_km;
	km_stat_t *s;


	//ֵ�������
	void *valueList_0[]={(void *)1};
	unsigned int listLength_0=1;
	km_stat_t *valueList_1[]={(km_stat_t *)s_PTRTO};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=8;
	//��ʼ����׮�������ü�����
	memset_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_stat_8,false,0\n");
	aunit_printf("#CASE_START_test_km_stat_8\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			_km=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			s=(km_stat_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		km_stat(_km,s);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_km_stat_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_km_stat_up();

	switch(caseIndex){
	case 8:
		test_km_stat_8();
		break;
	default:
		abnormal_km_stat_case(caseIndex);
		break;
	}

	test_km_stat_down();
}

