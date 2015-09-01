//
//  NSString+Additions.h
//  CTools
//
//  Created by Chance on 15/3/2.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (Additions)

#pragma mark - 字符串计算
- (CGFloat)heightWithScopeSize:(CGSize)size font:(UIFont *)font;
- (CGSize)sizeWithScopeSize:(CGSize)size font:(UIFont *)font;
- (CGSize)sizeWithScopeSize:(CGSize)size fontSize:(CGFloat)fontSize;

#pragma mark 字符串处理
// 清除空格字符
- (NSString *)trim;
// 为空则返回空字符串
- (NSString *)check;
// 取子字符串
- (NSString *)substringFromIndex:(NSUInteger)index length:(NSUInteger)length;
// 过滤html特殊字符
- (NSString *)ignoreHTMLSpecialString;
// 字符串MD5值
- (NSString *)MD5;

#pragma mark 字符串转换
// int转换字符串
NSString *parseInt(int value);
NSString *parseInteger(NSInteger value);
NSString *parseUchar(const unsigned char *cString);

/**
 *  字符串关键字变色
 *  @param str   关键字
 *  @param color 颜色
 */
- (NSAttributedString *)attributeStrWithStr:(NSString *)str color:(UIColor *)color;

#pragma mark 字符串检查
/// 判断是否为真实手机号码
- (BOOL)isPhoneNumber;

/// 判断email格式是否正确
- (BOOL)isEmail;
@end
