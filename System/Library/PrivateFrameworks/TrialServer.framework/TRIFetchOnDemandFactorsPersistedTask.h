/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPersistedTaskAttribution, NSMutableArray;

@interface TRIFetchOnDemandFactorsPersistedTask : TRIPBMessage

@property (nonatomic,copy) NSString * namespaceName; 
@property (assign,nonatomic) BOOL hasNamespaceName; 
@property (assign,nonatomic) int retryCount; 
@property (assign,nonatomic) BOOL hasRetryCount; 
@property (nonatomic,copy) NSString * notificationKey; 
@property (assign,nonatomic) BOOL hasNotificationKey; 
@property (nonatomic,retain) TRIPersistedTaskAttribution * taskAttribution; 
@property (assign,nonatomic) BOOL hasTaskAttribution; 
@property (nonatomic,retain) NSMutableArray * treatmentAssetIndexesArray; 
@property (nonatomic,readonly) unsigned long long treatmentAssetIndexesArray_Count; 
+(id)descriptor;
@end

