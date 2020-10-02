#include <stdio.h>

struct stack {

    int s[];
    int top;

}st;

void push();

int main() {

    /*for(int i=0;i<6;i++) {

        push();

    }*/

    pop();

    return 0;
}

void push ()
{
	int num;
	if (st.top == (5 - 1))
	{
		printf ("Stack is Full\n");
		return;
	} else
	{
		printf ("Enter the element to be pushed\n");
		scanf ("%d", &num);
		st.top = st.top + 1;
		st.s[st.top] = num;
	}
	return;
}

int pop ()
{
	int num;
	if (st.top == - 1)
	{
		printf ("Stack is Empty\n");
		return (st.top);
	}
	else
	{
		num = st.s[st.top];
		printf ("poped element is = %d\n", st.s[st.top]);
		st.top = st.top - 1;
	}
	return (num);
}
