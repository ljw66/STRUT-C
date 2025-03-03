void test_binchrCF_up(void);
void test_binchrCF_down(void);


void test_binchrCF_up(void){

	aunit_printf("\n##FUNCTION_START_binchrCF\n");
 }

void test_binchrCF_down(void){
	aunit_printf("\n##FUNCTION_END_binchrCF\n");
 }



void abnormal_binchrCF_case(int index);

void abnormal_binchrCF_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_binchrCF_12(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *data;
	int len;
	int pos;
	struct charField *cf;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct charField *valueList_0[]={(struct charField *)cf_PTRTO};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"xyz"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=12;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_binchrCF_12,false,0\n");
	aunit_printf("#CASE_START_test_binchrCF_12\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cf=(struct charField *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			pos=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = binchrCF(data,len,pos,cf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("binchrCF","returnValue",2,returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_binchrCF_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_binchrCF_up();

	switch(caseIndex){
	case 12:
		test_binchrCF_12();
		break;
	default:
		abnormal_binchrCF_case(caseIndex);
		break;
	}

	test_binchrCF_down();
}

