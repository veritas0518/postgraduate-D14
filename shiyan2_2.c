//#include<stdio.h>
//#include<stdlib.h>
//typedef struct linknode
//
//{
//	int xs;  //ϵ��
//	int zs;  //ָ��
//	struct linknode* next;  //next ָ��
//} Node;
//Node* CreateLink() {
//	Node* head = NULL, * p = NULL, * q = NULL;  //�ȶ���������ָ�룬����ͷָ��
//	int x, z;  //һ������ϵ����x,һ������ָ����z
//	int i;  //��������
//	for (i = 0; i < 1000; i++) {
//		scanf("%d,%d", &x, &z);
//		if (x == 0 && z == 0)  //�����벻Ϊ0,0ʱ
//			break;
//		p = (Node*)malloc(sizeof(Node));
//		p->xs = x;
//		p->zs = z;
//		p->next = NULL;
//		if (i == 0)  //��Ϊ��һ���ڵ�
//			head = p;  //��ôͷ������p
//
//		else
//			q->next = p;
//		q = p;
//
//	}
//	return head;
//}
//
//Node* add(Node* p1, Node* p2) {
//	if (p1->zs < p2->zs) {  //�����ж�
//		Node* temp1 = p1;
//		//����ʱ��������һ�£������Ͼ���ð��������Ϊ��Ŀ��Ҫ�������
//		p1 = p2;
//		p2 = temp1;
//	}
//	Node* temp2 = p1;   //������һ������temp2�����p1,��Ϊ�˲����p1��ָ��������
//	if (p1->zs == p2->zs) {
//
//		p1->xs = p1->xs + p2->xs;
//
//		p2 = p2->next;
//	}
//	while (p1) {
//		while (p2) {
//			if (p1->next->zs < p2->zs) {  //��p1ָ����¸�����ָ����p2ָ����ָ����Ǹ��ڵ��ָ��Сʱ
//				Node* k = NULL;        //���������ȶ���һ����ʱ�Ľ��k����p2ָ��Ľ�����p1����ǰ��
//									   //����ʱ��������p2���
//				k = (Node*)malloc(sizeof(Node));
//				k->xs = p2->xs;
//				k->zs = p2->zs;
//				k->next = p1->next;
//				p1->next = k;
//				p2 = p2->next;
//				break;
//			}
//			else if (p1->next->zs == p2->zs) {    //���ﶼ�ǻ������жϣ��ж�p1���¸�����ָ��
//				p1->next->xs = p1->next->xs + p2->xs;
//				p2 = p2->next;
//				break;
//			}
//			else if (p1->next->zs > p2->zs) {
//				break;
//			}
//			p2 = p2->next;
//		}
//		p1 = p1->next;
//	}
//	return temp2;  //���ظղŸ�ֵ��p1
//}
//
//void ShowLink(Node* p) {
//	int flag1 = 1;   //����һ������flag1��Ϊ1ʱ���Ƿ����ˣ�Ϊ0ʱ����û����
//	while (p) {
//		if (p->xs == 0) {  //ϵ��Ϊ0ʱ���ǵ�Ȼ��������ָ����Ϊ����ɶ��û��
//			p = p->next;
//		}
//		else {
//			flag1 = 0;   //�������û�з���ϵ��Ϊ0�������������ѭ��
//			break;
//		}
//	}
//	if (flag1) {     //���ϵ��ָ��ȫ��0�����������
//		printf("0");
//		return;
//	}
//
//	flag1 = 0;  //��ʱ�ǵ�ǰ��p��Ȼ����Ϊ0��������֤����᲻�����0�����������ָ�����
//	while (p) {
//		if (p->xs != 0) {    //�����жϲ���׸��
//			if (p->xs != 1 && p->zs == 1) {
//				printf("%dx", p->xs);
//			}
//			else if (p->xs != 1 && p->zs != 1) {
//				if (p->xs == -1)
//					printf("-x^%d", p->zs);
//				else if (p->zs != 0)
//					printf("%dx^%d", p->xs, p->zs);
//				else if (p->xs != 0 && p->zs == 0)
//					printf("%d", p->xs);
//			}
//			else if (p->xs == 1 && p->zs == 1) {
//				printf("x");
//			}
//			else if (p->xs == 1 && p->zs != 1) {
//				if (p->zs == 0)
//					printf("x");
//				else
//					printf("x^%d", p->zs);
//			}
//
//			if (p->next != NULL && p->next->xs >= 0) {  //��û�ҵ����һ��Ԫ�أ�����ϵ������0��Ҳ��������
//				//  ��������Ҫ��� + �� ����������涼��0 ����Ҫ����� ֻҪ��һ����Ϊ0������Ҫ���
//				int flag2 = 0;
//				Node* isZero = p->next;
//				while (isZero) {
//					if (isZero->xs != 0) {
//						flag2 = 1;
//						break;
//					}
//					isZero = isZero->next;
//				}
//				if (flag2) {    //���������
//					printf("+");  //����Ҫ�ѼӺ��������
//
//				}
//			}
//		}
//		p = p->next;
//	}
//}
//
//int main() {
//	Node* Link1 = CreateLink();
//	Node* Link2 = CreateLink();
//	Node* sum = add(Link1, Link2);
//	ShowLink(sum);
//	return 0;
//}