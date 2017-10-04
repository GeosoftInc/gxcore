// boo code sample 
import Geosoft.GXNet from "geonet"
//initialize the geo object 
gxnet =Geosoft.GXNet.CGX_NET("Boo","v1",0,0,1)

//create the vv's 
vv1 = CVV.CreateExt(Constant.GS_DOUBLE,10)
vv2 = CVV.CreateExt(Constant.GS_DOUBLE,10)
vv3 = CVV.CreateExt(Constant.GS_DOUBLE,10)


vv1.FillReal(1)
vv2.FillReal(2)
vv1.Add(vv2,vv3)
for i in range(0,vv3.iLength()):
  print " VV3(${i}) = " +vv3.rGetReal(i)

//delete all the created objects 
vv1.Dispose()
vv2.Dispose()
vv3.Dispose()
gxnet.Dispose() 
