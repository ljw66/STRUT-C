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

void test_km_destroy_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kmem_t *_km;


	//ֵ�������
	kmem_t *valueList_0[]={(kmem_t *)"km_par_value"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	kfree_call_counter = 0;

	aunit_printf("###TEST_TREE_test_km_destroy_2,false,0\n");
	aunit_printf("#CASE_START_test_km_destroy_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(kmem_t *)_km=(kmem_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		km_destroy(_km);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("kfree","kfree_call_counter",kfree_call_counter)

	aunit_printf("#CASE_END_test_km_destroy_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_km_destroy_up();

	switch(caseIndex){
	case 2:
		test_km_destroy_2();
		break;
	default:
		abnormal_km_destroy_case(caseIndex);
		break;
	}

	test_km_destroy_down();
}

