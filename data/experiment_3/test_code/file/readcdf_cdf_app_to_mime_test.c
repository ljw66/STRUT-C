void test_cdf_app_to_mime_up(void);
void test_cdf_app_to_mime_down(void);


void test_cdf_app_to_mime_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_app_to_mime\n");
 }

void test_cdf_app_to_mime_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_app_to_mime\n");
 }



void abnormal_cdf_app_to_mime_case(int index);

void abnormal_cdf_app_to_mime_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_app_to_mime_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char *vbuf;
	struct nv *nv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	struct nv *valueList_0[]={(struct nv *)nv_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"no_match_here"};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"pattern"};
	unsigned int listLength_2=1;
	char *valueList_3[]={(char *)"text/example"};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	strcasestr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_app_to_mime_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_app_to_mime_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nv=(struct nv *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vbuf=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(nv_PTRTO[0]).pattern=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(nv_PTRTO[0]).mime=(char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = cdf_app_to_mime(vbuf,nv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("cdf_app_to_mime","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strcasestr","strcasestr_call_counter",strcasestr_call_counter)

	aunit_printf("#CASE_END_test_cdf_app_to_mime_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_app_to_mime_up();

	switch(caseIndex){
	case 2:
		test_cdf_app_to_mime_2();
		break;
	default:
		abnormal_cdf_app_to_mime_case(caseIndex);
		break;
	}

	test_cdf_app_to_mime_down();
}

