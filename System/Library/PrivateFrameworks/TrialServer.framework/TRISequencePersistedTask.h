/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class TRIAnyPersistedTask;

@interface TRISequencePersistedTask : TRIPBMessage

@property (nonatomic,retain) TRIAnyPersistedTask * task; 
@property (assign,nonatomic) BOOL hasTask; 
@property (nonatomic,retain) TRIAnyPersistedTask * dependentTask; 
@property (assign,nonatomic) BOOL hasDependentTask; 
+(id)descriptor;
@end

