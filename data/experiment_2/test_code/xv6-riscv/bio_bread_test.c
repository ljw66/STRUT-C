void test_bread_up(void);
void test_bread_down(void);


void test_bread_up(void){

	aunit_printf("\n##FUNCTION_START_bread\n");
 }

void test_bread_down(void){
	aunit_printf("\n##FUNCTION_END_bread\n");
 }



void abnormal_bread_case(int index);

void abnormal_bread_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bread_1(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int dev;
	unsigned int blockno;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=1;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_1,false,0\n");
	aunit_printf("#CASE_START_test_bread_1\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bread","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_1\n");
}

void test_bread_2(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int dev;
	unsigned int blockno;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={2};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={2};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=2;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_2,false,0\n");
	aunit_printf("#CASE_START_test_bread_2\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bread","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_2\n");
}

void test_bread_3(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int dev;
	unsigned int blockno;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={3};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={3};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=3;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_3,false,0\n");
	aunit_printf("#CASE_START_test_bread_3\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bread","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_3\n");
}

void test_bread_4(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int dev;
	unsigned int blockno;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={4};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={4};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=4;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_4,false,0\n");
	aunit_printf("#CASE_START_test_bread_4\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bread","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_4\n");
}

void test_bread_5(void){
	//�ظ����ü���������
 	unsigned int aUnItCoUnTeR;
	//����������Ӧ�ľֲ���������Ϊ�������͸�Ĭ��ֵ
	unsigned int dev;
	unsigned int blockno;

	//��������ֵ�ֲ���������Ϊ�������͸�Ĭ��ֵ
	struct buf *returnValue = 0;

	//ֵ�������
	unsigned int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={5};
	unsigned int listLength_1=1;
	//ֵ��������ʱ�Ƿ��������һ��ֵ 1=ʹ�� 0=��ʹ��
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//���ó�ʼ������

	//Ϊcase_countȫ�ֱ�����ֵ
	case_id=5;
	//��ʼ����׮�������ü�����
	virtio_disk_rw_call_counter = 0;
	bget_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bread_5,false,0\n");
	aunit_printf("#CASE_START_test_bread_5\n");
	//ѭ��������,Ϊ�û�����/����ֵ��ֵ
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			dev=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			blockno=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = bread(dev,blockno);
	}
	//������ӵı��ʽ��ֵ,��������ĸñ��ʽ����Ԥ��,�����
	OB_INT_EXPR("bread","returnValue",returnValue)

	//Ԥ�������и�׮�������ô���
	OB_INT_EXPR("virtio_disk_rw","virtio_disk_rw_call_counter",virtio_disk_rw_call_counter)
	OB_INT_EXPR("bget","bget_call_counter",bget_call_counter)

	aunit_printf("#CASE_END_test_bread_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_bread_up();

	switch(caseIndex){
	case 1:
		test_bread_1();
		break;
	case 2:
		test_bread_2();
		break;
	case 3:
		test_bread_3();
		break;
	case 4:
		test_bread_4();
		break;
	case 5:
		test_bread_5();
		break;
	default:
		abnormal_bread_case(caseIndex);
		break;
	}

	test_bread_down();
}

