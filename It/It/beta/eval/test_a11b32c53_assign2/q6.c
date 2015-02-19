#include<stdio.h>



void main()

{

	int n;

	scanf("%d",&n);

	int i, status;

	char ch;

	for( i=0; i<n; i++ )

	{

		status = 0;

		scanf("%c",&ch);

		while( ch != '\n' )

		{

			if(status == 1)

			{

				if( ch == '"' )

					status = 0;

				else

					printf("%c",ch);

			}

			else if( ch == '"')

				status = 1;

			scanf("%c",&ch);

		}

		printf("\n");

	}

}
