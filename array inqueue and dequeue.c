//A program to insert an element into a queue (Enqueue) and  delete an element from a queue (Dequeu).
#include<stdio.h>
int main()
{
    int n, choice, value;
    int front = -1, rear = -1, count = 0;

    printf("Enter queue size: ");
    scanf("%d", &n);

    int a[n];

    while(1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n0.Exit\n");
        scanf("%d", &choice);

        //  Enqueue
        if(choice == 1)
        {
            if(count == n)
            {
                printf("Queue Overflow\n");
            }
            else
            {
                printf("Enter value: ");
                scanf("%d", &value);

                if(rear == -1) // first element
                {
                    front = rear = 0;
                }
                else if(rear == n - 1) // circular condition
                {
                    rear = 0;
                }
                else
                {
                    rear++;
                }

                a[rear] = value;
                count++;

                printf("Inserted successfully\n");
            }
        }

        //  Dequeue
        else if(choice == 2)
        {
            if(count == 0)
            {
                printf("Queue Underflow\n");
            }
            else
            {
                printf("Deleted: %d\n", a[front]);
                count--;

                if(count == 0) // queue empty
                {
                    front = rear = -1;
                }
                else if(front == n - 1) // circular move
                {
                    front = 0;
                }
                else
                {
                    front++;
                }
            }
        }

        //  Display (important improvement)
        else if(choice == 3)
        {
            if(count == 0)
            {
                printf("Queue is empty\n");
            }
            else
            {
                int i, temp = front;

                printf("Queue: ");
                for(i = 0; i < count; i++)
                {
                    printf("%d ", a[temp]);

                    if(temp == n - 1)
                        temp = 0;
                    else
                        temp++;
                }
                printf("\n");
            }
        }

        //  Exit
        else if(choice == 0)
        {
            break;
        }

        else
        {
            printf("Invalid choice\n");
        }
    }
}
