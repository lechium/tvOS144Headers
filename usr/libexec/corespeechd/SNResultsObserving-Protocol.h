//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SNRequest, SNResult;

@protocol SNResultsObserving <NSObject>
- (void)request:(id <SNRequest>)arg1 didProduceResult:(id <SNResult>)arg2;

@optional
- (void)requestDidComplete:(id <SNRequest>)arg1;
- (void)request:(id <SNRequest>)arg1 didFailWithError:(NSError *)arg2;
@end
