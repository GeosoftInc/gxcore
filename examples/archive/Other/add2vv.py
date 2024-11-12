#  Copyright (c) 2024 Bentley Systems, Incorporated. All rights reserved.
import clr
clr.AddReference("geonet")
from Geosoft.GXNet import *
print "Creating Geosoft object"

cgx_net = CGX_NET("IronPython","YEah",0,0,1)

print "vv "
#create the vv's 
vv1 = CVV.CreateExt(Constant.GS_FLOAT,10)
vv2 = CVV.CreateExt(Constant.GS_FLOAT,10)
vv3 = CVV.CreateExt(Constant.GS_FLOAT,10)
#fill the vv's and add them
vv1.FillReal(1)
vv2.FillReal(2)
vv1.Add(vv2,vv3)

for i in range(0,vv3.iLength()):
  print vv3.rGetReal(i)

#free the handles 
vv1.Dispose()
vv2.Dispose()
vv3.Dispose();
cgx_net.Dispose();

print "All Done"

