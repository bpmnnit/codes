#include<stdio.h>
#include<stdlib.h>
struct node {
  int n;
  struct node * next;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert(int num){
  struct node * temp = (struct node *)malloc(sizeof(struct node));
  temp->n = num;
  if(head == NULL){
    temp->next = temp;
    head = temp;
    tail = head;
  }
  tail->next = temp;
  tail = temp;
  temp->next = head;
}

void show(){
  struct node * ptr = head;
  while(ptr != tail){
    printf("%d ", ptr->n);
    ptr = ptr->next;
  }
  printf("%d\n", ptr->n);
}

void delhead(){
  if(head == NULL)
    return;
  struct node *p, *q;
  if(head->next == head){
    p = head;
    head = NULL;
    tail = NULL;
    free(p);
  }
  else{
    p = head;
    p->n = p->next->n;
    q = p->next;
    p->next = q->next;
    free(q);
  }
}

int main(){
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  show();
  delhead();
  show();
}
