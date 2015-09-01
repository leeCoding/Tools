//
//  UILabelInsets.h
//  CTools
//
//  Created by 任晨培 on 15/4/28.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabelInsets : UILabel
@property(nonatomic) UIEdgeInsets insets;
@property (nonatomic) CGFloat fontSize;

-(id) initWithFrame:(CGRect)frame insets:(UIEdgeInsets)insets;
-(id) initWithInsets:(UIEdgeInsets)insets;

@end
