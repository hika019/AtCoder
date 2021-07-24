# -*- coding: utf-8 -*-

s = input()

        
ans = 0

if not(all(x in s for x in ("c", "h", "o", "k", "u", "d", "a", "i"))):
    ans = 0
    
else:
    
    
    
    
    
    dic = {}

    for i in range(len(s)):
    
        if s[i] in dic:
            tmp = dic[s[i]]
        else:
            tmp = []
        tmp.append(i)
        dic[s[i]] = tmp
    
    
    clist = dic['c']
    for i in range(len(clist)):

        hlist = dic['h']
        for j in range(len(hlist)):
            
            olist = dic['o']
            for k in range(len(olist)):
                
                klist = dic['k']
                for l in range(len(klist)):
                    
                    ulist = dic['u']
                    for m in range(len(ulist)):
                        
                        dlist = dic['d']
                        for n in range(len(dlist)):
                            
                            alist = dic['a']
                            for o in range(len(alist)):
                            
                                ilist = dic['i']
                                for p in range(len(ilist)):

                                    if clist[i] < hlist[j] < olist[k] < klist[l] < ulist[m]< dlist[n]<alist[o] <ilist[p]:
                                        ans +=1
                                    #print("{} {} {} {} {} {} {} {}".format(i, j, k, l , m, n, o, p))
print(ans)