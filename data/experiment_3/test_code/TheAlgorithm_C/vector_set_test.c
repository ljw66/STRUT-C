void test_set_up(void);
void test_set_down(void);


void test_set_up(void){

	aunit_printf("\n##FUNCTION_START_set\n");
 }

void test_set_down(void){
	aunit_printf("\n##FUNCTION_END_set\n");
 }



void abnormal_set_case(int index);

void abnormal_set_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_set_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	Vector *vec;
	int index;
	int val;


	//ֵ�������
	int valueList_0[]={42};
	unsigned int listLength_0=1;
	Vector *valueList_1[]={(Vector *)vec_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	int *valueList_4[]={(int *)0, 0, 0, 0, 0};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_set_2,false,0\n");
	aunit_printf("#CASE_START_test_set_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			vec=(Vector *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			index=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(vec_PTRTO[0]).len=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(vec_PTRTO[0]).contents=(int *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		set(vec,index,val);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("set","vec->contents","[0, 0, 0, 0, 0]",vec->contents)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_set_2\n");
}

void aunit_test_func_run(int caseIndex){

	test_set_up();

	switch(caseIndex){
	case 2:
		test_set_2();
		break;
	default:
		abnormal_set_case(caseIndex);
		break;
	}

	test_set_down();
}

