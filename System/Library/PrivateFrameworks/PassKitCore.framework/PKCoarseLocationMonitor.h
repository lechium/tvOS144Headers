/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface PKCoarseLocationMonitor : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	BOOL _coarseLocationEnabled;

}

@property (nonatomic,readonly) BOOL coarseLocationEnabled;              //@synthesize coarseLocationEnabled=_coarseLocationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(BOOL)coarseLocationEnabled;
@end

