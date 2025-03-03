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

void test_bisstemeqcaselessblk_11(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b0;
	void *blk;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b0_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={69};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={68};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={67};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={66};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={65};
	unsigned int listLength_7=1;
	int valueList_8[]={10};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={98};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={97};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={100};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={99};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={103};
	unsigned int listLength_13=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=11;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bisstemeqcaselessblk_11,false,0\n");
	aunit_printf("#CASE_START_test_bisstemeqcaselessblk_11\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b0=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b0_PTRTO[0]).slen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			b0_PTRTO_0_data_PTRTO[4]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			b0_PTRTO_0_data_PTRTO[3]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			b0_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			b0_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			b0_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b0_PTRTO[0]).mlen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			blk[1]=(void)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			blk[0]=(void)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			blk[3]=(void)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			blk[2]=(void)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			blk[4]=(void)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = bisstemeqcaselessblk(b0,blk,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bisstemeqcaselessblk","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test_bisstemeqcaselessblk_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_bisstemeqcaselessblk_up();

	switch(caseIndex){
	case 11:
		test_bisstemeqcaselessblk_11();
		break;
	default:
		abnormal_bisstemeqcaselessblk_case(caseIndex);
		break;
	}

	test_bisstemeqcaselessblk_down();
}

