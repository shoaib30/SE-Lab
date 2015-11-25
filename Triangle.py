a = input("Enter First side : ")
b = input("Enter Second side : ")
c = input("Enter Third Side : ")

if((a+b) < c or (b+c) < a or (c+a) < b):
    print "Not a triangle"
else:
    if(a == b or b == c or c == a):
        if(a == b and b == c):
            print "Equilateral"
        else:
            print "Isosceles"
    else:
        print "Scalene"
