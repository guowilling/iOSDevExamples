//
//  NSObject+Swizzling.h
//  SRCategory
//
//  Created by 郭伟林 on 16/12/9.
//  Copyright © 2016年 SR. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (Swizzling)

+ (void)methodSwizzlingWithOriginalSelector:(SEL)originalSelector swizzledSelector:(SEL)swizzledSelector;

@end
