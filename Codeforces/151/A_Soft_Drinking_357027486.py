a,b,c,d,e,f,g,h=map(int,input().split())
drink=b*c//g
toasts=d*e
salt=f//h
print(min(drink,toasts,salt)//a)