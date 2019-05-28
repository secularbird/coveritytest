
int main()
{
    int *c=0;
    *c=3; //invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
    return 0;
}
