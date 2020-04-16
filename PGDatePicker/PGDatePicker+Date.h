//
//  PGDatePicker+Date.h
//
//  Created by piggybear on 2018/3/18.
//  Copyright © 2018年 piggybear. All rights reserved.
//

#import "PGDatePicker.h"

@interface PGDatePicker (Date)
- (void)date_setupSelectedDate;
- (void)date2_setupSelectedDate;
- (void)date_setDateWithComponents:(NSDateComponents *)components animated:(BOOL)animated;
- (void)date2_setDateWithComponents:(NSDateComponents *)components animated:(BOOL)animated;
- (void)date_didSelectWithComponent:(NSInteger)component;
- (void)date2_didSelectWithComponent:(NSInteger)component;
@end
