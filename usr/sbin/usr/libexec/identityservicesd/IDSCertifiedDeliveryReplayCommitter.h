//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSCertifiedDeliveryReplayCommitter : NSObject
{
    NSMutableDictionary *_backingCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100076b40
@property(retain, nonatomic) NSMutableDictionary *backingCache; // @synthesize backingCache=_backingCache;
- (void)commitStateForKey:(id)arg1;	// IMP=0x0000000100076778
- (void)holdCommitBlock:(CDUnknownBlockType)arg1 andDecryptedData:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000100076374
- (id)decryptedDataForKey:(id)arg1;	// IMP=0x00000001000762bc
- (id)init;	// IMP=0x00000001000761e8

@end
