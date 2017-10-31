struct employee
{
    int id;
    char name[10];
    int salary;
}*emp1;


typedef struct student
{
    int rollno;
    char name[15];
    char add[20];
}s;

void sort(student ss[]);
void read(student ss[]);
void display(student ss[]);
int i, j, n;

void main()
{
    s s1[5];
    printf("How many records:");
    scanf("%d", &n);
    read(s1);
    display(s1);
    sort(s1);
    getch();
}

void read(student ss[])
{
    for(i = 0; i < n; i++)
      scanf("%d%s%s", &ss[i].rollno, ss[i].name, ss[i].add);
}

void display(student ss[])
{
    for(i = 0; i < n; i++)
    {
      printf("Roll No. = %d\tName = %s\nAddress = %s", ss[i].rollno, ss[i].name, ss[i].add);
      printf("\n");
    }
}

void sort(student ss[])
{
    s temp;
    for(i = 0; i < n - 1; i++)
    {
      for(j = 0; j < n-1-i; j++)
      {
        if(ss[j].rollno > ss[j+1].rollno)
        {
          temp = ss[j];
          ss[j] = ss[j+1];
          ss[j+1] = temp;
        }
      }
    }
    display(ss);
}