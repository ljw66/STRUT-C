void test_binchrCF_up(void);
void test_binchrCF_down(void);


void test_binchrCF_up(void){

	aunit_printf("\n##FUNCTION_START_binchrCF\n");
 }

void test_binchrCF_down(void){
	aunit_printf("\n##FUNCTION_END_binchrCF\n");
 }



void abnormal_binchrCF_case(int index);

void abnormal_binchrCF_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_binchrCF_12(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *data;
	int len;
	int pos;
	struct charField *cf;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct charField *valueList_0[]={(struct charField *)cf_PTRTO};
	unsigned int listLength_0=1;
	unsigned char *valueList_1[]={(unsigned char *)"xyz"};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=12;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_binchrCF_12,false,0\n");
	aunit_printf("#CASE_START_test_binchrCF_12\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			cf=(struct charField *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			data=(unsigned char *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			len=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			pos=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = binchrCF(data,len,pos,cf);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("binchrCF","returnValue",2,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_binchrCF_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_binchrCF_up();

	switch(caseIndex){
	case 12:
		test_binchrCF_12();
		break;
	default:
		abnormal_binchrCF_case(caseIndex);
		break;
	}

	test_binchrCF_down();
}

