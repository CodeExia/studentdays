#include <stdio.h>

int main()
{
    partition(a, lb, ub)
{pivot =a[lb]
start = lb;
end = ub;
while(a[start] <= pivot)
{start++;
}
while(a[end] > pivot)
{
end- -;
}
if(start < end)
{
swap(a[start], a[end]);
}
while(start < end)
{ while(a[start] <= pivot)
{ start++;
}
while(a[end] > pivot)
{
end- -;
}
if(start < end)
{
swap(a[start], a[end]);
}
}
swap(a[lb],a[end])
{ return end;
}
quicksort(a,lb,ub)
{
If(lb < ub)
{
loc = partition(a, lb, ub);
Quicksort(a, lb, loc -1);
Quicksort(a, loc + 1, ub);
}
{
}