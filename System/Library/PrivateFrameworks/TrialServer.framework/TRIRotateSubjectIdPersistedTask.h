/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBTimestamp;

@interface TRIRotateSubjectIdPersistedTask : TRIPBMessage

@property (assign,nonatomic) BOOL forceUpdate; 
@property (assign,nonatomic) BOOL hasForceUpdate; 
@property (nonatomic,copy) NSString * deviceId; 
@property (assign,nonatomic) BOOL hasDeviceId; 
@property (nonatomic,retain) TRIPBTimestamp * nextRotationTimestamp; 
@property (assign,nonatomic) BOOL hasNextRotationTimestamp; 
+(id)descriptor;
@end

