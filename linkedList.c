#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node * next;
};

struct node * head = NULL;
struct node * tail = NULL;
struct node * dummyHead = NULL;
struct node * dummyTail = NULL;

void append(int);             // function to appned an element in the list
void show();                  // function to display the list
void push(int);               // function to add an element at the head
int pop();                    // function to remove the head node 
int countNodes();             // function to count the number of nodes in the list
int getNth();                 // function to return the element at nth index(strarting at 0)
void deleteList();            // function to delete the entire list
int insertNth(int, int);      // function to insert an element at the given index
void insertSort();            // function to sort the list using sortedInsert() implementation
void frontBackSplit();        // function to split the list into equal lists 
void removeDuplicate();       // function to remove duplicate elements in the list
void reverse();               // function to reverse the Linked List
void alternatingSplit();      // function to alternatingly split the list
void makeDummyList();         // function to create a dummyHead list
void shuffleMerge();          // function to shuffle merge two lists

int main(){
  int c, n, r;
  do {
    printf("0.  Show\n");
    printf("1.  Append\n");
    printf("2.  Push\n");
    printf("3.  pop\n");
    printf("4.  Count Nodes\n");
    printf("5.  Get nth element\n");
    printf("6.  Delete List\n");
    printf("7.  Insert at nth index\n");
    printf("8.  InsertSort the List\n");
    printf("9.  FrontBackSplit\n");
    printf("10. Remove Duplicates\n");
    printf("11. Reverse the List\n");
    printf("12. Alternating Split\n");
    printf("13. Make a Dummy List\n");
    printf("14. Shuffle Merge\n");
    printf("15. EXIT\n");
    printf("Your Choice : ");
    scanf("%d", &c);
    switch(c){
      case 0 : show();
               break;
      case 1 : printf("Enter a number : ");
               scanf("%d", &n);
               append(n);
               break;
      case 2 : printf("Enter a number : ");
               scanf("%d", &n);
               push(n);
               break;         
      case 3 : if((r = pop()) > 0)
                 printf("%d\n", r);
               else
                 printf("List Empty\n");  
               break;
      case 4 : printf("%d\n", countNodes());
               break;
      case 5 : printf("Enter the index : ");
               scanf("%d", &n);
               ((r = getNth(n)) >= 0) ? printf("%d\n", r) : printf("Index out of Range\n");
               break;
      case 6 : deleteList();
               break;
      case 7 : printf("Enter the index and the number : ");
               scanf("%d%d", &r, &n);
               if(insertNth(r, n) < 0)
                 printf("Index out of Range. Aborting...");
               break;
      case 8 : insertSort();
               break;
      case 9 : frontBackSplit();
               break;
      case 10: removeDuplicate();
               break;
      case 11: reverse();
               break;
      case 12: alternatingSplit();
               break;    
      case 13: makeDummyList();
               break; 
      case 14: shuffleMerge();
               break;                                                                                           
      case 15: exit(0);         
      default: printf("wrong Choice\n");
               exit(0);                  
    }
  }while(c >= 0 && c <= 14);
}

void append(int n){
  struct node * temp = (struct node *)malloc(sizeof(struct node));
  temp->data = n;
  temp->next = NULL;
  if(head == NULL){
    head = temp;
    tail = temp;
  }
  else{
    tail->next = temp;
    tail = temp;
  }
}

void show(){
  if(head == NULL){
    printf("List : Empty\n");
    return;
  }
  else{
    printf("List : ");
    struct node * temp = head;
    while(temp != NULL){
      printf("%d ", temp->data);
      temp = temp->next;
    }
    printf("\n");
  }
}

void push(int n){
  struct node * temp = (struct node *)malloc(sizeof(struct node));
  temp->data = n;
  if(head == NULL){
    temp->next = NULL;
    head = temp;
    tail = temp;
  }
  else{
    temp->next = head;
    head = temp;
  }
}

int pop(){
  if(head == NULL)
    return -1;
  else{
    int d;
    struct node * temp = head;
    head = head->next;
    d = temp->data;
    free(temp);
    return d;
  }
}

int countNodes(){
  int count = 0;
  struct node * temp = head;
  while(temp != NULL){
    count++;
    temp = temp->next;
  }
  return count;
} 

int getNth(int n){
  int c = countNodes();
  if(c < 1 || n >= c)
    return -1;
  else{
    int i;
    struct node * temp = head;
    for(i = 0; i < n; i++)
      temp = temp->next;
    return temp->data;
  }
}    

void deleteList(){
  if(head == NULL)
    return;
  else{
    struct node * temp = head, *ptr;
    while(temp != NULL){
      ptr = temp;
      temp = temp->next;
      free(ptr);
    }
    head = NULL;
    tail = NULL;
  }
}

int insertNth(int index, int num){
  int i;
  struct node * temp = head, *ptr = NULL;
  if(temp == NULL){
    push(num);
    return 0;
  }
  for(i = 0; i < index && temp != NULL; i++){
    if(i == 0)
      ptr = head;
    else
      ptr = ptr->next;  
    temp = temp->next;
  }
  if(temp != NULL){
    struct node * p = (struct node *)malloc(sizeof(struct node));
    p->data = num;
    if(ptr == NULL){
      p->next = temp;
      head = p;
    }
    else{
      p->next = temp;
      ptr->next = p;
    }
    return 0;
  }
  else
    return -1;
}

void insertSort(){
  struct node * temp = head, *p, *q;
  if(temp == NULL){
    printf("List Empty\n");
    return;
  }
  // Below is sortedInsert implemented
  int count = 0;
  p = (struct node *)malloc(sizeof(struct node));
  p->data = temp->data;
  p->next = NULL;
  q = temp;
  temp = temp->next;
  head = p;
  tail = p;
  free(q);
  while(temp != NULL){
    q = temp;
    if(temp->data < p->data){
      push(temp->data);
      p = head;
    }
    else if(temp->data > tail->data)
      append(temp->data); 
    else{
      while(p->data < temp->data){
        count += 1;
        p = p->next;
      }
      insertNth(count, temp->data);
      p = head;
      count = 0;
    }
    temp = temp->next;
    free(q);
  }
}

void frontBackSplit(){
  if(head == NULL){
    printf("List Empty\n");
    return;
  }
  struct node *f, *s;
  f = head;
  s = head->next;
  while(s != NULL && s->next != NULL){
    f = f->next;
    if(s->next != NULL)
      s = s->next->next;
  }
  s = f->next;
  printf("List 1 : ");
  f = head;
  while(f != s){
    printf("%d ", f->data);
    f = f->next;
  }
  printf("\n");
  printf("List 2 : ");
  while(s != NULL){
    printf("%d ", s->data);
    s = s->next;
  }
  printf("\n");
}

void removeDuplicate(){
  insertSort();
  struct node * temp = head, *p;
  if(temp == NULL)
    return;
  while(temp->next != NULL){
    p = temp->next;
    if(p != NULL && temp->data == p->data){
      temp->next = p->next;
      free(p);
    }
    else
      temp = temp->next;
  }
  tail = temp;
}

void reverse(){
  if(head == NULL && head->next == NULL)
    return;
  struct node *current = head, *previous = NULL, *next;
  while(current != NULL){
    next = current->next;
    current->next = previous;
    previous = current;
    current = next;
  }
  head = previous;
} 

void alternatingSplit(){
  if(head == NULL)
    return;
  if(head->next == NULL){
    printf("List 1 : %d\n", head->data);
    printf("List 2 : Empty\n");
    return;
  }
  struct node * first = head;
  struct node * second = head->next;
  printf("List 1 : ");
  while(first != NULL){
    printf("%d ", first->data);
    if(first->next != NULL)
      first = first->next->next;
    else
      first = NULL;    
  }
  printf("\n");
  printf("List 2 : ");
  while(second != NULL){
    printf("%d ", second->data);
    if(second->next != NULL)
      second = second->next->next;
    else
      second = NULL;  
  }
  printf("\n");
}

void makeDummyList(){
  struct node * temp = (struct node *)malloc(sizeof(struct node));
  temp->data = 10;
  temp->next = NULL;
  if(dummyHead == NULL)
    dummyHead = temp;
  dummyTail = temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->data = 20;
  temp->next = NULL;
  dummyTail->next = temp;
  dummyTail = temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->data = 30;
  temp->next = NULL;
  dummyTail->next = temp;
  dummyTail = temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->data = 40;
  temp->next = NULL;
  dummyTail->next = temp;
  dummyTail = temp;
  temp = (struct node *)malloc(sizeof(struct node));
  temp->data = 50;
  temp->next = NULL;
  dummyTail->next = temp;
  dummyTail = temp;
  printf("Dummy List : ");
  temp = dummyHead;
  while(temp != NULL){
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

void shuffleMerge(){
  makeDummyList();
  show();
  struct node *m, *n;
  struct node *p = head;
  struct node *q = dummyHead;
  if(p == NULL){
    printf("New List : ");
    makeDummyList();
    return;
  }
  if(q == NULL){
    printf("New List : ");
    show();
    return;
  }
  m = p;
  n = q;
  int decide = countNodes();
  while(q != NULL && p != NULL){
    if(m != NULL)
      m = p->next;
    if(n != NULL)  
      n = q->next;
    p->next = q;
    if(n != NULL)
      n->next = m;
    p = m;
    q = n;
    if(m != NULL)
      m = p->next;
    if(n != NULL)
      n = q->next;  
    if(m != NULL)   
      m->next = n;
    p = m;
    q = n;  
  }
  if(decide > 5)
    tail = p;
  else{
    while(q->next != NULL)
      q = q->next;
    tail = q;
  }
}   
