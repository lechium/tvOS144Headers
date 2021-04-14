//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCMemUsageStatInfo, NSMutableDictionary, NSString;

@interface ACCMemUsageStat : NSObject
{
    NSString *_name;	// 8 = 0x8
    ACCMemUsageStatInfo *_statInfo;	// 16 = 0x10
    NSMutableDictionary *_markList;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000d9f90
@property(readonly, nonatomic) NSMutableDictionary *markList; // @synthesize markList=_markList;
@property(readonly, nonatomic) ACCMemUsageStatInfo *statInfo; // @synthesize statInfo=_statInfo;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (double)timeIntervalSinceMark:(id)arg1;	// IMP=0x00000001000d9eb8
- (double)timeIntervalSinceLastUpdate;	// IMP=0x00000001000d9ea8
- (double)timeIntervalSinceStart;	// IMP=0x00000001000d9e98
- (void)removeMark:(id)arg1;	// IMP=0x00000001000d9e88
- (id)getMark:(id)arg1;	// IMP=0x00000001000d9e78
- (void)mark:(id)arg1;	// IMP=0x00000001000d9d94
- (_Bool)update;	// IMP=0x00000001000d9c34
- (id)description;	// IMP=0x00000001000d9bc0
- (id)initWithName:(id)arg1;	// IMP=0x00000001000d9aec
- (id)init;	// IMP=0x00000001000d9adc

@end
