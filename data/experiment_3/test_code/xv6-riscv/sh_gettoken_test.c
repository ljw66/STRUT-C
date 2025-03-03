void test_gettoken_up(void);
void test_gettoken_down(void);


void test_gettoken_up(void){

	aunit_printf("\n##FUNCTION_START_gettoken\n");
 }

void test_gettoken_down(void){
	aunit_printf("\n##FUNCTION_END_gettoken\n");
 }



void abnormal_gettoken_case(int index);

void abnormal_gettoken_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_gettoken_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;
	char **q;
	char **eq;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)" \t\n"};
	unsigned int listLength_0=1;
	char valueList_1[]={'&'};
	unsigned int listLength_1=1;
	char valueList_2[]={'>'};
	unsigned int listLength_2=1;
	char valueList_3[]={'('};
	unsigned int listLength_3=1;
	char valueList_4[]={','};
	unsigned int listLength_4=2;
	char valueList_5[]={'|'};
	unsigned int listLength_5=1;
	char valueList_6[]={'<'};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char valueList_8[]={')'};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)" \t\n"};
	unsigned int listLength_9=1;
	char valueList_10[]={' '};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char valueList_12[]={'\n'};
	unsigned int listLength_12=1;
	char valueList_13[]={'\v'};
	unsigned int listLength_13=1;
	char valueList_14[]={'\t'};
	unsigned int listLength_14=1;
	char valueList_15[]={'\r'};
	unsigned int listLength_15=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	strchr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_gettoken_2,false,0\n");
	aunit_printf("#CASE_START_test_gettoken_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			es=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			symbols[3]=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			symbols[2]=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			symbols[5]=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			symbols[4]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			symbols[1]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			symbols[0]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			*q=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			symbols[6]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			*ps=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			whitespace[4]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			*eq=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			whitespace[2]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			whitespace[3]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			whitespace[0]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			whitespace[1]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = gettoken(ps,es,q,eq);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("gettoken","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)

	aunit_printf("#CASE_END_test_gettoken_2\n");
}

void test_gettoken_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;
	char **q;
	char **eq;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"&"};
	unsigned int listLength_0=1;
	char valueList_1[]={'&'};
	unsigned int listLength_1=1;
	char valueList_2[]={'>'};
	unsigned int listLength_2=1;
	char valueList_3[]={'('};
	unsigned int listLength_3=1;
	char valueList_4[]={','};
	unsigned int listLength_4=2;
	char valueList_5[]={'|'};
	unsigned int listLength_5=1;
	char valueList_6[]={'<'};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char valueList_8[]={')'};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)"&"};
	unsigned int listLength_9=1;
	char valueList_10[]={' '};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char valueList_12[]={'\n'};
	unsigned int listLength_12=1;
	char valueList_13[]={'\v'};
	unsigned int listLength_13=1;
	char valueList_14[]={'\t'};
	unsigned int listLength_14=1;
	char valueList_15[]={'\r'};
	unsigned int listLength_15=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	strchr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_gettoken_3,false,0\n");
	aunit_printf("#CASE_START_test_gettoken_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			es=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			symbols[3]=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			symbols[2]=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			symbols[5]=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			symbols[4]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			symbols[1]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			symbols[0]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			*q=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			symbols[6]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			*ps=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			whitespace[4]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			*eq=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			whitespace[2]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			whitespace[3]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			whitespace[0]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			whitespace[1]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = gettoken(ps,es,q,eq);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("gettoken","returnValue","&",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)

	aunit_printf("#CASE_END_test_gettoken_3\n");
}

void test_gettoken_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;
	char **q;
	char **eq;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)">>"};
	unsigned int listLength_0=1;
	char valueList_1[]={'&'};
	unsigned int listLength_1=1;
	char valueList_2[]={'>'};
	unsigned int listLength_2=1;
	char valueList_3[]={'('};
	unsigned int listLength_3=1;
	char valueList_4[]={','};
	unsigned int listLength_4=2;
	char valueList_5[]={'|'};
	unsigned int listLength_5=1;
	char valueList_6[]={'<'};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char valueList_8[]={')'};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)">>"};
	unsigned int listLength_9=1;
	char valueList_10[]={' '};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char valueList_12[]={'\n'};
	unsigned int listLength_12=1;
	char valueList_13[]={'\v'};
	unsigned int listLength_13=1;
	char valueList_14[]={'\t'};
	unsigned int listLength_14=1;
	char valueList_15[]={'\r'};
	unsigned int listLength_15=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	strchr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_gettoken_4,false,0\n");
	aunit_printf("#CASE_START_test_gettoken_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			es=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			symbols[3]=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			symbols[2]=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			symbols[5]=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			symbols[4]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			symbols[1]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			symbols[0]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			*q=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			symbols[6]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			*ps=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			whitespace[4]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			*eq=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			whitespace[2]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			whitespace[3]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			whitespace[0]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			whitespace[1]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = gettoken(ps,es,q,eq);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("gettoken","returnValue","+",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)

	aunit_printf("#CASE_END_test_gettoken_4\n");
}

void test_gettoken_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;
	char **q;
	char **eq;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)"abc123"};
	unsigned int listLength_0=1;
	char valueList_1[]={'&'};
	unsigned int listLength_1=1;
	char valueList_2[]={'>'};
	unsigned int listLength_2=1;
	char valueList_3[]={'('};
	unsigned int listLength_3=1;
	char valueList_4[]={','};
	unsigned int listLength_4=2;
	char valueList_5[]={'|'};
	unsigned int listLength_5=1;
	char valueList_6[]={'<'};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char valueList_8[]={')'};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)"abc123"};
	unsigned int listLength_9=1;
	char valueList_10[]={' '};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char valueList_12[]={'\n'};
	unsigned int listLength_12=1;
	char valueList_13[]={'\v'};
	unsigned int listLength_13=1;
	char valueList_14[]={'\t'};
	unsigned int listLength_14=1;
	char valueList_15[]={'\r'};
	unsigned int listLength_15=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	strchr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_gettoken_5,false,0\n");
	aunit_printf("#CASE_START_test_gettoken_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			es=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			symbols[3]=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			symbols[2]=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			symbols[5]=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			symbols[4]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			symbols[1]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			symbols[0]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			*q=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			symbols[6]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			*ps=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			whitespace[4]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			*eq=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			whitespace[2]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			whitespace[3]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			whitespace[0]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			whitespace[1]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = gettoken(ps,es,q,eq);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("gettoken","returnValue","a",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)

	aunit_printf("#CASE_END_test_gettoken_5\n");
}

void test_gettoken_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	char **ps;
	char *es;
	char **q;
	char **eq;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	char *valueList_0[]={(char *)" \tabc&"};
	unsigned int listLength_0=1;
	char valueList_1[]={'&'};
	unsigned int listLength_1=1;
	char valueList_2[]={'>'};
	unsigned int listLength_2=1;
	char valueList_3[]={'('};
	unsigned int listLength_3=1;
	char valueList_4[]={','};
	unsigned int listLength_4=2;
	char valueList_5[]={'|'};
	unsigned int listLength_5=1;
	char valueList_6[]={'<'};
	unsigned int listLength_6=1;
	char *valueList_7[]={(char *)0};
	unsigned int listLength_7=1;
	char valueList_8[]={')'};
	unsigned int listLength_8=1;
	char *valueList_9[]={(char *)" \tabc&"};
	unsigned int listLength_9=1;
	char valueList_10[]={' '};
	unsigned int listLength_10=1;
	char *valueList_11[]={(char *)0};
	unsigned int listLength_11=1;
	char valueList_12[]={'\n'};
	unsigned int listLength_12=1;
	char valueList_13[]={'\v'};
	unsigned int listLength_13=1;
	char valueList_14[]={'\t'};
	unsigned int listLength_14=1;
	char valueList_15[]={'\r'};
	unsigned int listLength_15=1;
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
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����
	strchr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_gettoken_6,false,0\n");
	aunit_printf("#CASE_START_test_gettoken_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			es=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			symbols[3]=(char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			symbols[2]=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			symbols[5]=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			symbols[4]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			symbols[1]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			symbols[0]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			*q=(char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			symbols[6]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			*ps=(char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			whitespace[4]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			*eq=(char *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			whitespace[2]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			whitespace[3]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			whitespace[0]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			whitespace[1]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		returnValue = gettoken(ps,es,q,eq);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("gettoken","returnValue","a",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)

	aunit_printf("#CASE_END_test_gettoken_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_gettoken_up();

	switch(caseIndex){
	case 2:
		test_gettoken_2();
		break;
	case 3:
		test_gettoken_3();
		break;
	case 4:
		test_gettoken_4();
		break;
	case 5:
		test_gettoken_5();
		break;
	case 6:
		test_gettoken_6();
		break;
	default:
		abnormal_gettoken_case(caseIndex);
		break;
	}

	test_gettoken_down();
}

