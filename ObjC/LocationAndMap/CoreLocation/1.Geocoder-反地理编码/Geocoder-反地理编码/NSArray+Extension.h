//
//  NSArray+Extension.h
//  SRCategories
//
//  Created by 郭伟林 on 16/12/5.
//  Copyright © 2016年 SR. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Extension)

+ (BOOL)isAvailable:(NSArray *)aArray;

+ (instancetype)removeDuplicateElements:(NSArray *)sourceArray;

@end
