void test_km_destroy_up(void);
void test_km_destroy_down(void);


void test_km_destroy_up(void){

	aunit_printf("\n##FUNCTION_START_km_destroy\n");
 }

void test_km_destroy_down(void){
	aunit_printf("\n##FUNCTION_END_km_destroy\n");
 }



void abnormal_km_destroy_case(int index);

void abnormal_km_destroy_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_km_destroy_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kmem_t *_km;


	//ֵ�������
	kmem_t *valueList_0[]={(kmem_t *)_km_PTRTO};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)"km_par_value"};
	unsigned int listLength_1=1;
	header_t *valueList_2[]={(header_t *)_km_PTRTO_0_core_head_PTRTO};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	kfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_destroy_4,false,0\n");
	aunit_printf("#CASE_START_test_km_destroy_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(kmem_t *)_km=(kmem_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(_km_PTRTO[0]).par=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(_km_PTRTO[0]).core_head=(header_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		km_destroy(_km);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)

	aunit_printf("#CASE_END_test_km_destroy_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_km_destroy_up();

	switch(caseIndex){
	case 4:
		test_km_destroy_4();
		break;
	default:
		abnormal_km_destroy_case(caseIndex);
		break;
	}

	test_km_destroy_down();
}

