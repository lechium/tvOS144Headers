//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EvaluatorDownload : NSObject
{
    _Bool _automatic;	// 8 = 0x8
    _Bool _remaining;	// 9 = 0x9
    _Bool _update;	// 10 = 0xa
    unsigned long long _bytes;	// 16 = 0x10
    NSString *_logKey;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
}

+ (id)formatSize:(unsigned long long)arg1;	// IMP=0x00000001002aa0a4
- (void).cxx_destruct;	// IMP=0x00000001002aa194
@property(getter=isUpdate) _Bool update; // @synthesize update=_update;
@property(getter=isRemaining) _Bool remaining; // @synthesize remaining=_remaining;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property unsigned long long bytes; // @synthesize bytes=_bytes;
@property(getter=isAutomatic) _Bool automatic; // @synthesize automatic=_automatic;

@end

