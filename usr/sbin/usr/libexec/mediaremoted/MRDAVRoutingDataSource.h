//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRDAVRoute, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRDAVRoutingDataSource : NSObject
{
    NSMutableDictionary *_authorizationCallbacks;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    _Bool _currentRouteSupportsVolumeControl;	// 24 = 0x18
    unsigned int _discoveryMode;	// 28 = 0x1c
    unsigned int _externalScreenType;	// 32 = 0x20
    MRDAVRoute *_pickedRoute;	// 40 = 0x28
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100013698
- (void).cxx_destruct;	// IMP=0x0000000100013da4
@property(readonly, nonatomic) _Bool currentRouteSupportsVolumeControl; // @synthesize currentRouteSupportsVolumeControl=_currentRouteSupportsVolumeControl;
@property(readonly, nonatomic) unsigned int externalScreenType; // @synthesize externalScreenType=_externalScreenType;
@property(readonly, nonatomic) MRDAVRoute *pickedRoute; // @synthesize pickedRoute=_pickedRoute;
@property(nonatomic) unsigned int discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (CDUnknownBlockType)authorizationRequestCallbackForRoute:(id)arg1;	// IMP=0x0000000100013bdc
- (void)removeAuthorizationCallbackForRoute:(id)arg1;	// IMP=0x0000000100013b0c
- (void)addAuthorizationCallbackForRoute:(id)arg1 requestCallback:(CDUnknownBlockType)arg2;	// IMP=0x000000010001394c
- (_Bool)unpickAirPlayRoutes;	// IMP=0x0000000100013944
- (void)userCancelledPickingRoute:(id)arg1;	// IMP=0x0000000100013940
- (_Bool)resetPickedSystemRouteForSource:(unsigned int)arg1;	// IMP=0x0000000100013938
- (_Bool)resetPickedRouteForSource:(unsigned int)arg1;	// IMP=0x0000000100013930
- (_Bool)setPickedSystemRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x0000000100013928
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 forSource:(unsigned int)arg3;	// IMP=0x0000000100013920
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2;	// IMP=0x0000000100013918
- (id)pickedRouteForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x0000000100013910
- (id)pickedRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x0000000100013864
- (id)pickedRouteForCategory:(id)arg1;	// IMP=0x000000010001385c
- (id)pickableRoutesForCategory:(id)arg1 source:(unsigned int)arg2;	// IMP=0x0000000100013854
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x000000010001384c
@property(readonly, nonatomic) NSArray *pickedRoutes;
- (id)init;	// IMP=0x0000000100013718

@end
