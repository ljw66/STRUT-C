void test_bisstemeqcaselessblk_up(void);
void test_bisstemeqcaselessblk_down(void);


void test_bisstemeqcaselessblk_up(void){

	aunit_printf("\n##FUNCTION_START_bisstemeqcaselessblk\n");
 }

void test_bisstemeqcaselessblk_down(void){
	aunit_printf("\n##FUNCTION_END_bisstemeqcaselessblk\n");
 }



void abnormal_bisstemeqcaselessblk_case(int index);

void abnormal_bisstemeqcaselessblk_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bisstemeqcaselessblk_10(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct tagbstring *b0;
	void *blk;
	int len;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	void *valueList_0[]={(void *)"ABCDx"};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	struct tagbstring *valueList_2[]={(struct tagbstring *)b0_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"abcde"};
	unsigned int listLength_4=1;
	int valueList_5[]={5};
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
	case_id=10;
	//��ʼ����׮�������ü�����
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bisstemeqcaselessblk_10,false,0\n");
	aunit_printf("#CASE_START_test_bisstemeqcaselessblk_10\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			blk=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			b0=(struct tagbstring *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b0_PTRTO[0]).mlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b0_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b0_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = bisstemeqcaselessblk(b0,blk,len);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("bisstemeqcaselessblk","returnValue",0,returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test_bisstemeqcaselessblk_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_bisstemeqcaselessblk_up();

	switch(caseIndex){
	case 10:
		test_bisstemeqcaselessblk_10();
		break;
	default:
		abnormal_bisstemeqcaselessblk_case(caseIndex);
		break;
	}

	test_bisstemeqcaselessblk_down();
}

