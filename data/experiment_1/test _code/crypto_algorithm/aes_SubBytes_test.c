void test_SubBytes_up(void);
void test_SubBytes_down(void);


void test_SubBytes_up(void){

	aunit_printf("\n##FUNCTION_START_SubBytes\n");
 }

void test_SubBytes_down(void){
	aunit_printf("\n##FUNCTION_END_SubBytes\n");
 }



void abnormal_SubBytes_case(int index);

void abnormal_SubBytes_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_SubBytes_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	BYTE (*state)[4];


	//ֵ�������
	unsigned char valueList_0[]={9};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={31};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={29};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={10};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={17};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={12};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={21};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={19};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={25};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={23};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={2};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={15};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={4};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={6};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={28};
	unsigned int listLength_15=1;
	unsigned char valueList_16[]={8};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={26};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={30};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={11};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={16};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={13};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={20};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={18};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={24};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={22};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={14};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={1};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={3};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={5};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={27};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={7};
	unsigned int listLength_31=1;
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
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����

	aunit_printf("###TEST_TREE_test_SubBytes_1,false,0\n");
	aunit_printf("#CASE_START_test_SubBytes_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			aes_sbox[0][9]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			aes_sbox[1][15]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			aes_sbox[1][13]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			aes_sbox[0][10]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			aes_sbox[1][1]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			aes_sbox[0][12]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			aes_sbox[1][5]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			aes_sbox[1][3]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			aes_sbox[1][9]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			aes_sbox[1][7]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			aes_sbox[0][0]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			aes_sbox[0][2]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			aes_sbox[0][15]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			aes_sbox[0][4]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			aes_sbox[0][6]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			aes_sbox[1][12]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			aes_sbox[0][8]=(unsigned char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			aes_sbox[1][10]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			aes_sbox[1][14]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			aes_sbox[0][11]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			aes_sbox[1][0]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			aes_sbox[0][13]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			aes_sbox[1][4]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			aes_sbox[1][2]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			aes_sbox[1][8]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			aes_sbox[1][6]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			aes_sbox[0][14]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			aes_sbox[0][1]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			aes_sbox[0][3]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			aes_sbox[0][5]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			aes_sbox[1][11]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			aes_sbox[0][7]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		SubBytes(state);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	TEST_ASSERT_EQUAL_LONG("SubBytes","state","[[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]]",state)

	//Ԥ�������и�׮�������ô���

	aunit_printf("#CASE_END_test_SubBytes_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_SubBytes_up();

	switch(caseIndex){
	case 1:
		test_SubBytes_1();
		break;
	default:
		abnormal_SubBytes_case(caseIndex);
		break;
	}

	test_SubBytes_down();
}

