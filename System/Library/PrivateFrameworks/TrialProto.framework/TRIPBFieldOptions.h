/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBFieldOptions : TRIPBMessage

@property (assign,nonatomic) int ctype; 
@property (assign,nonatomic) BOOL hasCtype; 
@property (assign,nonatomic) BOOL packed; 
@property (assign,nonatomic) BOOL hasPacked; 
@property (assign,nonatomic) int jstype; 
@property (assign,nonatomic) BOOL hasJstype; 
@property (assign,nonatomic) BOOL lazy; 
@property (assign,nonatomic) BOOL hasLazy; 
@property (assign,nonatomic) BOOL deprecated; 
@property (assign,nonatomic) BOOL hasDeprecated; 
@property (assign,nonatomic) BOOL weak; 
@property (assign,nonatomic) BOOL hasWeak; 
@property (nonatomic,retain) NSMutableArray * uninterpretedOptionArray; 
@property (nonatomic,readonly) unsigned long long uninterpretedOptionArray_Count; 
+(id)descriptor;
@end
