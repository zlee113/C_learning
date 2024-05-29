 #include <stdio.h>
 /* count lines in input */
 int main()
 {
 	int c, nl, nt, bl;
 	nl = 0;
	nt = 0;
	bl = 0;
 	while ((c = getchar()) != EOF){
 		if (c == '\n')
 		++nl;
 	
		else if (c == '\t')
		++nt;

		else if (c == ' ')
		++bl;
	}

 	printf("%d\n", nl);
        printf("%d\n", nt);
        printf("%d\n", bl);
	
	return 0;
 }

