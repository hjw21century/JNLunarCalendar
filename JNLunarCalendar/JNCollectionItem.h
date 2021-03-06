//
//  JNCollectionItem.h
//  JNLunarCalendar
//
//  Created by NetEase on 2017/1/12.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface JNCollectionItem : NSCollectionViewItem
@property (strong) NSColor *selectColor;

- (void)setHolidayTagColor:(NSColor *)color;
- (void)reloadDataWithObject:(id)representedObject;

@end
