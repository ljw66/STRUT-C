void test_kson_destroy_up(void);
void test_kson_destroy_down(void);


void test_kson_destroy_up(void){

	aunit_printf("\n##FUNCTION_START_kson_destroy\n");
 }

void test_kson_destroy_down(void){
	aunit_printf("\n##FUNCTION_END_kson_destroy\n");
 }



void abnormal_kson_destroy_case(int index);

void abnormal_kson_destroy_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kson_destroy_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	kson_t *kson;


	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_kson_destroy_1,false,0\n");
	aunit_printf("#CASE_START_test_kson_destroy_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		kson_destroy(kson);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_kson_destroy_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_kson_destroy_up();

	switch(caseIndex){
	case 1:
		test_kson_destroy_1();
		break;
	default:
		abnormal_kson_destroy_case(caseIndex);
		break;
	}

	test_kson_destroy_down();
}

