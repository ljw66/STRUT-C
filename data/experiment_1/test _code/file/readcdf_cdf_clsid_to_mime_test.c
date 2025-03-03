void test_cdf_clsid_to_mime_up(void);
void test_cdf_clsid_to_mime_down(void);


void test_cdf_clsid_to_mime_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_clsid_to_mime\n");
 }

void test_cdf_clsid_to_mime_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_clsid_to_mime\n");
 }



void abnormal_cdf_clsid_to_mime_case(int index);

void abnormal_cdf_clsid_to_mime_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_clsid_to_mime_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t *clsid;
	struct cv *cv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={12345};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={67890};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"application/example"};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={12345};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={67890};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[0].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("cdf_clsid_to_mime","returnValue","application/example",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_1\n");
}

void test_cdf_clsid_to_mime_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t *clsid;
	struct cv *cv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={11111};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={22222};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"application/example"};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={12345};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={67890};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[0].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("cdf_clsid_to_mime","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_2\n");
}

void test_cdf_clsid_to_mime_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t *clsid;
	struct cv *cv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={12345};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={67890};
	unsigned int listLength_3=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("cdf_clsid_to_mime","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_3\n");
}

void test_cdf_clsid_to_mime_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t *clsid;
	struct cv *cv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={55555};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={66666};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"application/second-example"};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)"application/example"};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={66666};
	unsigned int listLength_6=1;
	unsigned long long int valueList_7[]={55555};
	unsigned int listLength_7=1;
	unsigned long long int valueList_8[]={12345};
	unsigned int listLength_8=1;
	unsigned long long int valueList_9[]={67890};
	unsigned int listLength_9=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[1].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].mime=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			cv_PTRTO[1].clsid[1]=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			cv_PTRTO[1].clsid[0]=(unsigned long long int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_STRING("cdf_clsid_to_mime","returnValue","application/second-example",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_4\n");
}

void test_cdf_clsid_to_mime_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t *clsid;
	struct cv *cv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={12345};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={67890};
	unsigned int listLength_3=1;
	unsigned long long int valueList_4[]={12345};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={67890};
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
	case_id=5;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_5,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("cdf_clsid_to_mime","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_5\n");
}

void test_cdf_clsid_to_mime_6(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	uint64_t *clsid;
	struct cv *cv;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	const char *returnValue = 0;

	//ֵ�������
	uint64_t *valueList_0[]={(uint64_t *)clsid_PTRTO};
	unsigned int listLength_0=1;
	struct cv *valueList_1[]={(struct cv *)cv_PTRTO};
	unsigned int listLength_1=1;
	unsigned long long int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned long long int valueList_3[]={0};
	unsigned int listLength_3=1;
	char *valueList_4[]={(char *)"application/example"};
	unsigned int listLength_4=1;
	unsigned long long int valueList_5[]={12345};
	unsigned int listLength_5=1;
	unsigned long long int valueList_6[]={67890};
	unsigned int listLength_6=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=6;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_cdf_clsid_to_mime_6,false,0\n");
	aunit_printf("#CASE_START_test_cdf_clsid_to_mime_6\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			clsid=(uint64_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			cv=(struct cv *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			clsid_PTRTO[0]=(unsigned long long int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			clsid_PTRTO[1]=(unsigned long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			cv_PTRTO[0].mime=(char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			cv_PTRTO[0].clsid[0]=(unsigned long long int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			cv_PTRTO[0].clsid[1]=(unsigned long long int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = cdf_clsid_to_mime(clsid,cv);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_STRING_EXPR("cdf_clsid_to_mime","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_cdf_clsid_to_mime_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_clsid_to_mime_up();

	switch(caseIndex){
	case 1:
		test_cdf_clsid_to_mime_1();
		break;
	case 2:
		test_cdf_clsid_to_mime_2();
		break;
	case 3:
		test_cdf_clsid_to_mime_3();
		break;
	case 4:
		test_cdf_clsid_to_mime_4();
		break;
	case 5:
		test_cdf_clsid_to_mime_5();
		break;
	case 6:
		test_cdf_clsid_to_mime_6();
		break;
	default:
		abnormal_cdf_clsid_to_mime_case(caseIndex);
		break;
	}

	test_cdf_clsid_to_mime_down();
}

