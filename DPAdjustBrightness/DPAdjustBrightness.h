//
//  DPAdjustBrightness.h
//  DPAdjustBrightness
//
//  Created by dp on 17/5/22.
//  Copyright © 2017年 dp. All rights reserved.
//


#import <UIKit/UIKit.h>
@interface DPAdjustBrightness : NSObject
/*
 @method
 @abstract 逐步设置亮度
 */
+ (void)graduallySetBrightness:(CGFloat)value;

/*
 @method
 @abstract 逐步恢复亮度
 */
+ (void)graduallyResumeBrightness;

@end
