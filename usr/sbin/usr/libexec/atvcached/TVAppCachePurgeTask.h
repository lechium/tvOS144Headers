//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVCacheDeletePurging-Protocol.h"

@class NSString, TVAggregateAppCachePurgeRequest;
@protocol TVAppCachePurgeTaskDelegate;

@interface TVAppCachePurgeTask : NSObject <TVCacheDeletePurging>
{
    TVAggregateAppCachePurgeRequest *_purgeRequest;	// 8 = 0x8
    id <TVAppCachePurgeTaskDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100005004
@property(nonatomic) __weak id <TVAppCachePurgeTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TVAggregateAppCachePurgeRequest *purgeRequest; // @synthesize purgeRequest=_purgeRequest;
- (long long)purgeAmount:(long long)arg1 withUrgency:(long long)arg2;	// IMP=0x0000000100004d94
- (long long)purgeableAmountWithUrgency:(long long)arg1;	// IMP=0x0000000100004c9c
- (id)initWithPurgeRequest:(id)arg1;	// IMP=0x0000000100004c24
- (id)init;	// IMP=0x0000000100004c14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

