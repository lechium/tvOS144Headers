//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WiFiUserNotificationHistory : NSObject
{
    double _recommendationDistanceThreshold;	// 8 = 0x8
    long long _maxSystemCancellationAttempts;	// 16 = 0x10
    NSMutableDictionary *_notifications;	// 24 = 0x18
    NSString *_lastRecommendedSSID;	// 32 = 0x20
}

@property(retain, nonatomic) NSString *lastRecommendedSSID; // @synthesize lastRecommendedSSID=_lastRecommendedSSID;
@property(retain, nonatomic) NSMutableDictionary *notifications; // @synthesize notifications=_notifications;
@property(nonatomic) long long maxSystemCancellationAttempts; // @synthesize maxSystemCancellationAttempts=_maxSystemCancellationAttempts;
@property(nonatomic) double recommendationDistanceThreshold; // @synthesize recommendationDistanceThreshold=_recommendationDistanceThreshold;
- (void)reset;	// IMP=0x0000000100081360
- (void)resetAttemptsForSSID:(id)arg1;	// IMP=0x00000001000811b0
- (int)canPresentRecommendationForSSID:(id)arg1 currentLocation:(id)arg2;	// IMP=0x0000000100080d64
- (void)handleNotificationResponseForSSID:(id)arg1 type:(int)arg2 response:(int)arg3;	// IMP=0x0000000100080afc
- (void)presentedNotificationForSSID:(id)arg1 type:(int)arg2 currentLocation:(id)arg3;	// IMP=0x0000000100080998
- (void)dealloc;	// IMP=0x0000000100080948
- (id)init;	// IMP=0x00000001000808e4

@end
