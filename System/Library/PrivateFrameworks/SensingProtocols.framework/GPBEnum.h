/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSString, NSMutableArray, GPBSourceContext;

@interface GPBEnum : GPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSMutableArray * enumvalueArray; 
@property (nonatomic,readonly) unsigned long long enumvalueArray_Count; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (nonatomic,retain) GPBSourceContext * sourceContext; 
@property (assign,nonatomic) BOOL hasSourceContext; 
@property (assign,nonatomic) int syntax; 
+(id)descriptor;
@end

