/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrialProto/TRIPBMessage.h>

@class TRIPBInt32Array, NSString, NSMutableArray;

@interface TRIPBSourceCodeInfo_Location : TRIPBMessage

@property (nonatomic,retain) TRIPBInt32Array * pathArray; 
@property (nonatomic,readonly) unsigned long long pathArray_Count; 
@property (nonatomic,retain) TRIPBInt32Array * spanArray; 
@property (nonatomic,readonly) unsigned long long spanArray_Count; 
@property (nonatomic,copy) NSString * leadingComments; 
@property (assign,nonatomic) BOOL hasLeadingComments; 
@property (nonatomic,copy) NSString * trailingComments; 
@property (assign,nonatomic) BOOL hasTrailingComments; 
@property (nonatomic,retain) NSMutableArray * leadingDetachedCommentsArray; 
@property (nonatomic,readonly) unsigned long long leadingDetachedCommentsArray_Count; 
+(id)descriptor;
@end

