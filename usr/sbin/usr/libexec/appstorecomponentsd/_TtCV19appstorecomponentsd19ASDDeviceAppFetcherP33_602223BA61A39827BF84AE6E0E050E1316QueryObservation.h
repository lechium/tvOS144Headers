//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDAppQueryResultsObserver-Protocol.h"

@class MISSING_TYPE, NSString;

@interface _TtCV19appstorecomponentsd19ASDDeviceAppFetcherP33_602223BA61A39827BF84AE6E0E050E1316QueryObservation : NSObject <ASDAppQueryResultsObserver>
{
    MISSING_TYPE *appQuery;	// 8 = 0x8
    MISSING_TYPE *taskScheduler;	// 16 = 0x10
    MISSING_TYPE *observer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002ada8
- (id)init;	// IMP=0x000000010002adf4
- (void)appQuery:(id)arg1 resultsDidChange:(id)arg2;	// IMP=0x000000010002ac28
@property(nonatomic, readonly) NSString *description;

@end

