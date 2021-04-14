/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INObject.h>

@class NSString, NSDate;

@interface DeviceContext : INObject

@property (readonly,nonatomic) NSString * description; 
@property (nonatomic,copy) NSString * routeId; 
@property (assign,nonatomic) long long proximity; 
@property (assign,nonatomic) long long nowPlayingState; 
@property (nonatomic,copy) NSDate * nowPlayingTimestamp; 
@property (assign,nonatomic) long long nowPlayingMediaType; 
@property (nonatomic,copy) NSString * groupId; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
@end

