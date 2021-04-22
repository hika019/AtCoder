# -*- coding: utf-8 -*-
x, y, z = (int(x) for x in input().split())


takahasi_tanka = y/x


tmp = takahasi_tanka*z

if int(tmp)/z < takahasi_tanka:
    print(int(tmp))
else:
    print(int(tmp)-1)
