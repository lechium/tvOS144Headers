/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class TRIPBExtensionRangeOptions;

@interface TRIPBDescriptorProto_ExtensionRange : TRIPBMessage

@property (assign,nonatomic) int start; 
@property (assign,nonatomic) BOOL hasStart; 
@property (assign,nonatomic) int end; 
@property (assign,nonatomic) BOOL hasEnd; 
@property (nonatomic,retain) TRIPBExtensionRangeOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
+(id)descriptor;
@end

