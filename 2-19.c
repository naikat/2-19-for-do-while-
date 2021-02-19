
 for 循环
 1 不可再for循环体内修改循环变量,防止for循环失去控制。
 2 建议for语句的循环控制变量的取值采用“前闭后开区间”写法。



#include<stdio.h>

int main()
{
	int i = 0;
	//   初始化  判断   调整
	for (i = 0; i < 10; i++)// for(; ; )  判断条件省略 ： 恒为正
 	{
		//if (i == 5)
			//break; 1234
			//continue; 12346789
		printf("%d\n", i);
		

	}
	return 0;

}



#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int j = 0;
		for (j = 0; j < 10; j++)
		{
			printf("666\n");
		}
	}
	return 0;

   //100个 666   因为 第一个 for中有 10次 每次含有第二for 10次  10*10=100	
}


省略 i=0 j =0


#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		
		for (; j < 10; j++)
		{
			printf("666\n");
		}
	}
	return 0;

	//100个 666  变成10个 因为先执行第二个for 十次后 j变成10  10小于10 不再执行第一个for	
}




#include<stdio.h>


int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("666\n");

	}
	return 0;
}





#include<stdio.h>

int main()
{
	int i = 1;

	do
	{
		if (i == 5)
			//break;
			//continue;
		printf("%d", i);
		i++;

	} while (i <= 10);

	return 0;
}


计算 n 的乘阶  n*(n-1)*（n-2）*(n-3)````


#include<stdio.h>

int main()
{
	int i = 1;
	int n = 0;
	int e = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		e = e * i;
		
	}
	printf("%d", e);
	return 0;

}




#include<stdio.h>

int main()
{
	int i = 1;
	int n = 0;
	int e = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		e = 1;
		for (i = 1; i <= n; i++)
		{
			e = e * i;

		}
		sum = sum + e;

		printf("sum=%d", sum);
		// 得出 15
		// e = 1*1 =1
		// e = 1*1*2=2
		// e = 2*1*2*3=12
	}
	
	return 0;

}


int main()
{
	int i = 0;
	int j = 1;
	int n = 0;
	int sum = 0;
	for (i = 1; i <= 3; i++)
	{
		j = j * i;
		sum = sum + j;
	}
	printf("sum=%d", sum);
	return 0;

}