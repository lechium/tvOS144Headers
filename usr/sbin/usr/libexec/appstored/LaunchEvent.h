//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface LaunchEvent : SQLiteMemoryEntity <NSCopying>
{
    unsigned char _eventSource;	// 8 = 0x8
}

+ (Class)databaseEntityClass;	// IMP=0x0000000100100ad8
@property(nonatomic) unsigned char eventSource; // @synthesize eventSource=_eventSource;
- (id)_humanReadableType;	// IMP=0x0000000100100ae4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100100aa4
@property(copy) NSDate *timestamp;
@property(nonatomic, getter=isExtension) _Bool extension;
@property(copy) NSDate *startTime;
@property(copy) NSDate *endTime;
@property(copy) NSString *containingBundleID;
@property(copy) NSString *bundleID;
- (id)diagnosticDescription;	// IMP=0x00000001001006d8
- (id)description;	// IMP=0x0000000100100380
- (id)initWithSourceType:(unsigned char)arg1;	// IMP=0x00000001001002e8

@end

