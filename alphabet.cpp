 //wap to check whether given alphabet is vowel or consonant using by switch    
	 
	 #include<stdio.h>
main()
{
	char alpha;
	printf("enter any alphabet");
	scanf("%c",&alpha);
	switch(alpha)
	{
			printf("vowel");
			break;
			case 'e':
			printf("vowel");
			break;
			case 'i':
			printf("vowel");
			break;
			case 'o':
			printf("vowel");
			break;
			case 'u':
			printf("vowel");
			break;
			default:
				printf("consonant");
	}
} 
