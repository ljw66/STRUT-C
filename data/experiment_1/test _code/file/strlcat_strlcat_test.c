void test_strlcat_up(void);
void test_strlcat_down(void);


void test_strlcat_up(void){

	aunit_printf("\n##FUNCTION_START_strlcat\n");
 }

void test_strlcat_down(void){
	aunit_printf("\n##FUNCTION_END_strlcat\n");
 }



void abnormal_strlcat_case(int index);

void abnormal_strlcat_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_strlcat_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *dst;
	char *src;
	unsigned int siz;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	size_t returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"defgh"};
	unsigned int listLength_2=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	strlen_call_counter = 0;

	aunit_printf("###TEST_TREE_test_strlcat_3,false,0\n");
	aunit_printf("#CASE_START_test_strlcat_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dst=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			siz=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			src=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = strlcat(dst,src,siz);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_UNSIGNED_INT_EXPR("strlcat","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strlen","strlen_call_counter",strlen_call_counter)

	aunit_printf("#CASE_END_test_strlcat_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_strlcat_up();

	switch(caseIndex){
	case 3:
		test_strlcat_3();
		break;
	default:
		abnormal_strlcat_case(caseIndex);
		break;
	}

	test_strlcat_down();
}

