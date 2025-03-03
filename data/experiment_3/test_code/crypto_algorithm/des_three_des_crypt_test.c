void test_three_des_crypt_up(void);
void test_three_des_crypt_down(void);


void test_three_des_crypt_up(void){

	aunit_printf("\n##FUNCTION_START_three_des_crypt\n");
 }

void test_three_des_crypt_down(void){
	aunit_printf("\n##FUNCTION_END_three_des_crypt\n");
 }



void abnormal_three_des_crypt_case(int index);

void abnormal_three_des_crypt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_three_des_crypt_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	BYTE (*key)[16][6];


	//值序列相关
	unsigned char valueList_0[]={0x00};
	unsigned int listLength_0=1;
	unsigned char valueList_1[]={0x05};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x00};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x06};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x00};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x07};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0x00};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x08};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0x00};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x00};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x00};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0x00};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0x01};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0x02};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0x03};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0x04};
	unsigned int listLength_15=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	des_crypt_call_counter = 0;

	aunit_printf("###TEST_TREE_test_three_des_crypt_1,false,0\n");
	aunit_printf("#CASE_START_test_three_des_crypt_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			out[7]=(unsigned char)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			in[4]=(unsigned char)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			out[6]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			in[5]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			out[5]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			in[6]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			out[4]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			in[7]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			out[3]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			out[2]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			out[1]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			out[0]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			in[0]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			in[1]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			in[2]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			in[3]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		three_des_crypt(in,out,key);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("des_crypt","des_crypt_call_counter",des_crypt_call_counter)

	aunit_printf("#CASE_END_test_three_des_crypt_1\n");
}

void aunit_test_func_run(int caseIndex){

	test_three_des_crypt_up();

	switch(caseIndex){
	case 1:
		test_three_des_crypt_1();
		break;
	default:
		abnormal_three_des_crypt_case(caseIndex);
		break;
	}

	test_three_des_crypt_down();
}

