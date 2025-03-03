void test_ksw_global_up(void);
void test_ksw_global_down(void);


void test_ksw_global_up(void){

	aunit_printf("\n##FUNCTION_START_ksw_global\n");
 }

void test_ksw_global_down(void){
	aunit_printf("\n##FUNCTION_END_ksw_global\n");
 }



void abnormal_ksw_global_case(int index);

void abnormal_ksw_global_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksw_global_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	int qlen;
	uint8_t *query;
	int tlen;
	uint8_t *target;
	int m;
	int8_t *mat;
	int gapo;
	int gape;
	int w;
	int *n_cigar_;
	uint32_t **cigar_;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	int8_t *valueList_1[]={(int8_t *)"1,-1,-1,1,1,-1,1"};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)n_cigar__PTRTO};
	unsigned int listLength_2=1;
	uint8_t *valueList_3[]={(uint8_t *)"GTC"};
	unsigned int listLength_3=1;
	int valueList_4[]={3};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
	unsigned int listLength_6=1;
	int valueList_7[]={3};
	unsigned int listLength_7=1;
	uint8_t *valueList_8[]={(uint8_t *)"GAC"};
	unsigned int listLength_8=1;
	int valueList_9[]={1};
	unsigned int listLength_9=1;
	uint32_t *valueList_10[]={(uint32_t *)valid_pointer};
	unsigned int listLength_10=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	malloc_call_counter = 0;
	push_cigar_call_counter = 0;
	calloc_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_global_5,false,0\n");
	aunit_printf("#CASE_START_test_ksw_global_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			qlen=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mat=(int8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n_cigar_=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			query=(uint8_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			tlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			w=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			gapo=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			m=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			target=(uint8_t *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			gape=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			*cigar_=(uint32_t *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		returnValue = ksw_global(qlen,query,tlen,target,m,mat,gapo,gape,w,n_cigar_,cigar_);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("ksw_global","returnValue",2,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("push_cigar","push_cigar_call_counter",push_cigar_call_counter)
	OB_INT_EXPR("calloc","calloc_call_counter",calloc_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_ksw_global_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksw_global_up();

	switch(caseIndex){
	case 5:
		test_ksw_global_5();
		break;
	default:
		abnormal_ksw_global_case(caseIndex);
		break;
	}

	test_ksw_global_down();
}

