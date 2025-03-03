void test_is_tar_up(void);
void test_is_tar_down(void);


void test_is_tar_up(void){

	aunit_printf("\n##FUNCTION_START_is_tar\n");
 }

void test_is_tar_down(void){
	aunit_printf("\n##FUNCTION_END_is_tar\n");
 }



void abnormal_is_tar_case(int index);

void abnormal_is_tar_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_is_tar_9(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *buf;
	unsigned int nbytes;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"valid_header_data"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={512};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=9;
	//��ʼ����׮�������ü�����
	strncmp_call_counter = 0;
	memcmp_call_counter = 0;
	memchr_call_counter = 0;
	from_oct_call_counter = 0;

	aunit_printf("###TEST_TREE_test_is_tar_9,false,0\n");
	aunit_printf("#CASE_START_test_is_tar_9\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			nbytes=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = is_tar(buf,nbytes);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("is_tar","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strncmp","strncmp_call_counter",strncmp_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("memchr","memchr_call_counter",memchr_call_counter)
	OB_INT_EXPR("from_oct","from_oct_call_counter",from_oct_call_counter)

	aunit_printf("#CASE_END_test_is_tar_9\n");
}

void aunit_test_func_run(int caseIndex){

	test_is_tar_up();

	switch(caseIndex){
	case 9:
		test_is_tar_9();
		break;
	default:
		abnormal_is_tar_case(caseIndex);
		break;
	}

	test_is_tar_down();
}

