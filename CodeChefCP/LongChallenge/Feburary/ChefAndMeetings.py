def timeconvert(str1):
    if str1[-2:] == "AM" and str1[:2] == "12":
        return "00" + str1[2:-2]
    elif str1[-2:] == "AM":
        return str1[:-2]
    elif str1[-2:] == "PM" and str1[:2] == "12":
        return str1[:-2]
    else:
        return str(int(str1[:2]) + 12) + str1[2:8]

for _ in range(int(input())):
    p = input()
    p = timeconvert(p)
    p = int(p[0:2]+""+p[3:5])
    n = int(input())
    result = ''
    for i in range(n):
        frnds = list(map(str, input().split()))
        l= timeconvert(frnds[0]+" "+frnds[1])
        l = int(l[0:2]+""+l[3:5])

        r = timeconvert(frnds[2]+" "+frnds[3])
        r = int(r[0:2]+""+r[3:5])

        if(l<=p and p<=r):
            result+='1'
        else:
            result+='0'
    print(result)
        
