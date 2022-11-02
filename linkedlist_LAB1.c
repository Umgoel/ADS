//n students, name, marks*3, total list, sort (total marks), new linked list with Fs

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct list{
    char *name;
    int sub1, sub2, sub3, t_marks;
    struct list *next;
};

struct list *head = NULL;

struct list *create(char *n, int s1, int s2, int s3, int t_m){
    struct list *temp;
    temp = (struct list*)malloc(sizeof(struct list));
    temp->name = n;
    temp->sub1 = s1;
    temp->sub2 = s2;
    temp->sub3 = s3;
    temp->t_marks = t_m;
    return temp;
}
void ins(){
    char *name;
    int s1, s2, s3, t_m;
    printf("\nEnter name : ");
    scanf("%s",&name);
  //  getchar();
  //  getchar();
    printf("\nEnter marks 1 2 3 : ");
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);
    t_m = s1+s2+s3;
    struct list *key = create(name, s1, s2, s3, t_m);
    key->next = head;
    head = key;
}
void display(){
    struct list* ptr;
    if(head==NULL)
        printf("\nList Empty");
    else{
        ptr = head;
        printf("\nDeets : ");
        while(ptr!=NULL){
            printf("\nName : %ch",ptr->name);
            printf("\nSub1 : %d",ptr->sub1);
            printf("\nSub2 : %d",ptr->sub2);
            printf("\nSub3 : %d",ptr->sub3);
            printf("\nT_M : %d",ptr->t_marks);
            ptr=ptr->next;
        }
    }
}
int main(){
    display();
    ins();
    display();
}
