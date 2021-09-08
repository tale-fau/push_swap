void    sa(char *a)                                                              
{                                                                                
        int     tmp;                                                             
                                                                                 
        tmp = a[0];                                                              
        a[0] = a[1];                                                             
        a[1] = tmp;
}

void    sb(char *b)                                                              
{                                                                                
        int     tmp;                                                             
                                                                                 
        tmp = b[0];                                                              
        b[0] = b[1];                                                             
        b[1] = tmp;
}

void	ss(char *a, char *b)
{
	sa(a);
	sb(b);
}
