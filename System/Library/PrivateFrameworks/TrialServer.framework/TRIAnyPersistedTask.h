/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class NSData;

@interface TRIAnyPersistedTask : TRIPBMessage

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasType; 
@property (nonatomic,copy) NSData * serialized; 
@property (assign,nonatomic) BOOL hasSerialized; 
+(id)descriptor;
@end

