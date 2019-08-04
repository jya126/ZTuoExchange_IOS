//
//  FSBaselineTableViewCell.h
//  FSScrollViewNestTableViewDemo
//
//  Created by huim on 2017/5/23.
//  Copyright © 2017年 fengshun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FSBaselineTableViewCell : UITableViewCell
@property (nonatomic,copy)void (^BusinessBlock)(void);

@end
