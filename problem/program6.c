int isPrime(int n){
for (int i = 2; i * i < 10000; i++) 
//n ka jo bhi value hoga 10000 bar chalega he
{
if (n % i == 0)
return 0;
}
return 1;
}
isPrime();
//O(1)