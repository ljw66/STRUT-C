void test_ksw_align_up(void);
void test_ksw_align_down(void);


void test_ksw_align_up(void){

	aunit_printf("\n##FUNCTION_START_ksw_align\n");
 }

void test_ksw_align_down(void){
	aunit_printf("\n##FUNCTION_END_ksw_align\n");
 }



void abnormal_ksw_align_case(int index);

void abnormal_ksw_align_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ksw_align_1(void){
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
	int xtra;
	kswq_t **qry;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kswr_t returnValue;

	//ֵ�������
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int8_t *valueList_1[]={(int8_t *)"abc"};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	uint8_t *valueList_3[]={(uint8_t *)"abc"};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	//*qry is an invalid expression 
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	uint8_t *valueList_8[]={(uint8_t *)"abc"};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	ksw_u8_call_counter = 0;
	revseq_call_counter = 0;
	ksw_qinit_call_counter = 0;
	free_call_counter = 0;
	ksw_i16_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_align_1,false,0\n");
	aunit_printf("#CASE_START_test_ksw_align_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			qlen=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mat=(int8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			xtra=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			query=(uint8_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			tlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			gapo=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

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
		returnValue = ksw_align(qlen,query,tlen,target,m,mat,gapo,gape,xtra,qry);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("ksw_u8","ksw_u8_call_counter",ksw_u8_call_counter)
	OB_INT_EXPR("revseq","revseq_call_counter",revseq_call_counter)
	OB_INT_EXPR("ksw_qinit","ksw_qinit_call_counter",ksw_qinit_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ksw_i16","ksw_i16_call_counter",ksw_i16_call_counter)

	aunit_printf("#CASE_END_test_ksw_align_1\n");
}

void test_ksw_align_2(void){
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
	int xtra;
	kswq_t **qry;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kswr_t returnValue;

	//ֵ�������
	int valueList_0[]={5};
	unsigned int listLength_0=1;
	int8_t *valueList_1[]={(int8_t *)"abcde"};
	unsigned int listLength_1=1;
	int valueList_2[]={0x80000};
	unsigned int listLength_2=1;
	uint8_t *valueList_3[]={(uint8_t *)"abcde"};
	unsigned int listLength_3=1;
	int valueList_4[]={5};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	//*qry is an invalid expression 
	int valueList_7[]={5};
	unsigned int listLength_7=1;
	uint8_t *valueList_8[]={(uint8_t *)"fghij"};
	unsigned int listLength_8=1;
	int valueList_9[]={1};
	unsigned int listLength_9=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	ksw_u8_call_counter = 0;
	revseq_call_counter = 0;
	ksw_qinit_call_counter = 0;
	free_call_counter = 0;
	ksw_i16_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_align_2,false,0\n");
	aunit_printf("#CASE_START_test_ksw_align_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			qlen=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mat=(int8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			xtra=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			query=(uint8_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			tlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			gapo=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

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
		returnValue = ksw_align(qlen,query,tlen,target,m,mat,gapo,gape,xtra,qry);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("ksw_u8","ksw_u8_call_counter",ksw_u8_call_counter)
	OB_INT_EXPR("revseq","revseq_call_counter",revseq_call_counter)
	OB_INT_EXPR("ksw_qinit","ksw_qinit_call_counter",ksw_qinit_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ksw_i16","ksw_i16_call_counter",ksw_i16_call_counter)

	aunit_printf("#CASE_END_test_ksw_align_2\n");
}

void test_ksw_align_3(void){
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
	int xtra;
	kswq_t **qry;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kswr_t returnValue;

	//ֵ�������
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	int8_t *valueList_1[]={(int8_t *)"xyz"};
	unsigned int listLength_1=1;
	int valueList_2[]={0x40000};
	unsigned int listLength_2=1;
	uint8_t *valueList_3[]={(uint8_t *)"xyz"};
	unsigned int listLength_3=1;
	int valueList_4[]={3};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	//*qry is an invalid expression 
	int valueList_7[]={3};
	unsigned int listLength_7=1;
	uint8_t *valueList_8[]={(uint8_t *)"uvw"};
	unsigned int listLength_8=1;
	int valueList_9[]={2};
	unsigned int listLength_9=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	ksw_u8_call_counter = 0;
	revseq_call_counter = 0;
	ksw_qinit_call_counter = 0;
	free_call_counter = 0;
	ksw_i16_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_align_3,false,0\n");
	aunit_printf("#CASE_START_test_ksw_align_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			qlen=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mat=(int8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			xtra=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			query=(uint8_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			tlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			gapo=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

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
		returnValue = ksw_align(qlen,query,tlen,target,m,mat,gapo,gape,xtra,qry);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("ksw_u8","ksw_u8_call_counter",ksw_u8_call_counter)
	OB_INT_EXPR("revseq","revseq_call_counter",revseq_call_counter)
	OB_INT_EXPR("ksw_qinit","ksw_qinit_call_counter",ksw_qinit_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ksw_i16","ksw_i16_call_counter",ksw_i16_call_counter)

	aunit_printf("#CASE_END_test_ksw_align_3\n");
}

void test_ksw_align_4(void){
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
	int xtra;
	kswq_t **qry;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kswr_t returnValue;

	//ֵ�������
	int valueList_0[]={4};
	unsigned int listLength_0=1;
	int8_t *valueList_1[]={(int8_t *)"abcd"};
	unsigned int listLength_1=1;
	int valueList_2[]={0x10000};
	unsigned int listLength_2=1;
	uint8_t *valueList_3[]={(uint8_t *)"abcd"};
	unsigned int listLength_3=1;
	int valueList_4[]={4};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	//*qry is an invalid expression 
	int valueList_7[]={4};
	unsigned int listLength_7=1;
	uint8_t *valueList_8[]={(uint8_t *)"efgh"};
	unsigned int listLength_8=1;
	int valueList_9[]={1};
	unsigned int listLength_9=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	ksw_u8_call_counter = 0;
	revseq_call_counter = 0;
	ksw_qinit_call_counter = 0;
	free_call_counter = 0;
	ksw_i16_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_align_4,false,0\n");
	aunit_printf("#CASE_START_test_ksw_align_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			qlen=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mat=(int8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			xtra=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			query=(uint8_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			tlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			gapo=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

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
		returnValue = ksw_align(qlen,query,tlen,target,m,mat,gapo,gape,xtra,qry);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("ksw_u8","ksw_u8_call_counter",ksw_u8_call_counter)
	OB_INT_EXPR("revseq","revseq_call_counter",revseq_call_counter)
	OB_INT_EXPR("ksw_qinit","ksw_qinit_call_counter",ksw_qinit_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ksw_i16","ksw_i16_call_counter",ksw_i16_call_counter)

	aunit_printf("#CASE_END_test_ksw_align_4\n");
}

void test_ksw_align_5(void){
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
	int xtra;
	kswq_t **qry;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	kswr_t returnValue;

	//ֵ�������
	int valueList_0[]={6};
	unsigned int listLength_0=1;
	int8_t *valueList_1[]={(int8_t *)"abcdef"};
	unsigned int listLength_1=1;
	int valueList_2[]={0xA0000};
	unsigned int listLength_2=1;
	uint8_t *valueList_3[]={(uint8_t *)"abcdef"};
	unsigned int listLength_3=1;
	int valueList_4[]={6};
	unsigned int listLength_4=1;
	int valueList_5[]={2};
	unsigned int listLength_5=1;
	//*qry is an invalid expression 
	int valueList_7[]={6};
	unsigned int listLength_7=1;
	uint8_t *valueList_8[]={(uint8_t *)"ghijkl"};
	unsigned int listLength_8=1;
	int valueList_9[]={2};
	unsigned int listLength_9=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	ksw_u8_call_counter = 0;
	revseq_call_counter = 0;
	ksw_qinit_call_counter = 0;
	free_call_counter = 0;
	ksw_i16_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ksw_align_5,false,0\n");
	aunit_printf("#CASE_START_test_ksw_align_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			qlen=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			mat=(int8_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			xtra=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			query=(uint8_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			tlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			gapo=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

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
		returnValue = ksw_align(qlen,query,tlen,target,m,mat,gapo,gape,xtra,qry);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("ksw_u8","ksw_u8_call_counter",ksw_u8_call_counter)
	OB_INT_EXPR("revseq","revseq_call_counter",revseq_call_counter)
	OB_INT_EXPR("ksw_qinit","ksw_qinit_call_counter",ksw_qinit_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("ksw_i16","ksw_i16_call_counter",ksw_i16_call_counter)

	aunit_printf("#CASE_END_test_ksw_align_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ksw_align_up();

	switch(caseIndex){
	case 1:
		test_ksw_align_1();
		break;
	case 2:
		test_ksw_align_2();
		break;
	case 3:
		test_ksw_align_3();
		break;
	case 4:
		test_ksw_align_4();
		break;
	case 5:
		test_ksw_align_5();
		break;
	default:
		abnormal_ksw_align_case(caseIndex);
		break;
	}

	test_ksw_align_down();
}

