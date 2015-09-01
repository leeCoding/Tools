//
//  UIImage+Additions.h
//  CTools
//
//  Created by Chance on 15/8/28.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Additions)
- (UIImage*)imageScaleToSize:(CGSize)size;
- (UIImage*)imageScaleWithRatio:(CGFloat)ratio;
@end
