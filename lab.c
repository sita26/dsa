    #include <stdio.h>
    #include <stdbool.h>
    #include <string.h>

    #define max 100

    struct stack
    {
        int TOS;
        int Data[max];
    };

    int isfull(struct stack *e)
    {
        return e->TOS == max - 1 ? 1 : 0;
    }

    int isempty(struct stack *e)
    {
        return e->TOS == -1 ? 1 : 0;
    }

    bool operator(char ch)
    {
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
            return true;
        else
            return false;
    }

    void push(struct stack *e, int element)
    {
        //printf("%d",element);
        e->TOS += 1;
        e->Data[e->TOS] = element;
    }

    int pop(struct stack *e)
    {
        int result = e->Data[e->TOS];
        e->TOS -= 1;
        
        return result;
    }

    int main()
    {
        int result, op1, op2;
        int a = 0;
        char in[100];
        char data[100];
        struct stack e = {-1};
        printf("Enter the operand: ");
        gets(data);

        for (int i = 0; i < strlen(data); i++)
        {
            if (data[i] != ' ')
            {
                in[a++] = data[i];
            }
        }
        in[a] = '\0'; 
        strcpy(data, in);
        
        for (int i = 0; i < strlen(data); i++)
        {
            if (operator(data[i]))
            {
                op1 = pop(&e);
                op2 = pop(&e);
                if (data[i] == '+')
                {
                    result = (op2 + op1);
                    
                }
                if (data[i] == '-')
                {
                    result = (op2 - op1);
                
                }
                if (data[i] == '*')
                {
                    result = (op2 * op1);
                    
                }
                if (data[i] == '/')
                {
                    result = (op2 / op1);
                }
            
                push(&e, result);
            }
            else
            {
                result=data[i]-'0';
                push(&e, result);
            }
        }
        printf("Postfix Result is: %d",pop(&e));
        return 0;
    }


