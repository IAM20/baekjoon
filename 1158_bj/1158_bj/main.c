#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

typedef struct node {
	int data;
	struct node * next;
	struct node * prev;
}element;

typedef struct q {
	int size;
	struct node * head;
}Q;

int 
qInsert(Q * q, int data)
{
	element * tmp = (element *)malloc(sizeof(element));
	if(tmp == NULL) return 1;
	tmp->data = data;
	
	if(q->size > 0) {
		q->head->prev->next = tmp;
		tmp->prev = q->head->prev;
		tmp->next = q->head;
		q->head->prev = tmp;
	}else if(q->size == 0) {
		q->head = tmp;
		tmp->next = tmp->prev = tmp;
	}
	q->size++;

	return 0;
}

int
qDelete(Q * q, int data)
{
	element * tmp = q->head;
	for(int i = 0; i < q->size; i++) {
		if(tmp->data == data)
			break;
		tmp = tmp->next;
	}
	
	if(i == q->size)
		return -1;
	
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;

	int retval = tmp->data;
	q->size--;
	free(tmp);
	tmp = NULL;

	return retval;
}

void
qPrint(Q * q)
{
	if(q == NULL || q->size == 0)
		return;
	element * tmp = q->head;
	printf("<");
	for(int i = 1; i < q->size; i++) {
		printf("%d, ", tmp->data;)
		tmp = tmp->next;
	}printf("%d>", tmp->data);
}

Q *
qInit()
{
	Q * tmp = (Q *)malloc(sizeof(Q));
	if(tmp == NULL)
		exit(1);
	
	tmp->head = NULL;
	tmp->size = 0;
	return tmp;
}

int
josephus(int n, int m, Q * q)
{
	if(q == NULL)
		return 1;
	int i = 1, *arr, j = 0;
	arr = (int *)malloc(sizeof(int)*n);

	for(; i <= n; i++)
		qInsert(q, i);
	
	element * tmp = q->head;
	i = 1;
	while(q->size) {
		for(; i < m; i++)
			tmp = tmp->next;
		
		arr[j++] = qDelete(q, tmp->data);
		i = 0;
	}
	printf("<");
	for(i = 0; i < n-1; i++)
		printf("%d, ", arr[i]);
	printf("%d>", arr[i]);

	free(arr);

	return 0;
}

int
main(int argc, char * argv[])
{
	Q q
	q.size = 0;
	q.head = NULL;

	int n, m;

	scanf("%d %d", &n, &m);
	josephus(n, m, &q);

	return 0;

	return 0;
}