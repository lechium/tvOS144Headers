//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface APSTTLCollectionItemInfo : NSObject <NSCopying>
{
    unsigned int _itemState;	// 8 = 0x8
    NSDate *_evictionDate;	// 16 = 0x10
    NSString *_topic;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100017a78
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) unsigned int itemState; // @synthesize itemState=_itemState;
@property(retain, nonatomic) NSDate *evictionDate; // @synthesize evictionDate=_evictionDate;
- (id)description;	// IMP=0x00000001000179ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000179e8
- (id)initWithTTLInSeconds:(double)arg1 state:(unsigned int)arg2 withTopic:(id)arg3;	// IMP=0x0000000100017930
- (id)initWithTTLInSeconds:(double)arg1 state:(unsigned int)arg2;	// IMP=0x0000000100017920

@end

