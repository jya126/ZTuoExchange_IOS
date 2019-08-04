//
//  ChatModel.m
//  digitalCurrency
//
//  Created by iDog on 2018/3/7.
//  Copyright © 2018年 XinHuoKeJi. All rights reserved.
//

#import "ChatModel.h"

@implementation ChatModel
+ (NSDictionary *)mj_replacedKeyFromPropertyName {
    return @{@"avatar" : @"fromAvatar",
             };
}
@end
