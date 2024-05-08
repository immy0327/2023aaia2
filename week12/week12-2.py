#week12-2.py 列出 n以下的全部質數
n = int(input(''))
def isPrime(n):
  for i in range(2,n):  #只能1和n本身整除
    if n%i==0:
      return False
  return True  #如果都沒有失敗，就是失敗

for i in range(2,n+1):
  if isPrime(i): print(i, end=' ')