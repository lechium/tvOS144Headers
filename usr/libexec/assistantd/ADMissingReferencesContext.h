//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSSet, NSString;

@interface ADMissingReferencesContext : NSObject
{
    NSMutableSet *_mutableResolvedIds;	// 8 = 0x8
    _Bool _hasBeenFulfilled;	// 16 = 0x10
    NSString *_requestId;	// 24 = 0x18
    NSArray *_missingReferences;	// 32 = 0x20
    CDUnknownBlockType _fulfillmentBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001001a5da8
@property(nonatomic) _Bool hasBeenFulfilled; // @synthesize hasBeenFulfilled=_hasBeenFulfilled;
@property(copy, nonatomic) CDUnknownBlockType fulfillmentBlock; // @synthesize fulfillmentBlock=_fulfillmentBlock;
@property(readonly, nonatomic) NSArray *missingReferences; // @synthesize missingReferences=_missingReferences;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSMutableSet *_mutableResolvedIds; // @synthesize _mutableResolvedIds;
@property(readonly, nonatomic) NSSet *resolvedReferences;
- (id)initWithMissingReferences:(id)arg1 forRequestId:(id)arg2;	// IMP=0x00000001001a5c78

@end

