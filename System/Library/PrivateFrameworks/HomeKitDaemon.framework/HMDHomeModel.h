/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSData, NSString, NSDate, NSNumber, HMDHomeKitVersion, HMDNaturalLightingContext;

@interface HMDHomeModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSData * encodedNaturalLightingContext; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * ownerName; 
@property (nonatomic,retain) NSString * ownerUserID; 
@property (nonatomic,retain) NSString * ownerUUID; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSDate * firstHAPAccessoryAddedDate; 
@property (nonatomic,retain) NSString * defaultRoomUUID; 
@property (nonatomic,retain) NSNumber * presenceAuthorizationStatus; 
@property (nonatomic,retain) NSNumber * presenceComputeStatus; 
@property (nonatomic,retain) NSData * ownerPublicKey; 
@property (nonatomic,retain) NSData * homeLocationData; 
@property (nonatomic,retain) NSString * primaryResidentUUID; 
@property (nonatomic,copy) HMDHomeKitVersion * sharedHomeSourceVersion; 
@property (nonatomic,retain) NSNumber * networkProtectionMode; 
@property (nonatomic,retain) NSNumber * multiUserEnabled; 
@property (nonatomic,retain) NSNumber * hasAnyUserAcknowledgedCameraRecordingOnboarding; 
@property (nonatomic,retain) NSNumber * doorbellChimeEnabled; 
@property (nonatomic,copy) HMDNaturalLightingContext * naturalLightingContext; 
+(id)properties;
-(HMDNaturalLightingContext *)naturalLightingContext;
-(void)setNaturalLightingContext:(HMDNaturalLightingContext *)arg1 ;
@end

