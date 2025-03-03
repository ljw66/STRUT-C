void test_md2_transform_up(void);
void test_md2_transform_down(void);


void test_md2_transform_up(void){

	aunit_printf("\n##FUNCTION_START_md2_transform\n");
 }

void test_md2_transform_down(void){
	aunit_printf("\n##FUNCTION_END_md2_transform\n");
 }



void abnormal_md2_transform_case(int index);

void abnormal_md2_transform_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_md2_transform_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD2_CTX *ctx;
	BYTE *data;


	//值序列相关
	BYTE *valueList_0[]={(BYTE *)0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	unsigned int listLength_0=1;
	MD2_CTX *valueList_1[]={(MD2_CTX *)ctx_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={1};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={255};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={2};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md2_transform_5,false,0\n");
	aunit_printf("#CASE_START_test_md2_transform_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			data=(BYTE *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ctx=(MD2_CTX *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			s[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			s[4]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			s[2]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		md2_transform(ctx,data);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md2_transform_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_md2_transform_up();

	switch(caseIndex){
	case 5:
		test_md2_transform_5();
		break;
	default:
		abnormal_md2_transform_case(caseIndex);
		break;
	}

	test_md2_transform_down();
}

