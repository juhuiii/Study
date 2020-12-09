def sum(a,b):
    return a+b
def min(a,b):
    return a-b
def mul(a,b):
    return a*b
def div(a,b):
    return a/b

a=int(input("첫 번째 정수 : "))
b=int(input("두 번째 정수 : "))
print("("+str(a),"+",str(b)+") =",sum(a,b))
print("("+str(a),"-",str(b)+") =",min(a,b))
print("("+str(a),"*",str(b)+") =",mul(a,b))
print("("+str(a),"/",str(b)+") =",div(a,b))
