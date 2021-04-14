/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INObject.h>

@class NSString, NSArray;

@interface DeviceQuery : INObject

@property (readonly,nonatomic) NSString * description; 
@property (nonatomic,copy) NSArray * accessoryNames; 
@property (nonatomic,copy) NSArray * roomNames; 
@property (nonatomic,copy) NSArray * zoneNames; 
@property (nonatomic,copy) NSArray * placeHints; 
@property (nonatomic,copy) NSString * deviceQuantifier; 
@property (nonatomic,copy) NSArray * serviceNames; 
@property (nonatomic,copy) NSArray * deviceTypes; 
@property (nonatomic,copy) NSArray * deviceGroups; 
@property (nonatomic,copy) NSArray * fromEntities; 
@property (assign,nonatomic) long long mediaType; 
@property (nonatomic,copy) NSArray * toEntities; 
-(NSString *)description;
@end
