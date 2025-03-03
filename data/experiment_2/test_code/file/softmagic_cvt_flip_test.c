void test_cvt_flip_up(void);
void test_cvt_flip_down(void);


void test_cvt_flip_up(void){

	aunit_printf("\n##FUNCTION_START_cvt_flip\n");
 }

void test_cvt_flip_down(void){
	aunit_printf("\n##FUNCTION_END_cvt_flip\n");
 }



void abnormal_cvt_flip_case(int index);

void abnormal_cvt_flip_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cvt_flip_13(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int type;
	int flip;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={FILE_LEQLDATE};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=13;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cvt_flip_13,false,0\n");
	aunit_printf("#CASE_START_test_cvt_flip_13\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			type=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			flip=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = cvt_flip(type,flip);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cvt_flip","returnValue","FILE_BEQLDATE",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cvt_flip_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_cvt_flip_up();

	switch(caseIndex){
	case 13:
		test_cvt_flip_13();
		break;
	default:
		abnormal_cvt_flip_case(caseIndex);
		break;
	}

	test_cvt_flip_down();
}

