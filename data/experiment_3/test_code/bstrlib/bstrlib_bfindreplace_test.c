void test_bfindreplace_up(void);
void test_bfindreplace_down(void);


void test_bfindreplace_up(void){

	aunit_printf("\n##FUNCTION_START_bfindreplace\n");
 }

void test_bfindreplace_down(void){
	aunit_printf("\n##FUNCTION_END_bfindreplace\n");
 }



void abnormal_bfindreplace_case(int index);

void abnormal_bfindreplace_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bfindreplace_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b;
	struct tagbstring *find;
	struct tagbstring *repl;
	int pos;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	struct tagbstring *valueList_2[]={(struct tagbstring *)find_PTRTO};
	unsigned int listLength_2=1;
	struct tagbstring *valueList_3[]={(struct tagbstring *)repl_PTRTO};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"abcdefgh"};
	unsigned int listLength_4=1;
	unsigned char *valueList_5[]={(unsigned char *)"cdef"};
	unsigned int listLength_5=1;
	int valueList_6[]={4};
	unsigned int listLength_6=1;
	int valueList_7[]={10};
	unsigned int listLength_7=1;
	int valueList_8[]={8};
	unsigned int listLength_8=1;
	unsigned char *valueList_9[]={(unsigned char *)"1234"};
	unsigned int listLength_9=1;
	int valueList_10[]={4};
	unsigned int listLength_10=1;
	int valueList_11[]={4};
	unsigned int listLength_11=1;
	int valueList_12[]={4};
	unsigned int listLength_12=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	findreplaceengine_call_counter = 0;
	binstr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bfindreplace_1,false,0\n");
	aunit_printf("#CASE_START_test_bfindreplace_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pos=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			find=(struct tagbstring *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			repl=(struct tagbstring *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(find_PTRTO[0]).data=(unsigned char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(repl_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).mlen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b_PTRTO[0]).slen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(repl_PTRTO[0]).data=(unsigned char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(find_PTRTO[0]).slen=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(find_PTRTO[0]).mlen=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(repl_PTRTO[0]).mlen=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = bfindreplace(b,find,repl,pos);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bfindreplace","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("findreplaceengine","findreplaceengine_call_counter",findreplaceengine_call_counter)
	OB_INT_EXPR("binstr","binstr_call_counter",binstr_call_counter)

	aunit_printf("#CASE_END_test_bfindreplace_1\n");
}

void test_bfindreplace_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b;
	struct tagbstring *find;
	struct tagbstring *repl;
	int pos;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={2};
	unsigned int listLength_1=1;
	struct tagbstring *valueList_2[]={(struct tagbstring *)find_PTRTO};
	unsigned int listLength_2=1;
	struct tagbstring *valueList_3[]={(struct tagbstring *)repl_PTRTO};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"abcdefgh"};
	unsigned int listLength_4=1;
	unsigned char *valueList_5[]={(unsigned char *)"ijkl"};
	unsigned int listLength_5=1;
	int valueList_6[]={4};
	unsigned int listLength_6=1;
	int valueList_7[]={10};
	unsigned int listLength_7=1;
	int valueList_8[]={8};
	unsigned int listLength_8=1;
	unsigned char *valueList_9[]={(unsigned char *)"1234"};
	unsigned int listLength_9=1;
	int valueList_10[]={4};
	unsigned int listLength_10=1;
	int valueList_11[]={4};
	unsigned int listLength_11=1;
	int valueList_12[]={4};
	unsigned int listLength_12=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	findreplaceengine_call_counter = 0;
	binstr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bfindreplace_2,false,0\n");
	aunit_printf("#CASE_START_test_bfindreplace_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pos=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			find=(struct tagbstring *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			repl=(struct tagbstring *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(find_PTRTO[0]).data=(unsigned char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(repl_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).mlen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b_PTRTO[0]).slen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(repl_PTRTO[0]).data=(unsigned char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(find_PTRTO[0]).slen=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(find_PTRTO[0]).mlen=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(repl_PTRTO[0]).mlen=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = bfindreplace(b,find,repl,pos);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bfindreplace","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("findreplaceengine","findreplaceengine_call_counter",findreplaceengine_call_counter)
	OB_INT_EXPR("binstr","binstr_call_counter",binstr_call_counter)

	aunit_printf("#CASE_END_test_bfindreplace_2\n");
}

void test_bfindreplace_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b;
	struct tagbstring *find;
	struct tagbstring *repl;
	int pos;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct tagbstring *valueList_2[]={(struct tagbstring *)find_PTRTO};
	unsigned int listLength_2=1;
	struct tagbstring *valueList_3[]={(struct tagbstring *)repl_PTRTO};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"abcd"};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned char *valueList_6[]={(unsigned char *)"1234"};
	unsigned int listLength_6=1;
	int valueList_7[]={4};
	unsigned int listLength_7=1;
	int valueList_8[]={4};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	int valueList_10[]={4};
	unsigned int listLength_10=1;
	int valueList_11[]={4};
	unsigned int listLength_11=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	findreplaceengine_call_counter = 0;
	binstr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bfindreplace_3,false,0\n");
	aunit_printf("#CASE_START_test_bfindreplace_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pos=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			find=(struct tagbstring *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			repl=(struct tagbstring *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(find_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(repl_PTRTO[0]).data=(unsigned char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(repl_PTRTO[0]).slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(find_PTRTO[0]).slen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(b_PTRTO[0]).mlen=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(find_PTRTO[0]).mlen=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(repl_PTRTO[0]).mlen=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = bfindreplace(b,find,repl,pos);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bfindreplace","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("findreplaceengine","findreplaceengine_call_counter",findreplaceengine_call_counter)
	OB_INT_EXPR("binstr","binstr_call_counter",binstr_call_counter)

	aunit_printf("#CASE_END_test_bfindreplace_3\n");
}

void test_bfindreplace_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b;
	struct tagbstring *find;
	struct tagbstring *repl;
	int pos;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={12};
	unsigned int listLength_1=1;
	struct tagbstring *valueList_2[]={(struct tagbstring *)find_PTRTO};
	unsigned int listLength_2=1;
	struct tagbstring *valueList_3[]={(struct tagbstring *)repl_PTRTO};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"abcdefgh"};
	unsigned int listLength_4=1;
	unsigned char *valueList_5[]={(unsigned char *)"cdef"};
	unsigned int listLength_5=1;
	int valueList_6[]={4};
	unsigned int listLength_6=1;
	int valueList_7[]={10};
	unsigned int listLength_7=1;
	int valueList_8[]={8};
	unsigned int listLength_8=1;
	unsigned char *valueList_9[]={(unsigned char *)"1234"};
	unsigned int listLength_9=1;
	int valueList_10[]={4};
	unsigned int listLength_10=1;
	int valueList_11[]={4};
	unsigned int listLength_11=1;
	int valueList_12[]={4};
	unsigned int listLength_12=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	findreplaceengine_call_counter = 0;
	binstr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bfindreplace_4,false,0\n");
	aunit_printf("#CASE_START_test_bfindreplace_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pos=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			find=(struct tagbstring *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			repl=(struct tagbstring *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(find_PTRTO[0]).data=(unsigned char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(repl_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).mlen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b_PTRTO[0]).slen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(repl_PTRTO[0]).data=(unsigned char *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(find_PTRTO[0]).slen=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(find_PTRTO[0]).mlen=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(repl_PTRTO[0]).mlen=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		returnValue = bfindreplace(b,find,repl,pos);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bfindreplace","returnValue",-1,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("findreplaceengine","findreplaceengine_call_counter",findreplaceengine_call_counter)
	OB_INT_EXPR("binstr","binstr_call_counter",binstr_call_counter)

	aunit_printf("#CASE_END_test_bfindreplace_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_bfindreplace_up();

	switch(caseIndex){
	case 1:
		test_bfindreplace_1();
		break;
	case 2:
		test_bfindreplace_2();
		break;
	case 3:
		test_bfindreplace_3();
		break;
	case 4:
		test_bfindreplace_4();
		break;
	default:
		abnormal_bfindreplace_case(caseIndex);
		break;
	}

	test_bfindreplace_down();
}

