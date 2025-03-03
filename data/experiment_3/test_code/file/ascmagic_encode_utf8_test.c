void test_encode_utf8_up(void);
void test_encode_utf8_down(void);


void test_encode_utf8_up(void){

	aunit_printf("\n##FUNCTION_START_encode_utf8\n");
 }

void test_encode_utf8_down(void){
	aunit_printf("\n##FUNCTION_END_encode_utf8\n");
 }



void abnormal_encode_utf8_case(int index);

void abnormal_encode_utf8_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_encode_utf8_13(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *buf;
	unsigned int len;
	file_unichar_t *ubuf;
	unsigned int ulen;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned char *returnValue = 0;

	//ֵ�������
	unsigned char *valueList_0[]={(unsigned char *)"____________"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={12};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	file_unichar_t *valueList_3[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0x7FFFFFFF};
	unsigned int listLength_4=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=13;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_encode_utf8_13,false,0\n");
	aunit_printf("#CASE_START_test_encode_utf8_13\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ulen=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ubuf=(file_unichar_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ubuf_PTRTO[0]=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = encode_utf8(buf,len,ubuf,ulen);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("encode_utf8","returnValue","_\xFD\xBF\xBF\xBF\xBF\xBF___",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_encode_utf8_13\n");
}

void aunit_test_func_run(int caseIndex){

	test_encode_utf8_up();

	switch(caseIndex){
	case 13:
		test_encode_utf8_13();
		break;
	default:
		abnormal_encode_utf8_case(caseIndex);
		break;
	}

	test_encode_utf8_down();
}

