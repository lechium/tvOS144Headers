/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>

@class Device, LanguageOption, NSArray, DeviceQuery;

@interface SetSubtitleStateIntent : INIntent

@property (nonatomic,copy) Device * device; 
@property (assign,nonatomic) long long enable; 
@property (nonatomic,copy) LanguageOption * language; 
@property (nonatomic,copy) NSArray * deviceContext; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) DeviceQuery * deviceQuery; 
@end
