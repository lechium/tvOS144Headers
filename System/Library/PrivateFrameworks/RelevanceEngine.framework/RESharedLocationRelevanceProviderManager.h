/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REEngineLocationManagerObserver.h>
#import <libobjc.A.dylib/RESharedLocationRelevanceProviderManagerProperties.h>

@class CLLocation, NSString;

@interface RESharedLocationRelevanceProviderManager : RERelevanceProviderManager <REEngineLocationManagerObserver, RESharedLocationRelevanceProviderManagerProperties> {

	CLLocation* _lastLocationUpdate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocation * currentLocation; 
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)resume;
-(void)pause;
-(CLLocation *)currentLocation;
-(void)_queue_loadLocation:(id)arg1 ;
-(void)locationManagerDidUpdateLocation:(id)arg1 ;
@end

