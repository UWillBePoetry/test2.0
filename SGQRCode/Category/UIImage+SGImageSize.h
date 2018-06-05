
#import <UIKit/UIKit.h>

@interface UIImage (SGImageSize)
/** 返回一张不超过屏幕尺寸的 image */
+ (UIImage *)SG_imageSizeWithScreenImage:(UIImage *)image;

@end
