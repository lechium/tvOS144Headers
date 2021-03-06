/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>

@protocol OS_dispatch_source;
@class geo_isolater, NSDictionary, NSMutableDictionary, NSObject, NSString;

@interface GEODataRequestThrottler : NSObject <GEOConfigChangeListenerDelegate> {

	geo_isolater* _isolation;
	NSDictionary* _defaultThrottlePolicy;
	NSDictionary* _globalThrottlePolicy;
	BOOL _throttlePoliciesCached;
	NSMutableDictionary* _throttlers;
	NSObject*<OS_dispatch_source> _updateStateTimer;
	int _defaultChangedNotification;
	id _networkChangedNotification;
	unsigned char _throttleEventLogLevel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedThrottler;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)_reset;
-(void)reset;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_GE84*)arg1 ;
-(void)pruneThrottlers;
-(void)_withThrottlersForKey:(GEOThrottleKey)arg1 auditToken:(id)arg2 do:(/*^block*/id)arg3 ;
-(id)throttlerForKeyPath:(id)arg1 ;
-(void)_pruneThrottlers;
-(void)_updateSavedState:(id)arg1 ;
-(BOOL)allowRequest:(SCD_Struct_GE86)arg1 forClient:(id)arg2 throttlerToken:(id*)arg3 error:(id*)arg4 ;
-(void)getInfoForRequest:(SCD_Struct_GE86)arg1 client:(id)arg2 timeUntilNextReset:(double*)arg3 availableRequestCount:(unsigned*)arg4 ;
@end

