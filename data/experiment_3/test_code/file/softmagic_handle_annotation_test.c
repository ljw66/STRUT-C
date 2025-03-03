void test_handle_annotation_up(void);
void test_handle_annotation_down(void);


void test_handle_annotation_up(void){

	aunit_printf("\n##FUNCTION_START_handle_annotation\n");
 }

void test_handle_annotation_down(void){
	aunit_printf("\n##FUNCTION_END_handle_annotation\n");
 }



void abnormal_handle_annotation_case(int index);

void abnormal_handle_annotation_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_handle_annotation_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic_set *ms;
	struct magic *m;
	int firstline;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct magic_set *valueList_0[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	struct magic *valueList_2[]={(struct magic *)m_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={16};
	unsigned int listLength_3=1;
	char valueList_4[]={'c'};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=10;
	//��ʼ����׮�������ü�����
	print_sep_call_counter = 0;
	file_printf_call_counter = 0;
	varexpand_call_counter = 0;

	aunit_printf("###TEST_TREE_test_handle_annotation_10,false,0\n");
	aunit_printf("#CASE_START_test_handle_annotation_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			ms=(struct magic_set *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			firstline=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			m=(struct magic *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ms_PTRTO[0]).flags=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).mimetype[0]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = handle_annotation(ms,m,firstline);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("handle_annotation","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("print_sep","print_sep_call_counter",print_sep_call_counter)
	OB_INT_EXPR("file_printf","file_printf_call_counter",file_printf_call_counter)
	OB_INT_EXPR("varexpand","varexpand_call_counter",varexpand_call_counter)

	aunit_printf("#CASE_END_test_handle_annotation_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_handle_annotation_up();

	switch(caseIndex){
	case 10:
		test_handle_annotation_10();
		break;
	default:
		abnormal_handle_annotation_case(caseIndex);
		break;
	}

	test_handle_annotation_down();
}

