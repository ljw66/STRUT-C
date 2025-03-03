void test_bwrite_up(void);
void test_bwrite_down(void);


void test_bwrite_up(void){

	aunit_printf("\n##FUNCTION_START_bwrite\n");
 }

void test_bwrite_down(void){
	aunit_printf("\n##FUNCTION_END_bwrite\n");
 }



void abnormal_bwrite_case(int index);

void abnormal_bwrite_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bwrite_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *b;


	//ֵ�������
	struct buf *valueList_0[]={(struct buf *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={10};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	struct buf *valueList_3[]={(struct buf *)&struct_buf2};
	unsigned int listLength_3=1;
	struct buf *valueList_4[]={(struct buf *)&struct_buf1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={5};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={2};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	holdingsleep_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwrite_1,false,0\n");
	aunit_printf("#CASE_START_test_bwrite_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buf *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(b_PTRTO[0]).dev=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).disk=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).next=(struct buf *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).prev=(struct buf *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).blockno=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).valid=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).refcnt=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		bwrite(b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("holdingsleep","holdingsleep_call_counter",holdingsleep_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_bwrite_1\n");
}

void test_bwrite_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *b;


	//ֵ�������
	struct buf *valueList_0[]={(struct buf *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={20};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	struct buf *valueList_3[]={(struct buf *)&struct_buf2};
	unsigned int listLength_3=1;
	struct buf *valueList_4[]={(struct buf *)&struct_buf1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={15};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={3};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	holdingsleep_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwrite_2,false,0\n");
	aunit_printf("#CASE_START_test_bwrite_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buf *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(b_PTRTO[0]).dev=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).disk=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).next=(struct buf *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).prev=(struct buf *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).blockno=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).valid=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).refcnt=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		bwrite(b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("holdingsleep","holdingsleep_call_counter",holdingsleep_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_bwrite_2\n");
}

void test_bwrite_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *b;


	//ֵ�������
	struct buf *valueList_0[]={(struct buf *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={30};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	struct buf *valueList_3[]={(struct buf *)&struct_buf2};
	unsigned int listLength_3=1;
	struct buf *valueList_4[]={(struct buf *)&struct_buf1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={25};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={1};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	holdingsleep_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwrite_3,false,0\n");
	aunit_printf("#CASE_START_test_bwrite_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buf *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(b_PTRTO[0]).dev=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).disk=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).next=(struct buf *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).prev=(struct buf *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).blockno=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).valid=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).refcnt=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		bwrite(b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("holdingsleep","holdingsleep_call_counter",holdingsleep_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_bwrite_3\n");
}

void test_bwrite_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *b;


	//ֵ�������
	struct buf *valueList_0[]={(struct buf *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={40};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	struct buf *valueList_3[]={(struct buf *)&struct_buf2};
	unsigned int listLength_3=1;
	struct buf *valueList_4[]={(struct buf *)&struct_buf1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={35};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={4};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	holdingsleep_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwrite_4,false,0\n");
	aunit_printf("#CASE_START_test_bwrite_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buf *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(b_PTRTO[0]).dev=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).disk=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).next=(struct buf *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).prev=(struct buf *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).blockno=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).valid=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).refcnt=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		bwrite(b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("holdingsleep","holdingsleep_call_counter",holdingsleep_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_bwrite_4\n");
}

void test_bwrite_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *b;


	//ֵ�������
	struct buf *valueList_0[]={(struct buf *)b_PTRTO};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={50};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	struct buf *valueList_3[]={(struct buf *)&struct_buf2};
	unsigned int listLength_3=1;
	struct buf *valueList_4[]={(struct buf *)&struct_buf1};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={45};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	unsigned int valueList_7[]={5};
	unsigned int listLength_7=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	holdingsleep_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwrite_5,false,0\n");
	aunit_printf("#CASE_START_test_bwrite_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct buf *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(b_PTRTO[0]).dev=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).disk=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).next=(struct buf *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).prev=(struct buf *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).blockno=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).valid=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b_PTRTO[0]).refcnt=(unsigned int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		bwrite(b);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("holdingsleep","holdingsleep_call_counter",holdingsleep_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_bwrite_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_bwrite_up();

	switch(caseIndex){
	case 1:
		test_bwrite_1();
		break;
	case 2:
		test_bwrite_2();
		break;
	case 3:
		test_bwrite_3();
		break;
	case 4:
		test_bwrite_4();
		break;
	case 5:
		test_bwrite_5();
		break;
	default:
		abnormal_bwrite_case(caseIndex);
		break;
	}

	test_bwrite_down();
}

