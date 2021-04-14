/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModel.h>

@class NSUUID, NSNumber;

@interface HMDUserActionPredictionModel : HMBModel

@property (copy) NSUUID * predictionTargetUUID; 
@property (copy) NSUUID * targetServiceUUID; 
@property (copy) NSUUID * targetServiceGroupUUID; 
@property (copy) NSUUID * targetGroupUUID; 
@property (copy) NSNumber * type; 
@property (copy) NSNumber * groupType; 
@property (copy) NSNumber * predictionScore; 
+(id)hmbProperties;
+(BOOL)hmbExcludeFromCloudStorage;
-(id)userActionPrediction;
-(id)initWithUserActionPrediction:(id)arg1 ;
@end

