void test_bsclose_up(void);
void test_bsclose_down(void);


void test_bsclose_up(void){

	aunit_printf("\n##FUNCTION_START_bsclose\n");
 }

void test_bsclose_down(void){
	aunit_printf("\n##FUNCTION_END_bsclose\n");
 }



void abnormal_bsclose_case(int index);

void abnormal_bsclose_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsclose_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bStream *s;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	struct bStream *valueList_0[]={(struct bStream *)s_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={1024};
	unsigned int listLength_1=1;
	struct tagbstring *valueList_2[]={(struct tagbstring *)NULL};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	void *valueList_4[]={(void *)0x1234};
	unsigned int listLength_4=1;
	size_t  (*valueList_5[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))0x5678};
	unsigned int listLength_5=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsclose_2,false,0\n");
	aunit_printf("#CASE_START_test_bsclose_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(struct bStream *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(s_PTRTO[0]).maxBuffSz=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(s_PTRTO[0]).buff=(struct tagbstring *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).isEOF=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(s_PTRTO[0]).parm=(void *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(s_PTRTO[0]).readFnPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = bsclose(s);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("bsclose","returnValue","0x1234",returnValue)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->readFnPtr","NULL",s->readFnPtr)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->parm","NULL",s->parm)
	TEST_ASSERT_EQUAL_INT("bsclose","s->isEOF",1,s->isEOF)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->buff","NULL",s->buff)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsclose_2\n");
}

void test_bsclose_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bStream *s;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	struct bStream *valueList_0[]={(struct bStream *)s_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	int valueList_3[]={2048};
	unsigned int listLength_3=1;
	struct tagbstring *valueList_4[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0x5678};
	unsigned int listLength_6=1;
	size_t  (*valueList_7[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))0x9abc};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsclose_3,false,0\n");
	aunit_printf("#CASE_START_test_bsclose_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(struct bStream *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_tagbstring1.mlen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.slen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).maxBuffSz=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(s_PTRTO[0]).buff=(struct tagbstring *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(s_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(s_PTRTO[0]).parm=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(s_PTRTO[0]).readFnPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = bsclose(s);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("bsclose","returnValue","0x5678",returnValue)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->readFnPtr","NULL",s->readFnPtr)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->parm","NULL",s->parm)
	TEST_ASSERT_EQUAL_INT("bsclose","s->isEOF",1,s->isEOF)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->buff","NULL",s->buff)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsclose_3\n");
}

void test_bsclose_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bStream *s;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	struct bStream *valueList_0[]={(struct bStream *)s_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	int valueList_3[]={2048};
	unsigned int listLength_3=1;
	struct tagbstring *valueList_4[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0x5678};
	unsigned int listLength_6=1;
	size_t  (*valueList_7[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))0x9abc};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsclose_4,false,0\n");
	aunit_printf("#CASE_START_test_bsclose_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(struct bStream *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_tagbstring1.mlen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.slen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).maxBuffSz=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(s_PTRTO[0]).buff=(struct tagbstring *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(s_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(s_PTRTO[0]).parm=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(s_PTRTO[0]).readFnPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = bsclose(s);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("bsclose","returnValue","0x5678",returnValue)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->readFnPtr","NULL",s->readFnPtr)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->parm","NULL",s->parm)
	TEST_ASSERT_EQUAL_INT("bsclose","s->isEOF",1,s->isEOF)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->buff","NULL",s->buff)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsclose_4\n");
}

void test_bsclose_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct bStream *s;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	void *returnValue = 0;

	//ֵ�������
	struct bStream *valueList_0[]={(struct bStream *)s_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	int valueList_3[]={2048};
	unsigned int listLength_3=1;
	struct tagbstring *valueList_4[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	void *valueList_6[]={(void *)0x5678};
	unsigned int listLength_6=1;
	size_t  (*valueList_7[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))0x9abc};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	free_call_counter = 0;
	bdestroy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsclose_5,false,0\n");
	aunit_printf("#CASE_START_test_bsclose_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			s=(struct bStream *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_tagbstring1.mlen=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.slen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(s_PTRTO[0]).maxBuffSz=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(s_PTRTO[0]).buff=(struct tagbstring *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(s_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(s_PTRTO[0]).parm=(void *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(s_PTRTO[0]).readFnPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = bsclose(s);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("bsclose","returnValue","0x5678",returnValue)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->readFnPtr","NULL",s->readFnPtr)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->parm","NULL",s->parm)
	TEST_ASSERT_EQUAL_INT("bsclose","s->isEOF",1,s->isEOF)
	TEST_ASSERT_EQUAL_LONG("bsclose","s->buff","NULL",s->buff)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("free","free_call_counter",free_call_counter)
	OB_INT_EXPR("bdestroy","bdestroy_call_counter",bdestroy_call_counter)

	aunit_printf("#CASE_END_test_bsclose_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsclose_up();

	switch(caseIndex){
	case 2:
		test_bsclose_2();
		break;
	case 3:
		test_bsclose_3();
		break;
	case 4:
		test_bsclose_4();
		break;
	case 5:
		test_bsclose_5();
		break;
	default:
		abnormal_bsclose_case(caseIndex);
		break;
	}

	test_bsclose_down();
}

