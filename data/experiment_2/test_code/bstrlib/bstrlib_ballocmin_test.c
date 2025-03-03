void test_ballocmin_up(void);
void test_ballocmin_down(void);


void test_ballocmin_up(void){

	aunit_printf("\n##FUNCTION_START_ballocmin\n");
 }

void test_ballocmin_down(void){
	aunit_printf("\n##FUNCTION_END_ballocmin\n");
 }



void abnormal_ballocmin_case(int index);

void abnormal_ballocmin_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ballocmin_12(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b;
	int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={8};
	unsigned int listLength_1=1;
	unsigned char *valueList_2[]={(unsigned char *)"valid_ptr"};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	int valueList_4[]={12};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=12;
	//��ʼ����׮�������ü�����
	realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ballocmin_12,false,0\n");
	aunit_printf("#CASE_START_test_ballocmin_12\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).data=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).mlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ballocmin(b,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ballocmin","b->mlen",11,b->mlen)
	TEST_ASSERT_EQUAL_INT("ballocmin","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("ballocmin","b->data","new_valid_ptr",b->data)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)

	aunit_printf("#CASE_END_test_ballocmin_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_ballocmin_up();

	switch(caseIndex){
	case 12:
		test_ballocmin_12();
		break;
	default:
		abnormal_ballocmin_case(caseIndex);
		break;
	}

	test_ballocmin_down();
}

