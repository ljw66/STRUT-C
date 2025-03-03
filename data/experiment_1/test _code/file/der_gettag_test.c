void test_gettag_up(void);
void test_gettag_down(void);


void test_gettag_up(void){

	aunit_printf("\n##FUNCTION_START_gettag\n");
 }

void test_gettag_down(void){
	aunit_printf("\n##FUNCTION_END_gettag\n");
 }



void abnormal_gettag_case(int index);

void abnormal_gettag_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_gettag_11(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	uint8_t *c;
	size_t *p;
	unsigned int l;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	uint32_t returnValue = 0;

	//ֵ�������
	size_t *valueList_0[]={(size_t *)p_PTRTO};
	unsigned int listLength_0=1;
	uint8_t *valueList_1[]={(uint8_t *)"0x1f, 0x80, 0x01"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={3};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=11;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_gettag_11,false,0\n");
	aunit_printf("#CASE_START_test_gettag_11\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(size_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			c=(uint8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			l=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = gettag(c,p,l);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_UNSIGNED_INT("gettag","returnValue",129,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_gettag_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_gettag_up();

	switch(caseIndex){
	case 11:
		test_gettag_11();
		break;
	default:
		abnormal_gettag_case(caseIndex);
		break;
	}

	test_gettag_down();
}

