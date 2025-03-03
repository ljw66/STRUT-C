void test_cdf_read_short_stream_up(void);
void test_cdf_read_short_stream_down(void);


void test_cdf_read_short_stream_up(void){

	aunit_printf("\n##FUNCTION_START_cdf_read_short_stream\n");
 }

void test_cdf_read_short_stream_down(void){
	aunit_printf("\n##FUNCTION_END_cdf_read_short_stream\n");
 }



void abnormal_cdf_read_short_stream_case(int index);

void abnormal_cdf_read_short_stream_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_cdf_read_short_stream_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_dir_t *dir;
	cdf_stream_t *scn;
	cdf_directory_t **root;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cdf_sat_t *valueList_0[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	//*root is an invalid expression 
	cdf_dir_t *valueList_3[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_3=1;
	cdf_info_t *valueList_4[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_4=1;
	cdf_stream_t *valueList_5[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={2};
	unsigned int listLength_6=1;
	unsigned short int valueList_7[]={3};
	unsigned int listLength_7=1;
	void *valueList_8[]={(void *)0};
	unsigned int listLength_8=1;
	unsigned int valueList_9[]={0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	cdf_directory_t *valueList_11[]={(cdf_directory_t *)&struct__sue_Anonymous_struct_55986916_121};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={1};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={1024};
	unsigned int listLength_14=1;
	unsigned short int valueList_15[]={0xFFFE};
	unsigned int listLength_15=1;
	unsigned char *valueList_16[]={(unsigned char *)0};
	unsigned int listLength_16=1;
	unsigned short int valueList_17[]={9};
	unsigned int listLength_17=1;
	unsigned long long int valueList_18[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_18=1;
	unsigned int valueList_19[]={128};
	unsigned int listLength_19=1;
	unsigned short int valueList_20[]={62};
	unsigned int listLength_20=1;
	int valueList_21[]={1};
	unsigned int listLength_21=1;
	unsigned short int valueList_22[]={6};
	unsigned int listLength_22=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
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
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	cdf_read_long_sector_chain_call_counter = 0;
	cdf_zero_stream_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_short_stream_1,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_short_stream_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sat=(cdf_sat_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			dir=(cdf_dir_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			info=(cdf_info_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			scn=(cdf_stream_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct__sue_Anonymous_struct_55986916_121.d_type=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(scn_PTRTO[0]).sst_tab=(void *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(scn_PTRTO[0]).sst_len=(unsigned int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(scn_PTRTO[0]).sst_dirlen=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(scn_PTRTO[0]).sst_ss=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(h_PTRTO[0]).h_sec_size_p2=(unsigned short int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(h_PTRTO[0]).h_num_sectors_in_sat=(unsigned int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(info_PTRTO[0]).i_fd=(int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			(h_PTRTO[0]).h_short_sec_size_p2=(unsigned short int)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		returnValue = cdf_read_short_stream(info,h,sat,dir,scn,root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_read_short_stream","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("cdf_read_short_stream","scn->sst_tab",0,scn->sst_tab)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_read_long_sector_chain","cdf_read_long_sector_chain_call_counter",cdf_read_long_sector_chain_call_counter)
	OB_INT_EXPR("cdf_zero_stream","cdf_zero_stream_call_counter",cdf_zero_stream_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_short_stream_1\n");
}

void test_cdf_read_short_stream_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_dir_t *dir;
	cdf_stream_t *scn;
	cdf_directory_t **root;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cdf_sat_t *valueList_0[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	//*root is an invalid expression 
	cdf_dir_t *valueList_3[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_3=1;
	cdf_info_t *valueList_4[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_4=1;
	cdf_stream_t *valueList_5[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_5=1;
	int valueList_6[]={-1};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={5};
	unsigned int listLength_7=1;
	unsigned short int valueList_8[]={3};
	unsigned int listLength_8=1;
	void *valueList_9[]={(void *)0};
	unsigned int listLength_9=1;
	unsigned int valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={0};
	unsigned int listLength_11=1;
	cdf_directory_t *valueList_12[]={(cdf_directory_t *)&struct__sue_Anonymous_struct_55986916_121};
	unsigned int listLength_12=1;
	unsigned int valueList_13[]={1};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={1024};
	unsigned int listLength_15=1;
	unsigned short int valueList_16[]={0xFFFE};
	unsigned int listLength_16=1;
	unsigned char *valueList_17[]={(unsigned char *)0};
	unsigned int listLength_17=1;
	unsigned long long int valueList_18[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_18=1;
	unsigned short int valueList_19[]={62};
	unsigned int listLength_19=1;
	int valueList_20[]={1};
	unsigned int listLength_20=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
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
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	cdf_read_long_sector_chain_call_counter = 0;
	cdf_zero_stream_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_short_stream_2,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_short_stream_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sat=(cdf_sat_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			dir=(cdf_dir_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			info=(cdf_info_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			scn=(cdf_stream_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct__sue_Anonymous_struct_55986916_121.d_stream_first_sector=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct__sue_Anonymous_struct_55986916_121.d_type=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(scn_PTRTO[0]).sst_tab=(void *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(scn_PTRTO[0]).sst_len=(unsigned int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(scn_PTRTO[0]).sst_dirlen=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(scn_PTRTO[0]).sst_ss=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(info_PTRTO[0]).i_fd=(int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		returnValue = cdf_read_short_stream(info,h,sat,dir,scn,root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_read_short_stream","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("cdf_read_short_stream","scn->sst_tab",0,scn->sst_tab)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_read_long_sector_chain","cdf_read_long_sector_chain_call_counter",cdf_read_long_sector_chain_call_counter)
	OB_INT_EXPR("cdf_zero_stream","cdf_zero_stream_call_counter",cdf_zero_stream_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_short_stream_2\n");
}

void test_cdf_read_short_stream_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	cdf_info_t *info;
	cdf_header_t *h;
	cdf_sat_t *sat;
	cdf_dir_t *dir;
	cdf_stream_t *scn;
	cdf_directory_t **root;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	int returnValue = 0;

	//ֵ�������
	cdf_sat_t *valueList_0[]={(cdf_sat_t *)sat_PTRTO};
	unsigned int listLength_0=1;
	cdf_header_t *valueList_1[]={(cdf_header_t *)h_PTRTO};
	unsigned int listLength_1=1;
	//*root is an invalid expression 
	cdf_dir_t *valueList_3[]={(cdf_dir_t *)dir_PTRTO};
	unsigned int listLength_3=1;
	cdf_info_t *valueList_4[]={(cdf_info_t *)info_PTRTO};
	unsigned int listLength_4=1;
	cdf_stream_t *valueList_5[]={(cdf_stream_t *)scn_PTRTO};
	unsigned int listLength_5=1;
	int valueList_6[]={2};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={5};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={512};
	unsigned int listLength_8=1;
	unsigned short int valueList_9[]={3};
	unsigned int listLength_9=1;
	void *valueList_10[]={(void *)0};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned int valueList_12[]={0};
	unsigned int listLength_12=1;
	cdf_directory_t *valueList_13[]={(cdf_directory_t *)&struct__sue_Anonymous_struct_55986916_121};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={1};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned int valueList_16[]={1024};
	unsigned int listLength_16=1;
	unsigned short int valueList_17[]={0xFFFE};
	unsigned int listLength_17=1;
	unsigned char *valueList_18[]={(unsigned char *)0};
	unsigned int listLength_18=1;
	unsigned long long int valueList_19[]={0xE11AB1A1E011CFD0};
	unsigned int listLength_19=1;
	unsigned short int valueList_20[]={62};
	unsigned int listLength_20=1;
	int valueList_21[]={1};
	unsigned int listLength_21=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
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
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	cdf_read_long_sector_chain_call_counter = 0;
	cdf_zero_stream_call_counter = 0;

	aunit_printf("###TEST_TREE_test_cdf_read_short_stream_3,false,0\n");
	aunit_printf("#CASE_START_test_cdf_read_short_stream_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			sat=(cdf_sat_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			h=(cdf_header_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			dir=(cdf_dir_t *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			info=(cdf_info_t *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			scn=(cdf_stream_t *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			struct__sue_Anonymous_struct_55986916_121.d_stream_first_sector=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct__sue_Anonymous_struct_55986916_121.d_type=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			struct__sue_Anonymous_struct_55986916_121.d_size=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(h_PTRTO[0]).h_revision=(unsigned short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(scn_PTRTO[0]).sst_tab=(void *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(scn_PTRTO[0]).sst_len=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(scn_PTRTO[0]).sst_dirlen=(unsigned int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(dir_PTRTO[0]).dir_tab=(cdf_directory_t *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(dir_PTRTO[0]).dir_len=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(scn_PTRTO[0]).sst_ss=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(info_PTRTO[0]).i_len=(unsigned int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			(h_PTRTO[0]).h_byte_order=(unsigned short int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			(info_PTRTO[0]).i_buf=(unsigned char *)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			(h_PTRTO[0]).h_magic=(unsigned long long int)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			(h_PTRTO[0]).h_version=(unsigned short int)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			(info_PTRTO[0]).i_fd=(int)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		returnValue = cdf_read_short_stream(info,h,sat,dir,scn,root);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_INT("cdf_read_short_stream","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_LONG("cdf_read_short_stream","scn->sst_tab","non_null_pointer",scn->sst_tab)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("cdf_read_long_sector_chain","cdf_read_long_sector_chain_call_counter",cdf_read_long_sector_chain_call_counter)
	OB_INT_EXPR("cdf_zero_stream","cdf_zero_stream_call_counter",cdf_zero_stream_call_counter)

	aunit_printf("#CASE_END_test_cdf_read_short_stream_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_cdf_read_short_stream_up();

	switch(caseIndex){
	case 1:
		test_cdf_read_short_stream_1();
		break;
	case 2:
		test_cdf_read_short_stream_2();
		break;
	case 3:
		test_cdf_read_short_stream_3();
		break;
	default:
		abnormal_cdf_read_short_stream_case(caseIndex);
		break;
	}

	test_cdf_read_short_stream_down();
}

