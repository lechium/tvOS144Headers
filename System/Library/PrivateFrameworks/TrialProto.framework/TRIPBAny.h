/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSData;

@interface TRIPBAny : TRIPBMessage

@property (nonatomic,copy) NSString * typeURL; 
@property (nonatomic,copy) NSData * value; 
+(id)descriptor;
+(id)anyWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
+(id)anyWithMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
-(BOOL)packWithMessage:(id)arg1 typeURLPrefix:(id)arg2 error:(id*)arg3 ;
-(id)initWithMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)packWithMessage:(id)arg1 error:(id*)arg2 ;
-(id)unpackMessageClass:(Class)arg1 error:(id*)arg2 ;
@end

