#include <bits/stdc++.h>
using namespace std;
#define n 100

class twoStacks
{
   int *arr;
   int size;
   int top1, top2;

public:
   twoStacks()
   {
      size = n;
      arr = new int[n];
      top1 = -1;
      top2 = n;
   }

   void push1(int x)
   {
      if (top2 - 1 == top1)
      {
         cout << "Stack Overflow"
              << " By element : " << x << endl;
         return;
      }
      else
      {
         top1++;
         arr[top1] = x;
      }
   }

   void push2(int x)
   {
      if (top2 - 1 == top1)
      {
         cout << "Stack Overflow"
              << " By element : " << x << endl;
         return;
      }
      else
      {
         top2--;
         arr[top2] = x;
      }
   }

   int pop1()
   {
      if (top1 == -1)
      {
         cout << "Stack UnderFlow" << endl;
         exit(1);
      }
      else
      {
         int x = arr[top1];
         top1--;
         return x;
      }
   }

   int pop2()
   {
      if (top2 == n)
      {
         cout << "Stack UnderFlow" << endl;
         exit(1);
      }
      else
      {
         int x = arr[top2];
         top2++;
         return x;
      }
   }
};

int main()
{
   twoStacks ts;
   ts.push1(5);
   ts.push2(10);
   ts.push2(15);
   ts.push1(11);
   ts.push2(7);
   cout << "Popped element from stack1 is "
        << ": " << ts.pop1() << endl;
   ts.push2(40);
   cout << "Popped element from stack2 is "
        << ": " << ts.pop2() << endl;
   ts.pop1();
   ts.pop1();
   return 0;
}