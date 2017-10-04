// boo code sample 
import System.IO;
import Geosoft.GXNet from "geonet"
//initialize the geo object 
cwd = System.IO.Directory.GetCurrentDirectory()
grids = System.IO.Directory.GetFiles(cwd,"*.grd")
gxnet =Geosoft.GXNet.CGX_NET("Boo","v1",0,0,1)
p3 as int //Number of valid elements in grid 
p4 as int //Number of dummies in grid 
p5 as double //Minimum grid value 
p6 as double //Maximum grid value 
p7 as double //Grid mean 
p8 as double //Grid standard deviation 
for grid in grids:
   CIMU.GridStatExt(grid,Constant.IMU_STAT_FORCED_NO, p3,p4,p5,p6,p7,p8)
   print "${grid}\nNumber of elements=${p3}" 
  
gxnet.Dispose();
 
