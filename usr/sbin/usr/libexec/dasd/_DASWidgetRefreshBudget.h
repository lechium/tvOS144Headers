//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_DASBudget.h"

@class NSString;

@interface _DASWidgetRefreshBudget : _DASBudget
{
    NSString *_widgetID;	// 8 = 0x8
}

+ (id)budgetWithName:(id)arg1 widgetID:(id)arg2 capacity:(double)arg3 balance:(double)arg4 allocationType:(unsigned char)arg5;	// IMP=0x0000000100013cac
- (void).cxx_destruct;	// IMP=0x0000000100014060
@property(retain, nonatomic) NSString *widgetID; // @synthesize widgetID=_widgetID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100013f84
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100013efc
- (id)dictionaryRepresentation;	// IMP=0x0000000100013e68
- (id)description;	// IMP=0x0000000100013d44
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100013c10
- (id)initWithName:(id)arg1 widgetID:(id)arg2 capacity:(double)arg3 balance:(double)arg4 allocationType:(unsigned char)arg5;	// IMP=0x0000000100013b50

@end
