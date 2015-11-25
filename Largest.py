def isfloat(value):
  try:
    float(value)
    return True
  except:
    return False
flag = 0
num = [0,0,0]
while(flag < 3):
    x=raw_input( "Enter Number " +str(flag+1)+ " : ")
    if(isfloat(x)):
        num[flag]=[float(x)]
        flag+=1
    else:
        print "Not a number\n"
print max(num)
print "Position : " + str(num.index(max(num)) + 1)

