/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>

@class NSString, NSData;

@interface MarkForDeletionRequest : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int application; 
@property (assign,nonatomic) unsigned long long appVersion; 
@property (nonatomic,copy) NSString * requestUuid; 
@property (nonatomic,copy) NSString * uri; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,copy) NSData * deviceId; 
@property (nonatomic,copy) NSData * clientData; 
+(id)descriptor;
@end

