//
//  NSObject+Additions.h
//  CTools
//
//  Created by Chance on 15/7/29.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Additions)

// 用来存放数据(传值)
@property (nonatomic, strong) id object;

// 用来存放数据(传值)
@property (nonatomic, strong) id values;

- (NSString *)toString;
@end
