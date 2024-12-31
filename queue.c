#include<stdio.h>
#define max 50

struct linear
{ 
    int front;
    int rear;
    int arr[max];
};
void enqueue(struct linear *s, int val)
{
    if (s->rear==max-1){
        printf("Queue is full.",val);
    }
    else
    {
        s->rear++;
        s->arr[s->rear]=val;
    }
}

    
    int dequeue(struct linear *s)
    {
    int element;
    if (s->rear<s->front)
    {
        printf("Queue is empty." );
    }
    else {
        element = s->arr[s->front];
        s->front++;
        return element;
}
    }
    
     void display(struct linear *s)
    {
    if (s->front > s->rear) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");
        for (int i = s->front; i <= s->rear; i++) {
        printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}

    
int main(){
    struct linear queue={-1,-1};
    enqueue(&queue,1);
    enqueue(&queue,2);
    enqueue(&queue,3);

display(&queue);

return 0;
}