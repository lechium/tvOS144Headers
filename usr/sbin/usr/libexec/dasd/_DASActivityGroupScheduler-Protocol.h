//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_DASActivityScheduler-Protocol.h"

@class NSString, _DASActivity, _DASActivityGroup;

@protocol _DASActivityGroupScheduler <_DASActivityScheduler>
- (void)submitActivity:(_DASActivity *)arg1 inGroupWithName:(NSString *)arg2;
- (void)submitActivity:(_DASActivity *)arg1 inGroup:(_DASActivityGroup *)arg2;
- (void)createActivityGroup:(_DASActivityGroup *)arg1;
@end
