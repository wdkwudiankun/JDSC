//
//  SCAppVersionTool.h
//  SCGoJD
//
//  Created by mac on 15/9/22.
//  Copyright (c) 2015年 mac. All rights reserved.
//  存取app版本信息

#import <Foundation/Foundation.h>

@interface SCAppVersionTool : NSObject
/**
 *  之前保存的版本
 *
 *  @return NSString类型的AppVersion
 */
+ (NSString *)savedAppVersion;
/**
 *  保存新版本
 */
+ (void)saveNewAppVersion:(NSString *)version;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com