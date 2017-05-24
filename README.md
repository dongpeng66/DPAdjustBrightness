


## Useage

##直接把 DPAdjustBrightness文件中的文件拖到项目中,导入就可以用了</br> 
##example</br> 
##仿支付宝二维码界面的亮度变化</br> 
-(void)viewWillAppear:(BOOL)animated{</br> 
[super viewWillAppear:animated];</br> 
[DPAdjustBrightness graduallySetBrightness:0.8f];</br> 
}</br> 
-(void)viewDidDisappear:(BOOL)animated{</br> 
[super viewDidDisappear:animated];</br> 
[DPAdjustBrightness graduallyResumeBrightness];</br> 
}</br> 



