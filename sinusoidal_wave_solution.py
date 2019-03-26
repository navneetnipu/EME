import matplotlib.pyplot as plt
import numpy as np
A=int(input("enter the value of amplitide for the sinusoidal wave:"))
print("\n")
T=int(input("enter the time period for the wave in seconds:"))
print("\n")
l=int(input("enter the wave length for teh wave in meters:"))
print("\n")
x=int(input("enter the x cordinate range value:"))
print("\n")
t=int(input("enter the value for time in seconds:"))
print("\n")
#f(i,j)=A*np.sin(2*pi*(1/T)*i)*np.cos(2*pi*(1/T)*j)
f = lambda i,j: A*np.sin(2*np.pi*(1/T)*i)*np.cos(2*np.pi*(1/T)*j)
print("k=",end='\t')
for k in range(-t,t,1):
    print(k,end='\t')
print('\n')
for i in range(-x,x,1):
    print("i","=",i,end='\t')
    for j in range(-t,t,1):
        print("%0.3f" % f(i,j),end='\t')
    print("\n")
