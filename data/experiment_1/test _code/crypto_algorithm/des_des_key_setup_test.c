void test_des_key_setup_up(void);
void test_des_key_setup_down(void);


void test_des_key_setup_up(void){

	aunit_printf("\n##FUNCTION_START_des_key_setup\n");
 }

void test_des_key_setup_down(void){
	aunit_printf("\n##FUNCTION_END_des_key_setup\n");
 }



void abnormal_des_key_setup_case(int index);

void abnormal_des_key_setup_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_des_key_setup_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE *key;
	BYTE (*schedule)[6];
	enum Anonymous_enum_17b9cfea_2 mode;


	//ֵ�������
	BYTE (*valueList_0[])[6]={(BYTE (*)[6])"empty"};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"0x0123456789ABCDEF"};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_des_key_setup_6,false,0\n");
	aunit_printf("#CASE_START_test_des_key_setup_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			schedule=(BYTE (*)[6])valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			key=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		des_key_setup(key,schedule,mode);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("des_key_setup","schedule","calculated_schedule",schedule)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_des_key_setup_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_des_key_setup_up();

	switch(caseIndex){
	case 6:
		test_des_key_setup_6();
		break;
	default:
		abnormal_des_key_setup_case(caseIndex);
		break;
	}

	test_des_key_setup_down();
}

