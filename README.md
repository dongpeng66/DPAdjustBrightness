


## Useage

##直接把 DPAdjustBrightness文件中的文件拖到项目中,导入就可以用了
##example
##仿支付宝二维码界面的亮度变化
-(void)viewWillAppear:(BOOL)animated{
[super viewWillAppear:animated];
[DPAdjustBrightness graduallySetBrightness:0.8f];
}
-(void)viewDidDisappear:(BOOL)animated{
[super viewDidDisappear:animated];
[DPAdjustBrightness graduallyResumeBrightness];
}



