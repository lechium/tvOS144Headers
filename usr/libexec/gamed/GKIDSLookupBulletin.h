//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKBulletin.h"

@class NSString;

@interface GKIDSLookupBulletin : GKBulletin
{
    NSString *_aggregateDictionaryKey;	// 16 = 0x10
    NSString *_senderID;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property(readonly) NSString *aggregateDictionaryKey; // @synthesize aggregateDictionaryKey=_aggregateDictionaryKey;
- (void)dealloc;	// IMP=0x00000001000db5e8
- (id)initWithPushNotification:(id)arg1;	// IMP=0x00000001000db450

@end

