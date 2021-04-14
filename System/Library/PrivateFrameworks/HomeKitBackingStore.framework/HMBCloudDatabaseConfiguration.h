/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CKContainerID, NSString, CKOperationConfiguration, HMFScheduler;

@interface HMBCloudDatabaseConfiguration : HMFObject <NSCopying, NSMutableCopying> {

	BOOL _manateeContainer;
	CKContainerID* _containerID;
	NSString* _sourceApplicationBundleIdentifier;
	CKOperationConfiguration* _defaultOperationConfiguration;
	HMFScheduler* _apsRegistrationScheduler;

}

@property (getter=isManateeContainer) BOOL manateeContainer;                            //@synthesize manateeContainer=_manateeContainer - In the implementation block
@property (copy) CKOperationConfiguration * defaultOperationConfiguration;              //@synthesize defaultOperationConfiguration=_defaultOperationConfiguration - In the implementation block
@property (copy) NSString * sourceApplicationBundleIdentifier;                          //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) HMFScheduler * apsRegistrationScheduler;                   //@synthesize apsRegistrationScheduler=_apsRegistrationScheduler - In the implementation block
@property (copy,readonly) CKContainerID * containerID;                                  //@synthesize containerID=_containerID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CKContainerID *)containerID;
-(CKOperationConfiguration *)defaultOperationConfiguration;
-(void)setDefaultOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(id)initWithContainerID:(id)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)attributeDescriptions;
-(void)setManateeContainer:(BOOL)arg1 ;
-(BOOL)isManateeContainer;
-(HMFScheduler *)apsRegistrationScheduler;
-(void)setApsRegistrationScheduler:(HMFScheduler *)arg1 ;
@end
