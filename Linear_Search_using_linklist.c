#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void atEnd(int data) {

    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;

    if (head==NULL) {
        head = p;
    }
    else {
        struct node *t = head;

        while (t->next) {
            t = t->next;
        }

        t->next = p;
    }
}

void show() {

    struct node *t = head;
    while (t) {
        printf("%d\t", t->data);
        t = t->next;
    }
    printf("\n\n");
}

int linear_Search(int item) {

    struct node *t = head;
    int i =0;
    while (t) {
            i++;
        if (t->data == item) {
            return i;
        }
        t = t->next;
    }
    return -1;
}

int main() {


    int n, item;
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        int val;
        scanf("%d", &val);
        atEnd(val);
    }
    show();

    scanf("\n%d", &item);
    printf("Item found at index :%d", linear_Search(item));

    return 0;
}
