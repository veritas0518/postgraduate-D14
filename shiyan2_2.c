//#include<stdio.h>
//#include<stdlib.h>
//typedef struct linknode
//
//{
//	int xs;  //系数
//	int zs;  //指数
//	struct linknode* next;  //next 指针
//} Node;
//Node* CreateLink() {
//	Node* head = NULL, * p = NULL, * q = NULL;  //先定义三个空指针，包括头指针
//	int x, z;  //一个代表系数的x,一个代表指数的z
//	int i;  //用来计数
//	for (i = 0; i < 1000; i++) {
//		scanf("%d,%d", &x, &z);
//		if (x == 0 && z == 0)  //当输入不为0,0时
//			break;
//		p = (Node*)malloc(sizeof(Node));
//		p->xs = x;
//		p->zs = z;
//		p->next = NULL;
//		if (i == 0)  //当为第一个节点
//			head = p;  //那么头结点就是p
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
//	if (p1->zs < p2->zs) {  //基本判断
//		Node* temp1 = p1;
//		//用临时变量交换一下，本质上就是冒泡排序，因为题目里要求降序输出
//		p1 = p2;
//		p2 = temp1;
//	}
//	Node* temp2 = p1;   //这里用一个变量temp2来存放p1,是为了不会吧p1的指针给搞混淆
//	if (p1->zs == p2->zs) {
//
//		p1->xs = p1->xs + p2->xs;
//
//		p2 = p2->next;
//	}
//	while (p1) {
//		while (p2) {
//			if (p1->next->zs < p2->zs) {  //当p1指针的下个结点的指数比p2指针所指向的那个节点的指数小时
//				Node* k = NULL;        //这里是想先定义一个临时的结点k，将p2指针的结点放在p1结点的前面
//									   //用临时结点来存放p2结点
//				k = (Node*)malloc(sizeof(Node));
//				k->xs = p2->xs;
//				k->zs = p2->zs;
//				k->next = p1->next;
//				p1->next = k;
//				p2 = p2->next;
//				break;
//			}
//			else if (p1->next->zs == p2->zs) {    //这里都是基本的判断，判断p1的下个结点的指数
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
//	return temp2;  //返回刚才赋值的p1
//}
//
//void ShowLink(Node* p) {
//	int flag1 = 1;   //定义一个变量flag1：为1时就是发生了，为0时就是没发生
//	while (p) {
//		if (p->xs == 0) {  //系数为0时，那当然继续往后指，因为里面啥都没有
//			p = p->next;
//		}
//		else {
//			flag1 = 0;   //这里就是没有发生系数为0的情况，就跳出循环
//			break;
//		}
//	}
//	if (flag1) {     //如果系数指数全是0的情况发生了
//		printf("0");
//		return;
//	}
//
//	flag1 = 0;  //此时是当前的p必然不会为0，但不保证后面会不会出现0的情况，所以指针继续
//	while (p) {
//		if (p->xs != 0) {    //基本判断不做赘述
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
//			if (p->next != NULL && p->next->xs >= 0) {  //还没找到最后一个元素，并且系数大于0，也就是正数
//				//  负数不需要输出 + 号 但是如果后面都是0 不必要输出了 只要有一个不为0，还是要输出
//				int flag2 = 0;
//				Node* isZero = p->next;
//				while (isZero) {
//					if (isZero->xs != 0) {
//						flag2 = 1;
//						break;
//					}
//					isZero = isZero->next;
//				}
//				if (flag2) {    //如果发生了
//					printf("+");  //就需要把加号输出出来
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