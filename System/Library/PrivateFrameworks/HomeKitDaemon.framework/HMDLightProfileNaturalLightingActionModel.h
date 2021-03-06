/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDActionModel.h>

@class NSNumber, NSUUID, NSSet;

@interface HMDLightProfileNaturalLightingActionModel : HMDActionModel

@property (retain) NSNumber * naturalLightingEnabledField; 
@property (retain) NSUUID * lightProfileUUID; 
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled; 
@property (retain) NSUUID * accessoryUUID; 
@property (retain) NSSet * serviceUUIDs; 
+(id)properties;
-(BOOL)isNaturalLightingEnabled;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(id)dependentUUIDs;
@end

