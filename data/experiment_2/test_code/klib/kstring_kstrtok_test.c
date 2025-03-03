void test_kstrtok_up(void);
void test_kstrtok_down(void);


void test_kstrtok_up(void){

	aunit_printf("\n##FUNCTION_START_kstrtok\n");
 }

void test_kstrtok_down(void){
	aunit_printf("\n##FUNCTION_END_kstrtok\n");
 }



void abnormal_kstrtok_case(int index);

void abnormal_kstrtok_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_kstrtok_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *str;
	char *sep_in;
	ks_tokaux_t *aux;

	//声明返回值局部变量，若为基本类型赋默认值
	char *returnValue = 0;

	//值序列相关
	char *valueList_0[]={(char *)"ghi",(char *)"jkl"};
	unsigned int listLength_0=2;
	ks_tokaux_t *valueList_1[]={(ks_tokaux_t *)aux_PTRTO};
	unsigned int listLength_1=1;
	char *valueList_2[]={(char *)"",(char *)","};
	unsigned int listLength_2=2;
	int valueList_3[]={-1};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	char *valueList_5[]={(char *)0};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=1;
	unsigned char useLast_1=0;
	unsigned char useLast_2=1;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_kstrtok_10,false,0\n");
	aunit_printf("#CASE_START_test_kstrtok_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			str=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			aux=(ks_tokaux_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			sep_in=(char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(aux_PTRTO[0]).sep=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(aux_PTRTO[0]).finished=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(aux_PTRTO[0]).p=(char *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = kstrtok(str,sep_in,aux);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_STRING("kstrtok","returnValue","ghi",returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_kstrtok_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_kstrtok_up();

	switch(caseIndex){
	case 10:
		test_kstrtok_10();
		break;
	default:
		abnormal_kstrtok_case(caseIndex);
		break;
	}

	test_kstrtok_down();
}

