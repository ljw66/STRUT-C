void test_bs1_up(void);
void test_bs1_down(void);


void test_bs1_up(void){

	aunit_printf("\n##FUNCTION_START_bs1\n");
 }

void test_bs1_down(void){
	aunit_printf("\n##FUNCTION_END_bs1\n");
 }



void abnormal_bs1_case(int index);

void abnormal_bs1_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bs1_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic *m;


	//ֵ�������
	struct magic *valueList_0[]={(struct magic *)m_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={10};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={300};
	unsigned int listLength_2=1;
	int valueList_3[]={200};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={5};
	unsigned int listLength_4=1;
	int valueList_5[]={100};
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
	case_id=1;
	//��ʼ����׮�������ü�����
	parse_apple_call_counter = 0;
	swap2_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	swap8_call_counter = 0;
	parse_mime_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bs1_1,false,0\n");
	aunit_printf("#CASE_START_test_bs1_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			m=(struct magic *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(m_PTRTO[0]).cont_level=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(m_PTRTO[0]).lineno=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).in_offset=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).offset=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		bs1(m);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("swap2","swap2_call_counter",swap2_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("swap8","swap8_call_counter",swap8_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_bs1_1\n");
}

void test_bs1_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic *m;


	//ֵ�������
	struct magic *valueList_0[]={(struct magic *)m_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={15};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={350};
	unsigned int listLength_2=1;
	int valueList_3[]={250};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={10};
	unsigned int listLength_4=1;
	int valueList_5[]={150};
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
	parse_apple_call_counter = 0;
	swap2_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	swap8_call_counter = 0;
	parse_mime_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bs1_2,false,0\n");
	aunit_printf("#CASE_START_test_bs1_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			m=(struct magic *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(m_PTRTO[0]).cont_level=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(m_PTRTO[0]).lineno=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).in_offset=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).offset=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		bs1(m);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("swap2","swap2_call_counter",swap2_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("swap8","swap8_call_counter",swap8_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_bs1_2\n");
}

void test_bs1_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic *m;


	//ֵ�������
	struct magic *valueList_0[]={(struct magic *)m_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={20};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={400};
	unsigned int listLength_2=1;
	int valueList_3[]={300};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={41};
	unsigned int listLength_4=1;
	int valueList_5[]={200};
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
	case_id=3;
	//��ʼ����׮�������ü�����
	parse_apple_call_counter = 0;
	swap2_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	swap8_call_counter = 0;
	parse_mime_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bs1_3,false,0\n");
	aunit_printf("#CASE_START_test_bs1_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			m=(struct magic *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(m_PTRTO[0]).cont_level=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(m_PTRTO[0]).lineno=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).in_offset=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).offset=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		bs1(m);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("swap2","swap2_call_counter",swap2_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("swap8","swap8_call_counter",swap8_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_bs1_3\n");
}

void test_bs1_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct magic *m;


	//ֵ�������
	struct magic *valueList_0[]={(struct magic *)m_PTRTO};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={25};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={450};
	unsigned int listLength_2=1;
	int valueList_3[]={350};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={45};
	unsigned int listLength_4=1;
	int valueList_5[]={250};
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
	case_id=4;
	//��ʼ����׮�������ü�����
	parse_apple_call_counter = 0;
	swap2_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	swap8_call_counter = 0;
	parse_mime_call_counter = 0;
	swap4_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bs1_4,false,0\n");
	aunit_printf("#CASE_START_test_bs1_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			m=(struct magic *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(m_PTRTO[0]).cont_level=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(m_PTRTO[0]).lineno=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(m_PTRTO[0]).in_offset=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(m_PTRTO[0]).type=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(m_PTRTO[0]).offset=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		bs1(m);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("swap2","swap2_call_counter",swap2_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("swap8","swap8_call_counter",swap8_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("swap4","swap4_call_counter",swap4_call_counter)

	aunit_printf("#CASE_END_test_bs1_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_bs1_up();

	switch(caseIndex){
	case 1:
		test_bs1_1();
		break;
	case 2:
		test_bs1_2();
		break;
	case 3:
		test_bs1_3();
		break;
	case 4:
		test_bs1_4();
		break;
	default:
		abnormal_bs1_case(caseIndex);
		break;
	}

	test_bs1_down();
}

