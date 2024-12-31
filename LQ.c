#include<stdio.h>
#define MAX 5
struct LinearQueue
{
    int front;
    int rear;
    int data[MAX];
};
typedef struct LinearQueue LQ;

void enqueue(LQ *Q, int element)
{
    if(Q->rear == (MAX - 1))
    printf("Queue is Full\n");
    else
    {
        Q->rear += 1;
        Q->data[Q->rear] = element;
        printf("%d was Enqueue\n", element);
    }
}
int dequeue(LQ *Q)
{
    if(Q->rear < Q->front)
    printf("Queue is Empty\n");
    else
    {
        int element = Q->data[Q->front];
        Q->front = 1;
        return element;
    }  
}

int main()
{
    int choice, element;
    LQ Q = {0, -1};
    do
    {
        printf("1.ENQUEUED\n2.DEQUEUED\n3.EXIT\n");
        printf("Choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Element to be Enqueued?\n");
            scanf("%d",&element);
            enqueue(&Q, element);
            break;
            case 2:
            element = dequeue(&Q);
            if(element != -1)
            printf("%d was Dequeued\n", element);
            break;
            case 3:
            printf("GOOD\n");
            break;
        
            default:
            printf("Enter 1, 2 or 3 \n");
            break;
        }
    } while (choice != 3);
    return 0;
    
}

