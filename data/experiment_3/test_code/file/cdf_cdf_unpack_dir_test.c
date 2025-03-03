void test_cdf_unpack_dir_up(void);
void test_cdf_unpack_dir_down(void);


void test_cdf_unpack_dir_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_unpack_dir\n");
 }

void test_cdf_unpack_dir_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_unpack_dir\n");
 }



void abnormal_cdf_unpack_dir_case(int index);

void abnormal_cdf_unpack_dir_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_unpack_dir_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_directory_t *d;
	char *buf;


	//ֵ�������
	cdf_directory_t *valueList_0[]={(cdf_directory_t *)d_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcdefghij"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={1024};
	unsigned int listLength_3=1;
	long long int valueList_4[]={100000};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={5};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={1};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	long long int valueList_13[]={200000};
	unsigned int listLength_13=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_unpack_dir_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_unpack_dir_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_directory_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).d_flags=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).d_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).d_created=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(d_PTRTO[0]).d_storage=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(d_PTRTO[0]).d_stream_first_sector=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(d_PTRTO[0]).d_namelen=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(d_PTRTO[0]).d_unused0=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(d_PTRTO[0]).d_type=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(d_PTRTO[0]).d_right_child=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(d_PTRTO[0]).d_color=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(d_PTRTO[0]).d_left_child=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(d_PTRTO[0]).d_modified=(long long int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		cdf_unpack_dir(d,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_cdf_unpack_dir_1\n");
}

void test_cdf_unpack_dir_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_directory_t *d;
	char *buf;


	//ֵ�������
	cdf_directory_t *valueList_0[]={(cdf_directory_t *)d_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abc"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	long long int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0};
	unsigned int listLength_9=1;
	int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	long long int valueList_13[]={0};
	unsigned int listLength_13=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_unpack_dir_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_unpack_dir_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_directory_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).d_flags=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).d_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).d_created=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(d_PTRTO[0]).d_storage=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(d_PTRTO[0]).d_stream_first_sector=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(d_PTRTO[0]).d_namelen=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(d_PTRTO[0]).d_unused0=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(d_PTRTO[0]).d_type=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(d_PTRTO[0]).d_right_child=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(d_PTRTO[0]).d_color=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(d_PTRTO[0]).d_left_child=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(d_PTRTO[0]).d_modified=(long long int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		cdf_unpack_dir(d,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_cdf_unpack_dir_2\n");
}

void test_cdf_unpack_dir_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_directory_t *d;
	char *buf;


	//ֵ�������
	cdf_directory_t *valueList_0[]={(cdf_directory_t *)d_PTRTO};
	unsigned int listLength_0=1;
	char *valueList_1[]={(char *)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={4294967295};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4096};
	unsigned int listLength_3=1;
	long long int valueList_4[]={1000000};
	unsigned int listLength_4=1;
	int valueList_5[]={30};
	unsigned int listLength_5=1;
	int valueList_6[]={50};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={255};
	unsigned int listLength_9=1;
	int valueList_10[]={20};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={255};
	unsigned int listLength_11=1;
	int valueList_12[]={10};
	unsigned int listLength_12=1;
	long long int valueList_13[]={2000000};
	unsigned int listLength_13=1;
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
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_unpack_dir_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_unpack_dir_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_directory_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			buf=(char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).d_flags=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).d_size=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).d_created=(long long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(d_PTRTO[0]).d_storage=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(d_PTRTO[0]).d_stream_first_sector=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(d_PTRTO[0]).d_namelen=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(d_PTRTO[0]).d_unused0=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(d_PTRTO[0]).d_type=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(d_PTRTO[0]).d_right_child=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(d_PTRTO[0]).d_color=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(d_PTRTO[0]).d_left_child=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(d_PTRTO[0]).d_modified=(long long int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		cdf_unpack_dir(d,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_cdf_unpack_dir_3\n");
}

void test_cdf_unpack_dir_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_directory_t *d;
	char *buf;


	//ֵ�������
	cdf_directory_t *valueList_0[]={(cdf_directory_t *)d_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	long long int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	unsigned short int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={0};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0};
	unsigned int listLength_10=1;
	int valueList_11[]={0};
	unsigned int listLength_11=1;
	long long int valueList_12[]={0};
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
	memcpy_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_unpack_dir_4,false,0\n");
	aunit_printf("#CASE_START_test_cdf_unpack_dir_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			d=(cdf_directory_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(d_PTRTO[0]).d_flags=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(d_PTRTO[0]).d_size=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(d_PTRTO[0]).d_created=(long long int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(d_PTRTO[0]).d_storage=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(d_PTRTO[0]).d_stream_first_sector=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(d_PTRTO[0]).d_namelen=(unsigned short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(d_PTRTO[0]).d_unused0=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(d_PTRTO[0]).d_type=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(d_PTRTO[0]).d_right_child=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(d_PTRTO[0]).d_color=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(d_PTRTO[0]).d_left_child=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(d_PTRTO[0]).d_modified=(long long int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		cdf_unpack_dir(d,buf);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)

	aunit_printf("#CASE_END_test_cdf_unpack_dir_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_unpack_dir_up();

	switch(caseIndex){
	case 1:
		test_cdf_unpack_dir_1();
		break;
	case 2:
		test_cdf_unpack_dir_2();
		break;
	case 3:
		test_cdf_unpack_dir_3();
		break;
	case 4:
		test_cdf_unpack_dir_4();
		break;
	default:
		abnormal_cdf_unpack_dir_case(caseIndex);
		break;
	}

	test_cdf_unpack_dir_down();
}

