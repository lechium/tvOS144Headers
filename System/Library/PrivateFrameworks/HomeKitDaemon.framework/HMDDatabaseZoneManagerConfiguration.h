/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDDatabaseZoneManagerConfiguration : HMFObject <NSCopying, NSMutableCopying> {

	BOOL _zoneOwner;
	BOOL _shouldCreateZone;
	NSSet* _externalRecordTypesForSubscriptions;
	HMDHomeKitVersion* _minimumHomeKitVersion;
	NSSet* _requiredSupportedFeatures;
	HMBCloudZoneConfiguration* _cloudZoneConfiguration;

}

@property (getter=isZoneOwner) BOOL zoneOwner;                                    //@synthesize zoneOwner=_zoneOwner - In the implementation block
@property (assign) BOOL shouldCreateZone;                                         //@synthesize shouldCreateZone=_shouldCreateZone - In the implementation block
@property (copy) NSSet * externalRecordTypesForSubscriptions;                     //@synthesize externalRecordTypesForSubscriptions=_externalRecordTypesForSubscriptions - In the implementation block
@property (copy) HMDHomeKitVersion * minimumHomeKitVersion;                       //@synthesize minimumHomeKitVersion=_minimumHomeKitVersion - In the implementation block
@property (copy) NSSet * requiredSupportedFeatures;                               //@synthesize requiredSupportedFeatures=_requiredSupportedFeatures - In the implementation block
@property (copy) HMBCloudZoneConfiguration * cloudZoneConfiguration;              //@synthesize cloudZoneConfiguration=_cloudZoneConfiguration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)attributeDescriptions;
-(void)setZoneOwner:(BOOL)arg1 ;
-(void)setMinimumHomeKitVersion:(HMDHomeKitVersion *)arg1 ;
-(void)setRequiredSupportedFeatures:(NSSet *)arg1 ;
-(BOOL)shouldCreateZone;
-(BOOL)isZoneOwner;
-(NSSet *)externalRecordTypesForSubscriptions;
-(HMDHomeKitVersion *)minimumHomeKitVersion;
-(NSSet *)requiredSupportedFeatures;
-(HMBCloudZoneConfiguration *)cloudZoneConfiguration;
-(void)setShouldCreateZone:(BOOL)arg1 ;
-(void)setExternalRecordTypesForSubscriptions:(NSSet *)arg1 ;
-(void)setCloudZoneConfiguration:(HMBCloudZoneConfiguration *)arg1 ;
@end

