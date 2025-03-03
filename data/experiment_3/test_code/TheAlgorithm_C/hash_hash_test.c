void test_hash_up(void);
void test_hash_down(void);


void test_hash_up(void){

	aunit_printf("\n##FUNCTION_START_hash\n");
 }

void test_hash_down(void){
	aunit_printf("\n##FUNCTION_END_hash\n");
 }



void abnormal_hash_case(int index);

void abnormal_hash_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hash_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	void *value;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	long long int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"A"};
	unsigned int listLength_0=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_hash_2,false,0\n");
	aunit_printf("#CASE_START_test_hash_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			value=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = hash(value);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONGLONG("hash","returnValue",4259949,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_hash_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_hash_up();

	switch(caseIndex){
	case 2:
		test_hash_2();
		break;
	default:
		abnormal_hash_case(caseIndex);
		break;
	}

	test_hash_down();
}

