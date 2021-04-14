//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, NSUUID;

@interface W5LogItemRequestInternal : NSObject <NSCopying>
{
    _Bool _includeEvents;	// 8 = 0x8
    unsigned int _uid;	// 12 = 0xc
    unsigned int _gid;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    NSArray *_itemRequests;	// 32 = 0x20
    NSDictionary *_configuration;	// 40 = 0x28
    NSString *_filename;	// 48 = 0x30
    NSURL *_additionalLog;	// 56 = 0x38
    CDUnknownBlockType _reply;	// 64 = 0x40
}

@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(nonatomic) _Bool includeEvents; // @synthesize includeEvents=_includeEvents;
@property(nonatomic) unsigned int gid; // @synthesize gid=_gid;
@property(nonatomic) unsigned int uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSURL *additionalLog; // @synthesize additionalLog=_additionalLog;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSArray *itemRequests; // @synthesize itemRequests=_itemRequests;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000392fc
- (unsigned long long)hash;	// IMP=0x00000001000392ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100039284
- (_Bool)isEqualToLogItemRequestInternal:(id)arg1;	// IMP=0x0000000100039248
- (id)description;	// IMP=0x0000000100039008
- (void)dealloc;	// IMP=0x0000000100038f98

@end

