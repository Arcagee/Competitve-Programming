void simpleSieve(int limit)
{
    bool mark[limit];
    for(int i = 0; i<limit; i++) {
      mark[i] = true;
    }
  
    for (int p=2; p*p<limit; p++)
    {
        // If p is not changed, then it is a prime
        if (mark[p] == true)
        {
            // Update all multiples of p
            for (int i=p*p; i<limit; i+=p)
                mark[i] = false;
        }
    }
}