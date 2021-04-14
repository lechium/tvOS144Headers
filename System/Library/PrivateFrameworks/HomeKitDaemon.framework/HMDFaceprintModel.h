/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSUUID, HMBModelReference;

@interface HMDFaceprintModel : HMBModel

@property (copy) NSData * data; 
@property (copy) NSUUID * modelUUID; 
@property (retain) HMBModelReference * faceCrop; 
+(id)hmbProperties;
+(BOOL)hmbExcludeFromCloudStorage;
-(id)createFaceprint;
-(id)initWithFaceprint:(id)arg1 ;
@end
